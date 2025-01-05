#include "UIStatusCtrlDataObjBase.h"

UUIStatusCtrlDataObjBase::UUIStatusCtrlDataObjBase() {
    this->m_Current = 0;
}

bool UUIStatusCtrlDataObjBase::UseLvUpGimmerParts_Implementation() const {
    return false;
}

bool UUIStatusCtrlDataObjBase::UseLevelUpParts_Implementation() const {
    return false;
}

bool UUIStatusCtrlDataObjBase::UseFluctuation_Implementation() const {
    return false;
}

bool UUIStatusCtrlDataObjBase::UseCharaChangeUI_Implementation() const {
    return false;
}

void UUIStatusCtrlDataObjBase::UpdateSkillCursor_Implementation(bool& IsChanged, int32 Index_New, int32 Index_Hold) {
}

bool UUIStatusCtrlDataObjBase::UpdateDropAndCondCursor(int32 newTotalIndex) {
    return false;
}

void UUIStatusCtrlDataObjBase::UpdateCurrent_Implementation(int32 Index) {
}

void UUIStatusCtrlDataObjBase::SwitchKamui_ForCtrl_Implementation(int32 targetIndex) {
}

void UUIStatusCtrlDataObjBase::SwapSkillData_Implementation(int32 targetIndex_1, int32 targetIndex_2) {
}

void UUIStatusCtrlDataObjBase::SubCurrent() {
}

void UUIStatusCtrlDataObjBase::SetEmptyStatusData() {
}

void UUIStatusCtrlDataObjBase::SetCurrent(int32 newCurrent) {
}

float UUIStatusCtrlDataObjBase::ScrollBarRate_Skill(int32 Offset) const {
    return 0.0f;
}

float UUIStatusCtrlDataObjBase::ScrollBarRate_Parent(int32 Offset) const {
    return 0.0f;
}

float UUIStatusCtrlDataObjBase::ScrollBarRate_Condition(int32 Offset) const {
    return 0.0f;
}

void UUIStatusCtrlDataObjBase::ResetSkipList(const E_UI_STATUS_PAGE_TYPE pageType) {
}

void UUIStatusCtrlDataObjBase::PreparePlayerData() {
}

void UUIStatusCtrlDataObjBase::PrepareNkmData(int32 NkmIndex, int32 upLv) {
}

void UUIStatusCtrlDataObjBase::PrepareEnemyData(int32 DevilID) {
}

void UUIStatusCtrlDataObjBase::PrepareDevilBaseData(int32 DevilID) {
}

void UUIStatusCtrlDataObjBase::PrepareBibleData(int32 DevilID) {
}

void UUIStatusCtrlDataObjBase::MakeSatanMagatsuhiSkillList(const int32 stealSkillId, TArray<int32>& magaSkills) const {
}

void UUIStatusCtrlDataObjBase::JumpNextPage_Implementation() {
}

void UUIStatusCtrlDataObjBase::JumpFirstPage_Implementation() {
}

void UUIStatusCtrlDataObjBase::JumpBeforePage_Implementation() {
}

bool UUIStatusCtrlDataObjBase::IsUtsusemiStatusData() const {
    return false;
}

bool UUIStatusCtrlDataObjBase::IsSwitchableKamui_ForCtrl_Implementation(int32 totalIndex) const {
    return false;
}

bool UUIStatusCtrlDataObjBase::IsSelectableSrc_ForCtrl_Implementation(int32 totalIndex) const {
    return false;
}

bool UUIStatusCtrlDataObjBase::IsParentCursorIndex(int32 Offset, int32 Index) const {
    return false;
}

bool UUIStatusCtrlDataObjBase::IsFocusableSlot_Right(int32 totalIndex, E_UI_STATUS_PAGE_TYPE pageType) const {
    return false;
}

bool UUIStatusCtrlDataObjBase::IsExistFocusanbeSlot_Right(const int32 betA, const int32 betB, const E_UI_STATUS_PAGE_TYPE pageType) const {
    return false;
}

bool UUIStatusCtrlDataObjBase::IsEmptyStatusData() const {
    return false;
}

bool UUIStatusCtrlDataObjBase::IsDyingMotion_Implementation() const {
    return false;
}

bool UUIStatusCtrlDataObjBase::IsDevilUnknown_Implementation(const int32 relativePosition) const {
    return false;
}

bool UUIStatusCtrlDataObjBase::IsCursorIndex(E_UI_STATUS_PAGE_TYPE pageType, int32 Offset, int32 Index) const {
    return false;
}

bool UUIStatusCtrlDataObjBase::IsAlreadySpawnedMode() const {
    return false;
}

FUIStatusDataUpParam UUIStatusCtrlDataObjBase::GetUpParam() const {
    return FUIStatusDataUpParam{};
}

FUIStatusSlotItemData UUIStatusCtrlDataObjBase::GetUISlotDataRight_Implementation(int32 totalIndex, E_UI_STATUS_PAGE_TYPE pageType) const {
    return FUIStatusSlotItemData{};
}

FUIStatusSlotItemData UUIStatusCtrlDataObjBase::GetUISlotDataParent(int32 Offset, int32 IndexOnUI) {
    return FUIStatusSlotItemData{};
}

int32 UUIStatusCtrlDataObjBase::GetShowFlag() const {
    return 0;
}

int32 UUIStatusCtrlDataObjBase::GetRightSlotMax(E_UI_STATUS_PAGE_TYPE pageType) const {
    return 0;
}

int32 UUIStatusCtrlDataObjBase::GetParentSkillMax() const {
    return 0;
}

FUIStatusSlotItemData UUIStatusCtrlDataObjBase::GetParentSkill(int32 Index) const {
    return FUIStatusSlotItemData{};
}

E_UI_STATUS_PAGE_TYPE UUIStatusCtrlDataObjBase::GetPageType() const {
    return E_UI_STATUS_PAGE_TYPE::E_UI_STATUS_PAGE_TYPE_SKILL;
}

int32 UUIStatusCtrlDataObjBase::GetNextSkillLv() const {
    return 0;
}

FTransform UUIStatusCtrlDataObjBase::GetModelSpawnTransform_Implementation() const {
    return FTransform{};
}

int32 UUIStatusCtrlDataObjBase::GetListMax_Implementation() const {
    return 0;
}

FUIStatusDataLeft UUIStatusCtrlDataObjBase::GetLeftData() const {
    return FUIStatusDataLeft{};
}

int32 UUIStatusCtrlDataObjBase::GetFirstForcusableIndex() const {
    return 0;
}

E_UI_STATUS_FUSION_ORDER UUIStatusCtrlDataObjBase::GetFaceIconOrder_Implementation() const {
    return E_UI_STATUS_FUSION_ORDER::E_UI_STATUS_FUSION_ORDER_FIRST;
}

int32 UUIStatusCtrlDataObjBase::GetFaceIconID(const int32 relativePosition) const {
    return 0;
}

int32 UUIStatusCtrlDataObjBase::GetDevilIDFromIndex_Implementation(const int32 Index) const {
    return 0;
}

int32 UUIStatusCtrlDataObjBase::GetDevilID(const int32 relativePosition) const {
    return 0;
}

void UUIStatusCtrlDataObjBase::GetCurrentTextID_Implementation(E_UI_STATUS_LIST_ITEM_TYPE& textType, int32& textID, bool& IsOpen) const {
}

int32 UUIStatusCtrlDataObjBase::GetCurrent() const {
    return 0;
}

int32 UUIStatusCtrlDataObjBase::GetCostDifference_Implementation() const {
    return 0;
}

int32 UUIStatusCtrlDataObjBase::GetConditionTurnCount(const int32 textNum) const {
    return 0;
}

AActor* UUIStatusCtrlDataObjBase::GetCharaReference(const int32 relativePosition) const {
    return NULL;
}

int32 UUIStatusCtrlDataObjBase::GetAdditionalCost_Implementation() const {
    return 0;
}

bool UUIStatusCtrlDataObjBase::ExistLearningNextSkill() const {
    return false;
}

void UUIStatusCtrlDataObjBase::ClearParentSkillCursorData() {
}

void UUIStatusCtrlDataObjBase::ClearParentSkill() {
}

bool UUIStatusCtrlDataObjBase::ChangeNewOld_Implementation() {
    return false;
}

int32 UUIStatusCtrlDataObjBase::CalcNextOffset(const int32 oldOffset, const int32 nextDataIndex, const E_UI_STATUS_PAGE_TYPE pageType) const {
    return 0;
}

int32 UUIStatusCtrlDataObjBase::CalcNextIndex(const int32 oldDataIndex, const int32 moveValue, const bool enableLoop, const E_UI_STATUS_PAGE_TYPE pageType) const {
    return 0;
}

int32 UUIStatusCtrlDataObjBase::CalcNearlyIndex_Right(const int32 idealIndex, const int32 Offset, const E_UI_STATUS_PAGE_TYPE pageType) const {
    return 0;
}

void UUIStatusCtrlDataObjBase::AddCurrent() {
}


