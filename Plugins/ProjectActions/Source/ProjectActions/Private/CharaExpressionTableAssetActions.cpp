#include "CharaExpressionTableAssetActions.h"
#include "CharaExpressionTable.h"

UClass* FCharaExpressionTableAssetActions::GetSupportedClass() const
{
	return UCharaExpressionTable::StaticClass();
}

FText FCharaExpressionTableAssetActions::GetName() const
{
	return INVTEXT("Character Expression Table");
}

FColor FCharaExpressionTableAssetActions::GetTypeColor() const
{
	return FColor::Green;
}

uint32 FCharaExpressionTableAssetActions::GetCategories()
{
	return EAssetTypeCategories::Animation;
}

