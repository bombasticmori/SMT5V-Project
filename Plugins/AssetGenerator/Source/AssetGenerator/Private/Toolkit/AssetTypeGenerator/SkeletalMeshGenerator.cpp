#include "Toolkit/AssetTypeGenerator/SkeletalMeshGenerator.h"
#include "AutomatedAssetImportData.h"
#include "Dom/JsonObject.h"
#include "Toolkit/ObjectHierarchySerializer.h"
#include "EditorFramework/AssetImportData.h"
#include "Engine/SkeletalMesh.h"
#include "Factories/FbxImportUI.h"
#include "Factories/FbxSkeletalMeshImportData.h"
#include "Factories/ReimportFbxSkeletalMeshFactory.h"
#include "Modules/ModuleManager.h"
#include "PhysicsEngine/BodySetup.h"
#include "Toolkit/AssetGeneration/PublicProjectStubHelper.h"

void USkeletalMeshGenerator::CreateAssetPackage() {
	UPackage* NewPackage = CreatePackage(
#if ENGINE_MINOR_VERSION < 26
	nullptr, 
#endif
*GetPackageName().ToString());
	USkeletalMesh* NewSkeletalMesh = ImportSkeletalMesh(NewPackage, GetAssetName(), RF_Public | RF_Standalone);
	SetPackageAndAsset(NewPackage, NewSkeletalMesh);
	
	PopulateSkeletalMeshProperties(NewSkeletalMesh);
}

void USkeletalMeshGenerator::OnExistingPackageLoaded() {
	USkeletalMesh* ExistingMesh = GetAsset<USkeletalMesh>();
	
	if (!IsSkeletalMeshSourceFileUpToDate(ExistingMesh)) {
		UE_LOG(LogAssetGenerator, Log, TEXT("Refreshing SkeletalMesh %s Source Model"), *GetPackageName().ToString());
		ReimportSkeletalMeshSource(ExistingMesh);
	}
	
	if (!IsSkeletalMeshPropertiesUpToDate(ExistingMesh)) {
		UE_LOG(LogAssetGenerator, Log, TEXT("Refreshing SkeletalMesh %s Properties"), *GetPackageName().ToString());
		PopulateSkeletalMeshProperties(ExistingMesh);
	}
}

USkeletalMesh* USkeletalMeshGenerator::ImportSkeletalMesh(UPackage* Package, const FName& AssetName, const EObjectFlags ObjectFlags) const {
	UFbxFactory* SkeletalMeshFactory = NewObject<UFbxFactory>(GetTransientPackage(), NAME_None);
		
	SkeletalMeshFactory->SetAutomatedAssetImportData(NewObject<UAutomatedAssetImportData>(SkeletalMeshFactory));
	SkeletalMeshFactory->SetDetectImportTypeOnImport(false);
	
	SetupFbxImportSettings(SkeletalMeshFactory->ImportUI, AssetName, Package);

	FString AssetFbxFilePath;
	if (!IsGeneratingPublicProject()) {
		AssetFbxFilePath = GetAdditionalDumpFilePath(TEXT(""), TEXT("fbx"));;
	} else {
		AssetFbxFilePath = FPublicProjectStubHelper::DefaultSkeletalMesh.GetFullFilePath();
	}
	
	bool bOperationCancelled = false;
	UObject* ResultMesh = SkeletalMeshFactory->ImportObject(USkeletalMesh::StaticClass(), Package, AssetName, ObjectFlags, AssetFbxFilePath, TEXT(""),bOperationCancelled);
        
	checkf(ResultMesh, TEXT("Failed to import SkeletalMesh %s from FBX file %s. See log for errors"), *GetPackageName().ToString(), *AssetFbxFilePath);
	checkf(ResultMesh->GetOuter() == Package, TEXT("Expected Outer to be package %s, found %s"), *Package->GetName(), *ResultMesh->GetOuter()->GetPathName());
	checkf(ResultMesh->GetFName() == AssetName, TEXT("Expected Name to be %s, but found %s"), *AssetName.ToString(), *ResultMesh->GetName());
	
	USkeletalMesh* ResultSkelMesh = CastChecked<USkeletalMesh>(ResultMesh);

	UPhysicsAsset* PhysicsAsset = GetPhysicsAssetReference();
	if (PhysicsAsset) {
		PhysicsAsset->PreviewSkeletalMesh = ResultMesh;
		PhysicsAsset->MarkPackageDirty();	
	}
	
	return ResultSkelMesh;
}

void USkeletalMeshGenerator::ReimportSkeletalMeshSource(USkeletalMesh* Asset) {
	UReimportFbxSkeletalMeshFactory* SkeletalMeshFactory = NewObject<UReimportFbxSkeletalMeshFactory>(GetTransientPackage(), NAME_None);
	
	SkeletalMeshFactory->SetAutomatedAssetImportData(NewObject<UAutomatedAssetImportData>(SkeletalMeshFactory));
	SkeletalMeshFactory->SetDetectImportTypeOnImport(false);
	
	SetupFbxImportSettings(SkeletalMeshFactory->ImportUI, GetAssetName(), Asset->
#if ENGINE_MINOR_VERSION == 25
	GetOutermost()
#else
	GetPackage()
#endif
	);
	
	FString AssetFbxFilePath;
	if (!IsGeneratingPublicProject()) {
		AssetFbxFilePath = GetAdditionalDumpFilePath(TEXT(""), TEXT("fbx"));
	} else {
		AssetFbxFilePath = FPublicProjectStubHelper::DefaultSkeletalMesh.GetFullFilePath();
	}
	
	SkeletalMeshFactory->SetReimportPaths(Asset, {AssetFbxFilePath});
	SkeletalMeshFactory->Reimport(Asset);

	UPhysicsAsset* PhysicsAsset = GetPhysicsAssetReference();
	if (PhysicsAsset) {
		PhysicsAsset->PreviewSkeletalMesh = Asset;
		PhysicsAsset->MarkPackageDirty();	
	}
	
	MarkAssetChanged();
}

void USkeletalMeshGenerator::SetupFbxImportSettings(UFbxImportUI* ImportUI, const FName& AssetName, UPackage* Package) const {
	ImportUI->MeshTypeToImport = FBXIT_SkeletalMesh;
	ImportUI->bOverrideFullName = true;
	ImportUI->bImportMaterials = false;
	ImportUI->bImportTextures = false;
	ImportUI->bImportAsSkeletal = true;
	ImportUI->bImportAnimations = false;

	if (!IsGeneratingPublicProject()) {
		const int32 SkeletonObjectIndex = GetAssetData()->GetObjectField(TEXT("AssetObjectData"))->GetIntegerField(TEXT("Skeleton"));
		USkeleton* Skeleton = Cast<USkeleton>(GetObjectSerializer()->DeserializeObject(SkeletonObjectIndex));	
		if (Skeleton) {
			ImportUI->Skeleton = Skeleton;
		} else {
			UE_LOG(LogAssetGenerator, Warning, TEXT("Failed to find skeleton for SkeletalMesh %s. Using default skeleton"), *GetPackageName().ToString());
			ImportUI->Skeleton = FPublicProjectStubHelper::DefaultSkeletalMeshSkeleton.GetObject();
		}
	} else {
		ImportUI->Skeleton = FPublicProjectStubHelper::DefaultSkeletalMeshSkeleton.GetObject();
	}

	ImportUI->SkeletalMeshImportData = NewObject<UFbxSkeletalMeshImportData>(ImportUI, NAME_None, RF_NoFlags);
	ImportUI->SkeletalMeshImportData->ImportContentType = FBXICT_All;
	ImportUI->SkeletalMeshImportData->VertexColorImportOption = EVertexColorImportOption::Replace;
	ImportUI->SkeletalMeshImportData->bUpdateSkeletonReferencePose = false;

	if (!IsGeneratingPublicProject()) {
		UPhysicsAsset* PhysicsAsset = GetPhysicsAssetReference();
		if (PhysicsAsset) {
			ImportUI->bCreatePhysicsAsset = false;
			ImportUI->PhysicsAsset = PhysicsAsset;
		}
	}
}

void USkeletalMeshGenerator::GetAdditionalPackagesToSave(TArray<UPackage*>& OutPackages) {
	const USkeletalMesh* SkeletalMesh = GetAsset<USkeletalMesh>();

	if (SkeletalMesh->Skeleton) {
		OutPackages.Add(SkeletalMesh->Skeleton->GetOutermost());
	}
	if (SkeletalMesh->PhysicsAsset) {
		OutPackages.Add(SkeletalMesh->PhysicsAsset->GetOutermost());
	}
}

UPhysicsAsset* USkeletalMeshGenerator::GetPhysicsAssetReference() const
{
	const int32 PhysicsAssetObjectIndex = GetAssetData()->GetObjectField(TEXT("AssetObjectData"))->GetIntegerField(TEXT("PhysicsAsset"));
	return Cast<UPhysicsAsset>(GetObjectSerializer()->DeserializeObject(PhysicsAssetObjectIndex));
}

void USkeletalMeshGenerator::PopulateSkeletalMeshProperties(USkeletalMesh* Asset) {
	const TSharedPtr<FJsonObject> AssetData = GetAssetData();
	const TSharedPtr<FJsonObject> AssetObjectProperties = AssetData->GetObjectField(TEXT("AssetObjectData"));

	GetObjectSerializer()->DeserializeObjectProperties(AssetObjectProperties.ToSharedRef(), Asset);
	
	const TArray<TSharedPtr<FJsonValue>>& Materials = AssetData->GetArrayField(TEXT("Materials"));

	//TODO not quite exactly the case, because for some LODs the material instances can be different, but we discard any LODs
	//ensure(Materials.Num() == Asset->Materials.Num());
	
	for (int32 i = 0; i < FMath::Min(Materials.Num(), Asset->Materials.Num()); i++) {
		const TSharedPtr<FJsonObject> MaterialObject = Materials[i]->AsObject();
		
		const FName MaterialSlotName = FName(*MaterialObject->GetStringField(TEXT("MaterialSlotName")));
		UObject* MaterialInterface = GetObjectSerializer()->DeserializeObject(MaterialObject->GetIntegerField(TEXT("MaterialInterface")));
		
		FSkeletalMaterial& StaticMaterial = Asset->Materials[i];
		StaticMaterial.MaterialSlotName = MaterialSlotName;
		
		if (MaterialInterface) {
			StaticMaterial.MaterialInterface = CastChecked<UMaterialInterface>(MaterialInterface);
		}
	}

	if (Asset->bEnablePerPolyCollision) {
		UObject* BodySetupObject = GetObjectSerializer()->DeserializeObject(AssetData->GetIntegerField(TEXT("BodySetup")));
		Asset->BodySetup = CastChecked<UBodySetup>(BodySetupObject);
	}
	MarkAssetChanged();
}

bool USkeletalMeshGenerator::IsSkeletalMeshPropertiesUpToDate(USkeletalMesh* Asset) const {
	const TSharedPtr<FJsonObject> AssetData = GetAssetData();
	const TSharedPtr<FJsonObject> AssetObjectProperties = AssetData->GetObjectField(TEXT("AssetObjectData"));

	//If object properties are not up to date, we need to re-apply them
	if (!GetObjectSerializer()->AreObjectPropertiesUpToDate(AssetObjectProperties.ToSharedRef(), Asset)) {
		return false;
	}

	//check material slot names and values
	const TArray<TSharedPtr<FJsonValue>>& Materials = AssetData->GetArrayField(TEXT("Materials"));

	//TODO not quite exactly the case, because for some LODs the material instances can be different, but we discard any LODs
	//ensure(Materials.Num() == Asset->Materials.Num());

	for (int32 i = 0; i < FMath::Min(Materials.Num(), Asset->Materials.Num()); i++) {
		const TSharedPtr<FJsonObject> MaterialObject = Materials[i]->AsObject();
		
		const FName MaterialSlotName = FName(*MaterialObject->GetStringField(TEXT("MaterialSlotName")));
		const int32 MaterialInterface = MaterialObject->GetIntegerField(TEXT("MaterialInterface"));
		const FSkeletalMaterial& StaticMaterial = Asset->Materials[i];
		
		if (!GetObjectSerializer()->CompareUObjects(MaterialInterface, StaticMaterial.MaterialInterface, true, true) ||
			StaticMaterial.MaterialSlotName != MaterialSlotName) {
			return false;
		}
	}
	return true;
}

bool USkeletalMeshGenerator::IsSkeletalMeshSourceFileUpToDate(USkeletalMesh* Asset) const {
	const FAssetImportInfo& AssetImportInfo = Asset->AssetImportData->SourceData;
	const FMD5Hash& ExistingFileHash = AssetImportInfo.SourceFiles[0].FileHash;
	
	const FString ExistingFileHashString = LexToString(ExistingFileHash);
	
	FString ModelFileHash;
	if (!IsGeneratingPublicProject()) {
		ModelFileHash = GetAssetData()->GetStringField(TEXT("ModelFileHash"));;
	} else {
		ModelFileHash = FPublicProjectStubHelper::DefaultSkeletalMesh.GetFileHash();
	}
	return ExistingFileHashString == ModelFileHash;
}

void USkeletalMeshGenerator::PopulateStageDependencies(TArray<FPackageDependency>& OutDependencies) const {
	if (GetCurrentStage() == EAssetGenerationStage::CONSTRUCTION) {
		const TSharedPtr<FJsonObject> AssetData = GetAssetData();
		
		const TSharedPtr<FJsonObject> AssetObjectProperties = AssetData->GetObjectField(TEXT("AssetObjectData"));
		const TArray<TSharedPtr<FJsonValue>> ReferencedObjects = AssetObjectProperties->GetArrayField(TEXT("$ReferencedObjects"));

		const TArray<TSharedPtr<FJsonValue>>& Materials = AssetData->GetArrayField(TEXT("Materials"));
	
		TArray<FString> OutReferencedPackages;
		GetObjectSerializer()->CollectReferencedPackages(ReferencedObjects, OutReferencedPackages);

		if (AssetData->HasField(TEXT("BodySetup"))) {
			const int32 BodySetupObjectIndex = AssetData->GetIntegerField(TEXT("BodySetup"));
			GetObjectSerializer()->CollectObjectPackages(BodySetupObjectIndex, OutReferencedPackages);
		}

		for (int32 i = 0; i < Materials.Num(); i++) {
			const TSharedPtr<FJsonObject> MaterialObject = Materials[i]->AsObject();
			const int32 MaterialInterface = MaterialObject->GetIntegerField(TEXT("MaterialInterface"));
			GetObjectSerializer()->CollectObjectPackages(MaterialInterface, OutReferencedPackages);
		}
		
		for (const FString& DependencyPackageName : OutReferencedPackages) {
			OutDependencies.Add(FPackageDependency{*DependencyPackageName, EAssetGenerationStage::CDO_FINALIZATION});
		}
	}
}

FName USkeletalMeshGenerator::GetAssetClass() {
	return USkeletalMesh::StaticClass()->GetFName();
}
