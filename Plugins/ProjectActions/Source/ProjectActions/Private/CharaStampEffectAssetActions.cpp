#include "CharaStampEffectAssetActions.h"
#include "CharaStampEffectTable.h"

UClass* FCharaStampEffectAssetActions::GetSupportedClass() const
{
	return UCharaStampEffectTable::StaticClass();
}

FText FCharaStampEffectAssetActions::GetName() const
{
	return INVTEXT("Foot Stamp Effect Table");
}

FColor FCharaStampEffectAssetActions::GetTypeColor() const
{
	return FColor::Green;
}

uint32 FCharaStampEffectAssetActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}
