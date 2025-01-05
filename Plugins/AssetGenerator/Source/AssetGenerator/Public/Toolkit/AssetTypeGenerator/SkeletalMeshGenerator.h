#pragma once
#include "CoreMinimal.h"
#include "Toolkit/AssetGeneration/AssetTypeGenerator.h"
#include "SkeletalMeshGenerator.generated.h"

UCLASS(MinimalAPI)
class USkeletalMeshGenerator : public UAssetTypeGenerator {
	GENERATED_BODY()
protected:
	virtual void CreateAssetPackage() override;
	virtual void OnExistingPackageLoaded() override;
	
	void PopulateSkeletalMeshProperties(USkeletalMesh* Asset);
	bool IsSkeletalMeshPropertiesUpToDate(USkeletalMesh* Asset) const;
	
	USkeletalMesh* ImportSkeletalMesh(UPackage* Package, const FName& AssetName, const EObjectFlags ObjectFlags) const;
	
	void ReimportSkeletalMeshSource(USkeletalMesh* Asset);
	bool IsSkeletalMeshSourceFileUpToDate(USkeletalMesh* Asset) const;

	void SetupFbxImportSettings(UFbxImportUI* ImportUI, const FName& AssetName, UPackage* Package) const;
	virtual void GetAdditionalPackagesToSave(TArray<UPackage*>& OutPackages) override;

	UPhysicsAsset* GetPhysicsAssetReference() const;
public:
	virtual void PopulateStageDependencies(TArray<FPackageDependency>& OutDependencies) const override;
	virtual FName GetAssetClass() override;
};