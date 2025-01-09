#include "MatParamApplierAssetTypeActions.h"
#include "MaterialParameterApplier.h"


UClass* FMatParamApplierAssetTypeActions::GetSupportedClass() const
{
	return UMaterialParameterApplier::StaticClass();
}

FText FMatParamApplierAssetTypeActions::GetName() const
{
	return INVTEXT("Material Parameter Applier");
}

FColor FMatParamApplierAssetTypeActions::GetTypeColor() const
{
	return FColor::Green;
}

uint32 FMatParamApplierAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::MaterialsAndTextures;
}


