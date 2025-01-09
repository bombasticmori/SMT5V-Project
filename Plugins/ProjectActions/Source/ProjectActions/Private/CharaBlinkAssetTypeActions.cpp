#include "CharaBlinkAssetTypeActions.h"
#include "CharaBlink.h"

UClass* FCharaBlinkAssetTypeActions::GetSupportedClass() const
{
	return UCharaBlink::StaticClass();
}

FText FCharaBlinkAssetTypeActions::GetName() const
{
	return INVTEXT("CharaBlink");
}

FColor FCharaBlinkAssetTypeActions::GetTypeColor() const
{
	return FColor::Orange;
}

uint32 FCharaBlinkAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Animation;
}
