#include "HealCharaPanelCtrlBase.h"

AHealCharaPanelCtrlBase::AHealCharaPanelCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AHealCharaPanelCtrlBase::StopCharaPanelAnimation() {
    return false;
}

bool AHealCharaPanelCtrlBase::StartCharaPanelFadeOutAnimation() {
    return false;
}

bool AHealCharaPanelCtrlBase::StartCharaPanelAnimation() {
    return false;
}

bool AHealCharaPanelCtrlBase::SetTargetListOffsetIndex(int32 InOffsetIndex) {
    return false;
}

int32 AHealCharaPanelCtrlBase::SetStockInitializeCursorPositionIndex(int32 InIndex, int32 InType) {
    return 0;
}

bool AHealCharaPanelCtrlBase::SetPartyListOffsetIndex(int32 InOffsetIndex) {
    return false;
}

int32 AHealCharaPanelCtrlBase::SetPartyInitializeCursorPositionIndex(int32 InIndex) {
    return 0;
}

bool AHealCharaPanelCtrlBase::SetMovingCursor() {
    return false;
}

bool AHealCharaPanelCtrlBase::SetHealCostAll(int32 InCost) {
    return false;
}

bool AHealCharaPanelCtrlBase::SetHealCost(int32 InIndex, int32 InCost, int32 InCursorOffset) {
    return false;
}

bool AHealCharaPanelCtrlBase::ResetMovingCursor() {
    return false;
}

void AHealCharaPanelCtrlBase::RebuildStatusCharaList(UUIStatusCtrlDataObjCampParty* StatusUIDataObj) {
}

bool AHealCharaPanelCtrlBase::IsEmptyPanel(int32 InIndex, int32 InCursorOffset) {
    return false;
}

bool AHealCharaPanelCtrlBase::IsCharaPanelAnimation() {
    return false;
}

bool AHealCharaPanelCtrlBase::InitializeEntryPartyList() {
    return false;
}

bool AHealCharaPanelCtrlBase::InitializeCharaPanelCursor() {
    return false;
}

int32 AHealCharaPanelCtrlBase::GetTargetListOffsetIndex() {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetStockNumber() {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetStockDispNumber() {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetPartyMaxDisplayCount() {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetPartyListOffsetIndex() {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetPartyDispNumber() {
    return 0;
}

FVector2D AHealCharaPanelCtrlBase::GetPanelPositionByIndex(int32 InIndex, FVector2D InVec2D, int32 InCheckType) {
    return FVector2D{};
}

int32 AHealCharaPanelCtrlBase::GetNkmIndexOfUseTargetList(int32 InIndex) {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetMoveOffsetCursorPositionIndexByScrollBar(int32 InIndex, int32 InOffsetIndex, int32 InMoveIndex) {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetMoveOffsetCursorPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock) {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex) {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetMaxStockNumber() {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetHealMp(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetHealHp(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetHealCostAllChara() {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetHealCost(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

int32 AHealCharaPanelCtrlBase::GetCursorIndexByUseTargetList(int32 InStartIndex) {
    return 0;
}

int32 AHealCharaPanelCtrlBase::EntryPartyList(int32 InIndex, E_HEALCHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}

bool AHealCharaPanelCtrlBase::EntryNkmList(int32 InIndex, int32 InNkmIndex, int32 InCursorOffset) {
    return false;
}

int32 AHealCharaPanelCtrlBase::DelPartyListFlag(int32 InIndex, E_HEALCHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}

bool AHealCharaPanelCtrlBase::DeletePanelList() {
    return false;
}

bool AHealCharaPanelCtrlBase::CreateUseHealTargetList() {
    return false;
}

bool AHealCharaPanelCtrlBase::CanBeUseSelected() {
    return false;
}

int32 AHealCharaPanelCtrlBase::CanBeSelectedTarget(int32 InIndex, bool InAllHealFlag) {
    return 0;
}

bool AHealCharaPanelCtrlBase::CalcTargetHealAll() {
    return false;
}

int32 AHealCharaPanelCtrlBase::CalcTargetHeal(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

int32 AHealCharaPanelCtrlBase::CalcScrollBarClickedByParty(float InRate) {
    return 0;
}

bool AHealCharaPanelCtrlBase::CalcHealCostFontColorAll(int32 InUseCost) {
    return false;
}

int32 AHealCharaPanelCtrlBase::CalcHealCost(int32 InIndex, int32 InCursorOffset) {
    return 0;
}




int32 AHealCharaPanelCtrlBase::AddPartyListFlag(int32 InIndex, E_HEALCHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}


