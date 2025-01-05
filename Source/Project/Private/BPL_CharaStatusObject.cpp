#include "BPL_CharaStatusObject.h"

UBPL_CharaStatusObject::UBPL_CharaStatusObject() {
}

void UBPL_CharaStatusObject::Test_LogStatus(UUIStatusCtrlDataObjBase* dataObj) {
}

void UBPL_CharaStatusObject::SetBiographyText(TArray<UTextBlock*> textArr, int32 DevilID, const UScriptMessageAsset* StatusMessage, const UScriptMessageAsset* DevilProfile, int32 Offset, int32& newOffset, float& scrollBarRate, int32& rowMax) {
}

void UBPL_CharaStatusObject::ReleaseResidentStreamingTexture(ACustomPawn*& CustomPawn) {
}

void UBPL_CharaStatusObject::PreStreamStatusModelTexture(ACustomPawn*& CustomPawn, float second) {
}

bool UBPL_CharaStatusObject::IsSlotTitle(E_UI_STATUS_SLOT Type) {
    return false;
}

bool UBPL_CharaStatusObject::IsSlotItem(E_UI_STATUS_SLOT Type) {
    return false;
}

bool UBPL_CharaStatusObject::IsSlotAnimSimpleType(E_UI_STATUS_SLOT Type) {
    return false;
}

bool UBPL_CharaStatusObject::IsMagatsuhiSkillSlot(const FUIStatusSlotItemData& slotData) {
    return false;
}

bool UBPL_CharaStatusObject::IsCompleteLoadTexture(ACustomPawn*& CustomPawn) {
    return false;
}

int32 UBPL_CharaStatusObject::GetSpawnEarlyDelayForCharaChanger2DBase(int32 stepNum) {
    return 0;
}

int32 UBPL_CharaStatusObject::GetSpawnDelayForCharaChanger2DBase(int32 stepNum) {
    return 0;
}

FText UBPL_CharaStatusObject::GetSkillNameText(const int32& SkillId, const int32& addNum, const UScriptMessageAsset* systemMessage) {
    return FText::GetEmpty();
}

FText UBPL_CharaStatusObject::GetResistancesBadText(E_DEFENCE_RESISTANCE Type, bool IsLast, const UScriptMessageAsset* StatusMessage) {
    return FText::GetEmpty();
}

int32 UBPL_CharaStatusObject::GetResistancesBadIconID(int32 resistancesBadIndex) {
    return 0;
}

FText UBPL_CharaStatusObject::GetPlayerProfile(const UScriptMessageAsset* profile) {
    return FText::GetEmpty();
}

FText UBPL_CharaStatusObject::GetPlayerName() {
    return FText::GetEmpty();
}

FText UBPL_CharaStatusObject::GetPlayerFullName() {
    return FText::GetEmpty();
}

FText UBPL_CharaStatusObject::GetDevilSpawnAreaText(int32 DevilID, const bool isTop, const UScriptMessageAsset* mapAreaMessage) {
    return FText::GetEmpty();
}

FText UBPL_CharaStatusObject::GetDevilProfile(int32 DevilID, const UScriptMessageAsset* StatusMessage, const UScriptMessageAsset* DevilProfile) {
    return FText::GetEmpty();
}

FText UBPL_CharaStatusObject::GetConditionText(const UScriptMessageAsset* conditionMessage, int32 textID) {
    return FText::GetEmpty();
}

int32 UBPL_CharaStatusObject::ConvertResistancesBadIndex2Index(int32 resistancesBadIndex) {
    return 0;
}

void UBPL_CharaStatusObject::AddViewSlaveLocationBP(const FVector& SlaveLocation, float BoostFactor, bool bOverrideLocation, float Duration) {
}


