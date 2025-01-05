#include "BattleCharaPanelCtrlBase.h"

ABattleCharaPanelCtrlBase::ABattleCharaPanelCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ABattleCharaPanelCtrlBase::UpdateEnemyPanelData() {
    return false;
}

int32 ABattleCharaPanelCtrlBase::UpdateBattleInPartyList() {
    return 0;
}

bool ABattleCharaPanelCtrlBase::StopSummonAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::StopMovePanelAnimation(int32 InCategory) {
    return false;
}

bool ABattleCharaPanelCtrlBase::StopBattleSummonPanelAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::StopBattleStatusPanelAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::StopBattleCharaPanelAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::StartSummonCharaPanelFadeOutAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::StartSummonAnimation(float InWaitTime) {
    return false;
}

bool ABattleCharaPanelCtrlBase::StartStatusCharaPanelFadeOutAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::StartMovePanelAnimation(int32 InCategory) {
    return false;
}

bool ABattleCharaPanelCtrlBase::StartBattleSummonPanelAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::StartBattleStatusPanelAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::StartBattleCharaPanelFadeOutAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::StartBattleCharaPanelAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::SetSummonSelectedPanel() {
    return false;
}

int32 ABattleCharaPanelCtrlBase::SetStockStatusInitializeCursorPositionIndex(int32 InIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::SetStockCharaSelectInitializeCursorPositionIndex(int32 InIndex, int32 InType) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::SetPartyStatusInitializeCursorPositionIndex(int32 InIndex) {
    return 0;
}

bool ABattleCharaPanelCtrlBase::SetPartyListOffsetIndex(int32 InOffsetIndex) {
    return false;
}

bool ABattleCharaPanelCtrlBase::SetPartyListDstOffsetIndex(int32 InOffsetIndex) {
    return false;
}

bool ABattleCharaPanelCtrlBase::SetPartyCursorParameter(int32 InCursor, int32 InOffset) {
    return false;
}

int32 ABattleCharaPanelCtrlBase::SetPartyCharaSelectInitializeCursorPositionIndex(int32 InIndex, int32 InType) {
    return 0;
}

bool ABattleCharaPanelCtrlBase::SetMovePanelPosition(FVector2D InPos, int32 InCategory, int32 InType) {
    return false;
}

int32 ABattleCharaPanelCtrlBase::SetEnemyStatusInitializeCursorPositionIndex(int32 InIndex) {
    return 0;
}

bool ABattleCharaPanelCtrlBase::SetDeadSummonFlag(bool InDeadSummonOn) {
    return false;
}

bool ABattleCharaPanelCtrlBase::SetCharaMovingCursor(int32 InType) {
    return false;
}

bool ABattleCharaPanelCtrlBase::SetBattleStatusOffsetCursorPositionByIndex(int32 InIndex) {
    return false;
}

bool ABattleCharaPanelCtrlBase::SetBattleNkmIndexList(int32 InType, int32 InIndex, int32 InNkmIndex) {
    return false;
}

bool ABattleCharaPanelCtrlBase::SetBattleEnemyIndexList(int32 InType, int32 InIndex, int32 InPartyIndex, int32 InDevilId) {
    return false;
}

bool ABattleCharaPanelCtrlBase::ResetCharaMovingCursor(int32 InType) {
    return false;
}

void ABattleCharaPanelCtrlBase::RebuildStatusCharaList(UUIStatusCtrlDataObjBtlBase* StatusUIDataObj, bool WithEnemy) {
}

bool ABattleCharaPanelCtrlBase::IsSummonAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::IsPartyCursorWithInDrawRange(int32 InIndex, int32 InCursorOffset) {
    return false;
}

bool ABattleCharaPanelCtrlBase::IsOnBadStatusByIndex(int32 InIndex, E_BAD_STATUS InBadStatus) {
    return false;
}

bool ABattleCharaPanelCtrlBase::IsMovePanelAnimation(int32 InCategory) {
    return false;
}

bool ABattleCharaPanelCtrlBase::IsEmptyPanel(int32 InIndex, int32 InCursorOffset) {
    return false;
}

bool ABattleCharaPanelCtrlBase::IsBattleSummonPanelAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::IsBattleStatusPanelAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::IsBattleInByNkmIndex(int32 InNkmIndex) {
    return false;
}

bool ABattleCharaPanelCtrlBase::IsBattleCharaPanelAnimation() {
    return false;
}

bool ABattleCharaPanelCtrlBase::InitializeEntryPartyList() {
    return false;
}

bool ABattleCharaPanelCtrlBase::InitializeCharaPanelCursor() {
    return false;
}

bool ABattleCharaPanelCtrlBase::InitializeBattleStatusWork() {
    return false;
}

int32 ABattleCharaPanelCtrlBase::GetSummonTargetInStock(int32 InIndex, bool IsDeadSummon) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetSummonTargetInBattle(int32 InIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetStockNumber() {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetStockIndexByBattleIndex(int32 InIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetStockIndexByAddOffset(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetStockDispNumber() {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetPartyMaxDisplayCount() {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetPartyListOffsetIndex() {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetPartyListDstOffsetIndex() {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetPartyIndexFromPanelID(int32 InIndex, bool WithEnemy) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetPartyDispNumber() {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetPartyCursorWithInDrawRange(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

FVector2D ABattleCharaPanelCtrlBase::GetPanelPositionByIndex(int32 InIndex, FVector2D InVec2D, int32 InCheckType) {
    return FVector2D{};
}

FVector2D ABattleCharaPanelCtrlBase::GetMovePanelPosition(int32 InCategory) {
    return FVector2D{};
}

FVector2D ABattleCharaPanelCtrlBase::GetMovePanelAnimation(int32 InCategory) {
    return FVector2D{};
}

int32 ABattleCharaPanelCtrlBase::GetMoveOffsetStatusPositionIndexByScrollBar(int32 InIndex, int32 InMoveIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetMoveOffsetStatusPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetMoveOffsetCursorPositionIndexByScrollBar(int32 InIndex, int32 InOffsetIndex, int32 InMoveIndex, int32 InOffsetType) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetMoveOffsetCursorPositionIndex(int32 InIndex, int32 InMoveIndex, int32 InOffsetType, bool InScrollLock) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetMoveCursorStatusPositionIndex(int32 InIndex, int32 InMoveIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex, int32 InOffsetType) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetMaxStockNumber() {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetDeadTargetInStock(int32 InIndex) {
    return 0;
}

uint8 ABattleCharaPanelCtrlBase::GetBattleSummonNkmIndexByOffset(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

uint8 ABattleCharaPanelCtrlBase::GetBattleSummonNkmIndex(int32 InIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetBattleStatusPanelNumber(int32 InType) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetBattleStatusOffsetCursorPosition() {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetBattleStatusEnemyPanelData(int32 InIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetBattleSStatusNkmIndex(int32 InIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetBattlePartyIndexType(int32 InNkmIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetBattleNkmIndexByNkmIndexList(int32 InType, int32 InIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetBattleInPartyIndex(int32 InType, int32 InIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetBattleEnemyIndexByIndexList(int32 InType, int32 InIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::GetBadstatusNumber() {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::EntryPartyList(int32 InIndex, E_BATTLECHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}

bool ABattleCharaPanelCtrlBase::EntryNkmList(int32 InIndex, int32 InNkmIndex, int32 InCursorOffset) {
    return false;
}

bool ABattleCharaPanelCtrlBase::EntryBadStatusList(int32 InIndex, int32 InBadStatus, int32 InCursorOffset) {
    return false;
}

int32 ABattleCharaPanelCtrlBase::DelPartyListFlag(int32 InIndex, E_BATTLECHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}

bool ABattleCharaPanelCtrlBase::DeletePanelList() {
    return false;
}

bool ABattleCharaPanelCtrlBase::CreateBattleNkmIndexList() {
    return false;
}

int32 ABattleCharaPanelCtrlBase::CreateBattleInPartyList() {
    return 0;
}

TArray<E_BAD_STATUS> ABattleCharaPanelCtrlBase::CreateBadstatusArray(int32 inBadstatusIndex) {
    return TArray<E_BAD_STATUS>();
}

bool ABattleCharaPanelCtrlBase::ChangeSelectedPanel(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InDstType) {
    return false;
}

bool ABattleCharaPanelCtrlBase::CanBeSelectedAsStatusTarget(int32 InSrcIndex, int32 InOffsetCursor) {
    return false;
}

int32 ABattleCharaPanelCtrlBase::CanBeSelectedAsStatus(int32 InSrcIndex, bool WithEnemy) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::CanBeSelectedAsSrc(int32 InSrcIndex) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::CanBeSelectedAsDst(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InSrcCursorOffset, int32 InDstCursorOffset) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::CanBeSelectedAsCharaSelect(int32 InSrcIndex, int32 InType) {
    return 0;
}

bool ABattleCharaPanelCtrlBase::CalcSupportSkill(int32 InIndex, FBtlParty InPartyData) {
    return false;
}

int32 ABattleCharaPanelCtrlBase::CalcScrollBarClickedByStatus(float InRate) {
    return 0;
}

int32 ABattleCharaPanelCtrlBase::CalcScrollBarClickedByParty(float InRate, int32 InType) {
    return 0;
}

bool ABattleCharaPanelCtrlBase::CalcMoveCursorStatusPositionIndex(int32 InIndex) {
    return false;
}

bool ABattleCharaPanelCtrlBase::CalcDeadBadstatus(int32 InNkmIndex, int32 InHp, int32 InBadStatus) {
    return false;
}

int32 ABattleCharaPanelCtrlBase::CalcBattleStatusPosition(int32 InPartyIndex, FBtlParty InPartyData) {
    return 0;
}











int32 ABattleCharaPanelCtrlBase::AddPartyListFlag(int32 InIndex, E_BATTLECHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}


