#include "CharaMotionTableAssetActions.h"
#include "CharaMotionTable.h"

UClass* FCharaMotionTableAssetActions::GetSupportedClass() const
{
	return UCharaMotionTable::StaticClass();
}

FText FCharaMotionTableAssetActions::GetName() const
{
	return INVTEXT("Chara Motion Table");
}

FColor FCharaMotionTableAssetActions::GetTypeColor() const
{
	return FColor::Green;
}

uint32 FCharaMotionTableAssetActions::GetCategories()
{
	return EAssetTypeCategories::Animation;
}
