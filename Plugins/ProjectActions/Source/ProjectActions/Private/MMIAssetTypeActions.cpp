#include "MMIAssetTypeActions.h"
#include "MMIAsset.h"

UClass* FMMIAssetActions::GetSupportedClass() const
{
	return UMMIAsset::StaticClass();
}

FText FMMIAssetActions::GetName() const
{
	return INVTEXT("MMIAsset");
}

FColor FMMIAssetActions::GetTypeColor() const
{
	return FColor::Green;
}

uint32 FMMIAssetActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}
