#include "BPL_BattleCommon.h"

UBPL_BattleCommon::UBPL_BattleCommon() {
}

void UBPL_BattleCommon::TalkQuizNotCountAdd() {
}

TArray<FString> UBPL_BattleCommon::RetrieveCameraNameInner(const UDataTable* CameraTable, const FString& CoreName, int32 FB, int32 LR, bool IsNoWildCard) {
    return TArray<FString>();
}

int32 UBPL_BattleCommon::GetUpliftingGaugeMax() {
    return 0;
}

int32 UBPL_BattleCommon::GetUpliftingGaugeConsumptionValue() {
    return 0;
}

void UBPL_BattleCommon::BattleUIDrawWidgetToTarget(UTextureRenderTarget2D* target, UUserWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime) {
}

void UBPL_BattleCommon::BattleCommonSetCurrentHeroType(uint8 Type) {
}

void UBPL_BattleCommon::BattleCommonGetPreFirstActor(int32 encountID, bool isEvent, E_BTL_CHAR_TYPE& Type, int32& DevilID) {
}

int32 UBPL_BattleCommon::BattleCommonGetInochigoiCnt() {
    return 0;
}

uint8 UBPL_BattleCommon::BattleCommonGetCurrentHeroType() {
    return 0;
}

void UBPL_BattleCommon::BattleCommonDelInochigoiCnt(int32 Value) {
}

void UBPL_BattleCommon::BattleCommonClearInochigoiCnt() {
}


