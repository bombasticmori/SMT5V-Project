#include "Toolkit/AssetTypeGenerator/PhysicsAssetGenerator.h"

UClass* UPhysicsAssetGenerator::GetAssetObjectClass() const {
	return UPhysicsAsset::StaticClass();
}

/*void UPhysicsAssetGenerator::PopulateSimpleAssetWithData(UObject* Asset) {
	Super::PopulateSimpleAssetWithData(Asset);

	FString AssetName = GetPackageName().ToString();
	bool AssetToChange = false;
	if (CheckMatchesName(AssetName)) {
		AssetToChange = true;
	} else {
		if (AssetName.RemoveFromStart("PHA_") || AssetName.RemoveFromStart("Phat_")) {
			AssetName = "SK_" + AssetName;
			AssetToChange = true;
		}
	}

	if (AssetToChange) {
		// The name now likely matches an existing skeletal mesh to assign to
		// Assign the skeletal mesh with name AssetName to the physics asset
		const USkeletalMesh* SkeletalMesh = LoadObject<USkeletalMesh>(NULL, *AssetName);
		if (SkeletalMesh) {
			UPhysicsAsset* PhysicsAsset = Cast<UPhysicsAsset>(Asset);
			PhysicsAsset->PreviewSkeletalMesh = SkeletalMesh;
		}
	}
}

bool UPhysicsAssetGenerator::IsSimpleAssetUpToDate(UObject* Asset) const {
	if (!Super::IsSimpleAssetUpToDate(Asset)) {
		return false;
	}

	FString AssetName = GetPackageName().ToString();
	bool AssetToChange = false;
	if (CheckMatchesName(AssetName)) {
		AssetToChange = true;
	} else {
		if (AssetName.RemoveFromStart("PHA_") || AssetName.RemoveFromStart("Phat_")) {
			AssetName = "SK_" + AssetName;
			AssetToChange = true;
		}
	}

	if (AssetToChange) {
		// The name now likely matches an existing skeletal mesh to assign to
		// Assign the skeletal mesh with name AssetName to the physics asset
		const USkeletalMesh* SkeletalMesh = LoadObject<USkeletalMesh>(NULL, *AssetName);
		if (SkeletalMesh) {
			UPhysicsAsset* PhysicsAsset = Cast<UPhysicsAsset>(Asset);
			PhysicsAsset->PreviewSkeletalMesh = SkeletalMesh;
		} else return false;
	}
	
	return true;
}

bool UPhysicsAssetGenerator::CheckMatchesName(FString& AssetName) {
	return AssetName.RemoveFromEnd("_Physics")
	|| AssetName.RemoveFromEnd("_PhysicsAsset")
	|| ("SK_" + AssetName).RemoveFromEnd("_PhysicsAsset")
	|| AssetName.RemoveFromEnd("_Ragdoll");
}*/

FName UPhysicsAssetGenerator::GetAssetClass() {
	return UPhysicsAsset::StaticClass()->GetFName();
}