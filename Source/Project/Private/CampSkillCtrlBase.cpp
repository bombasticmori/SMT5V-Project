#include "CampSkillCtrlBase.h"

ACampSkillCtrlBase::ACampSkillCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ACampSkillCtrlBase::UpdateSkillListAnimation(int32 InType, bool InCursorOn, int32 InMode) {
    return false;
}

bool ACampSkillCtrlBase::StopListAnimation() {
    return false;
}

bool ACampSkillCtrlBase::StartUseSkillListAnimation(bool InCursorAnimation, bool InCursorLoop, bool InDarkMaskOn) {
    return false;
}

bool ACampSkillCtrlBase::StartListAnimation(bool InCursorAnimation, int32 InMode) {
    return false;
}

bool ACampSkillCtrlBase::StartFadeOutListAnimation() {
    return false;
}

bool ACampSkillCtrlBase::SetUtsusemiSkillPanel(int32 InType, int32 InCursorType) {
    return false;
}

bool ACampSkillCtrlBase::SetUtsusemiDevilId(int32 InDevilId) {
    return false;
}

bool ACampSkillCtrlBase::SetSortType(int32 InSortType) {
    return false;
}

bool ACampSkillCtrlBase::SetSortSkillList(int32 InSortType) {
    return false;
}

bool ACampSkillCtrlBase::SetSortMovingCursor() {
    return false;
}

bool ACampSkillCtrlBase::SetSortAscending(bool InAscending) {
    return false;
}

bool ACampSkillCtrlBase::SetSkillPanelPositionBySelectSkill() {
    return false;
}

bool ACampSkillCtrlBase::SetSkillPanel(int32 InType) {
    return false;
}

bool ACampSkillCtrlBase::SetSelectedDarkmaskOn() {
    return false;
}

bool ACampSkillCtrlBase::SetSelectedDarkmaskOff(int32 InCanselType) {
    return false;
}

bool ACampSkillCtrlBase::SetPartySkillPanel(int32 InType) {
    return false;
}

bool ACampSkillCtrlBase::SetMovingCursor(int32 InType) {
    return false;
}

bool ACampSkillCtrlBase::SetFusionResultSkillPanel(int32 InType) {
    return false;
}

bool ACampSkillCtrlBase::SetDevilBookSkillPanel(int32 InType) {
    return false;
}

bool ACampSkillCtrlBase::SetAnalyzeSkillPanel(int32 InType) {
    return false;
}

bool ACampSkillCtrlBase::SetAnalyzeDevilId(int32 InDevilId) {
    return false;
}

bool ACampSkillCtrlBase::RestartUtsusemiSkillList(int32 InIndex) {
    return false;
}

bool ACampSkillCtrlBase::ResetSortMovingCursor() {
    return false;
}

bool ACampSkillCtrlBase::ResetMovingCursor(int32 InType) {
    return false;
}

int32 ACampSkillCtrlBase::MoveUtsusemiCursor(int32 InMoveCursor) {
    return 0;
}

int32 ACampSkillCtrlBase::MoveSortType(int32 InMoveSortType) {
    return 0;
}

int32 ACampSkillCtrlBase::MoveCursorOffset(int32 InMoveCursor, int32 InScrollStartOffset, bool InScrollLock) {
    return 0;
}

int32 ACampSkillCtrlBase::MoveCursor(int32 InMoveCursor, int32 InScrollStartOffset) {
    return 0;
}

bool ACampSkillCtrlBase::IsListAnimation() {
    return false;
}

bool ACampSkillCtrlBase::InitializeSkillListCursor() {
    return false;
}

bool ACampSkillCtrlBase::InitializeMagatsuhiGauge() {
    return false;
}

int32 ACampSkillCtrlBase::GetUtsusemiSkillCount() {
    return 0;
}

int32 ACampSkillCtrlBase::GetUtsusemiCursorSkillId() {
    return 0;
}

int32 ACampSkillCtrlBase::GetUtsusemiCursorListIndex() {
    return 0;
}

int32 ACampSkillCtrlBase::GetUtsusemiCursorDispIndex() {
    return 0;
}

int32 ACampSkillCtrlBase::GetUseSkillCount() {
    return 0;
}

int32 ACampSkillCtrlBase::GetSortType() {
    return 0;
}

bool ACampSkillCtrlBase::GetSortAscending() {
    return false;
}

int32 ACampSkillCtrlBase::GetSkillDisplayNumber() {
    return 0;
}

E_CAMPSKILLLIST_CANSELTYPE ACampSkillCtrlBase::GetReasonForCansel() {
    return E_CAMPSKILLLIST_CANSELTYPE::NORMAL;
}

int32 ACampSkillCtrlBase::GetMagatsuhiGaugeMode() {
    return 0;
}

int32 ACampSkillCtrlBase::GetCursorSkillId() {
    return 0;
}

int32 ACampSkillCtrlBase::GetCursorNkmIndex() {
    return 0;
}

int32 ACampSkillCtrlBase::GetCursorListIndex() {
    return 0;
}

int32 ACampSkillCtrlBase::GetCursorDispIndex() {
    return 0;
}

int32 ACampSkillCtrlBase::GetCanBeUseSkillNumber() {
    return 0;
}

bool ACampSkillCtrlBase::DeleteSkillList() {
    return false;
}

bool ACampSkillCtrlBase::CreateUtsusemiSkillListForCampOnly() {
    return false;
}

bool ACampSkillCtrlBase::CreateUtsusemiSkillList() {
    return false;
}

bool ACampSkillCtrlBase::CreateSkillList() {
    return false;
}

bool ACampSkillCtrlBase::CreatePartySkillList(int32 InNkmIndex) {
    return false;
}

bool ACampSkillCtrlBase::CreatePartyMagatsuhiSkillList(int32 InNkmIndex) {
    return false;
}

bool ACampSkillCtrlBase::CreateFusionResultSkillList(int32 InDevilId, bool bInUnknown) {
    return false;
}

bool ACampSkillCtrlBase::CreateFusionResultMagatsuhiSkillList(int32 InDevilId, bool bInUnknown) {
    return false;
}

bool ACampSkillCtrlBase::CreateDevilBookSkillList(int32 InDevilId, int32 InDevilBookType) {
    return false;
}

bool ACampSkillCtrlBase::CreateDevilBookMagatsuhiSkillList(int32 InDevilId) {
    return false;
}

bool ACampSkillCtrlBase::CreateAnalyzeSkillList(int32 InDevilId) {
    return false;
}

bool ACampSkillCtrlBase::CreateAnalyzeMagatsuhiSkillList(int32 InDevilId) {
    return false;
}

bool ACampSkillCtrlBase::ChangeSortAscending() {
    return false;
}

int32 ACampSkillCtrlBase::CanBeUsedSelectedSkill() {
    return 0;
}

int32 ACampSkillCtrlBase::CalcScrollBarClicked(float InRate) {
    return 0;
}

bool ACampSkillCtrlBase::CalcCanBeUseSkill(int32 InNumber) {
    return false;
}























bool ACampSkillCtrlBase::BackUpForSortSkillData() {
    return false;
}


