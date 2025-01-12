#include "CharaBlinkAssetTypeActions.h"
#include "CharaBlink.h"

UClass* FCharaBlinkAssetTypeActions::GetSupportedClass() const
{
	return UCharaBlink::StaticClass();
}

FText FCharaBlinkAssetTypeActions::GetName() const
{
	return INVTEXT("Chara Blink Asset");
}

FColor FCharaBlinkAssetTypeActions::GetTypeColor() const
{
	return FColor::Orange;
}

uint32 FCharaBlinkAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Animation;
}
