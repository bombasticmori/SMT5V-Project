#include "UniteCtrl.h"

AUniteCtrl::AUniteCtrl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pUniteTable = NULL;
}

void AUniteCtrl::UpDateUniteFixNkmData(bool bCheckAccident) {
}

void AUniteCtrl::SkillInheritWheelUp(bool mainHover, bool subHover, int32 hoverPos, bool& topMoved, bool& cursorMoved, bool& isCurrentList) {
}

void AUniteCtrl::SkillInheritWheelDown(bool mainHover, bool subHover, int32 hoverPos, bool& topMoved, bool& cursorMoved, bool& isCurrentList) {
}

E_SKILLINHERIT_RESULT AUniteCtrl::SkillInheritScrollUp() {
    return E_SKILLINHERIT_RESULT::E_SKILLINHERIT_RESULT_NONE;
}

E_SKILLINHERIT_RESULT AUniteCtrl::SkillInheritScrollPageUp() {
    return E_SKILLINHERIT_RESULT::E_SKILLINHERIT_RESULT_NONE;
}

E_SKILLINHERIT_RESULT AUniteCtrl::SkillInheritScrollPageDown() {
    return E_SKILLINHERIT_RESULT::E_SKILLINHERIT_RESULT_NONE;
}

E_SKILLINHERIT_RESULT AUniteCtrl::SkillInheritScrollDown() {
    return E_SKILLINHERIT_RESULT::E_SKILLINHERIT_RESULT_NONE;
}

E_SKILLINHERIT_RESULT AUniteCtrl::SkillInheritOnHoveredSlot(bool isMain, int32 Index) {
    return E_SKILLINHERIT_RESULT::E_SKILLINHERIT_RESULT_NONE;
}

void AUniteCtrl::SkillInheritOnClickedSlot(bool isMain, int32 Index, E_SKILLINHERIT_RESULT& moveResult, E_SKILLINHERIT_RESULT& decisionResult) {
}

E_SKILLINHERIT_RESULT AUniteCtrl::SkillInheritEndButton() {
    return E_SKILLINHERIT_RESULT::E_SKILLINHERIT_RESULT_NONE;
}

void AUniteCtrl::SkillInheritDragScrollBar(bool isMain, int32 newTopPos, bool& topMoved, bool& cursorMoved, bool& isCurrentList) {
}

E_SKILLINHERIT_RESULT AUniteCtrl::SkillInheritDecisionButton() {
    return E_SKILLINHERIT_RESULT::E_SKILLINHERIT_RESULT_NONE;
}

E_SKILLINHERIT_RESULT AUniteCtrl::SkillInheritCancelButton() {
    return E_SKILLINHERIT_RESULT::E_SKILLINHERIT_RESULT_NONE;
}

void AUniteCtrl::SetUtsusemiData(int32 InSourceDevil, int32 InResultNkmIndex, bool bInDefenceAishou) {
}

void AUniteCtrl::SetSpecialUniteData(int32 InResultDevil, int32 InSourceDevil1, int32 InSourceDevil2, int32 InSourceDevil3, int32 InSourceDevil4, int32 InCost) {
}

void AUniteCtrl::SetDoubleUniteData(int32 InResultDevil, int32 InSourceDevil1, int32 InSourceDevil2, int32 InCost) {
}

void AUniteCtrl::MakeUpUniteTable(UMMIAsset* pAsset) {
}

bool AUniteCtrl::IsValidUtsusemi() {
    return false;
}

bool AUniteCtrl::IsUtsusemiDefenceAishouMode() {
    return false;
}

bool AUniteCtrl::IsUniteAccident() {
    return false;
}

bool AUniteCtrl::IsAbleKeyPepeatSkillInheritScrollUp() {
    return false;
}

bool AUniteCtrl::IsAbleKeyPepeatSkillInheritScrollDown() {
    return false;
}

void AUniteCtrl::InitUtsusemiSetupData() {
}

void AUniteCtrl::InitUniteSetupData() {
}

int32 AUniteCtrl::GetUtsusemiSourceDevilId() {
    return 0;
}

TArray<int32> AUniteCtrl::GetUtsusemiSelectedSkillList() {
    return TArray<int32>();
}

int32 AUniteCtrl::GetUtsusemiResultNkmIndex() {
    return 0;
}

TArray<FUniteSkillData> AUniteCtrl::GetUtsusemiPossibleSkillList() {
    return TArray<FUniteSkillData>();
}

int32 AUniteCtrl::GetUniteSourceDevilId(int32 InSourceNo) {
    return 0;
}

TArray<int32> AUniteCtrl::GetUniteSelectedSkillList() {
    return TArray<int32>();
}

int32 AUniteCtrl::GetUniteResultDevilId(bool bCheckAccident) {
    return 0;
}

TArray<FUniteSkillData> AUniteCtrl::GetUnitePossibleSkillList() {
    return TArray<FUniteSkillData>();
}

int32 AUniteCtrl::GetUniteExp() {
    return 0;
}

int32 AUniteCtrl::GetUniteCost() {
    return 0;
}

FAbilData AUniteCtrl::GetUniteBonusParam() {
    return FAbilData{};
}

int32 AUniteCtrl::GetSkillInheritHelpSkill() {
    return 0;
}

void AUniteCtrl::DestroyUniteTable() {
}

void AUniteCtrl::ConvSkillInheritUIParam(int32& OutParentTop, int32& OutParentCurrent, int32& OutChildTop, int32& OutChildCategory, int32& OutChildCurrent) {
}

void AUniteCtrl::ApplyUtsusemiData() {
}

int32 AUniteCtrl::AddUnitePartyMember(bool& bEntryBible) {
    return 0;
}


