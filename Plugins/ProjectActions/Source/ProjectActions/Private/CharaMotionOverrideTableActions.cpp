#include "CharaMotionOverrideTableActions.h"
#include "CharaMotionOverrideBlendTimeTable.h"

UClass* FCharaMotionOverrideTableActions::GetSupportedClass() const
{
	return UCharaMotionOverrideBlendTimeTable::StaticClass();
}

FText FCharaMotionOverrideTableActions::GetName() const
{
	return INVTEXT("Chara Motion Override Blend Time Table");
}

FColor FCharaMotionOverrideTableActions::GetTypeColor() const
{
	return FColor::Green;
}

uint32 FCharaMotionOverrideTableActions::GetCategories()
{
	return EAssetTypeCategories::Animation;
}
