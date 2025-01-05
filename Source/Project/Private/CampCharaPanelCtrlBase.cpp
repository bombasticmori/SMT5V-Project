#include "CampCharaPanelCtrlBase.h"

ACampCharaPanelCtrlBase::ACampCharaPanelCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool ACampCharaPanelCtrlBase::UseSkill(int32 InUseSkillId, int32 InUseNkmIndex, int32 InTargetIndex, bool InSingleUsed) {
    return false;
}

bool ACampCharaPanelCtrlBase::UseItem(int32 InUseItemId, int32 InIndex, bool InSingleUsed, int32 InUseItemNumber) {
    return false;
}

bool ACampCharaPanelCtrlBase::UpDateAnalyzeExistInParty() {
    return false;
}

bool ACampCharaPanelCtrlBase::StopSummonAnimation() {
    return false;
}

bool ACampCharaPanelCtrlBase::StopMovePanelAnimation(int32 InCategory) {
    return false;
}

bool ACampCharaPanelCtrlBase::StopCharaPanelAnimation() {
    return false;
}

bool ACampCharaPanelCtrlBase::StartSummonAnimation(float InWaitTime) {
    return false;
}

bool ACampCharaPanelCtrlBase::StartMovePanelAnimation(int32 InCategory) {
    return false;
}

bool ACampCharaPanelCtrlBase::StartCharaPanelFadeOutAnimation() {
    return false;
}

bool ACampCharaPanelCtrlBase::StartCharaPanelAnimation() {
    return false;
}

bool ACampCharaPanelCtrlBase::SortUtsusemiSkillBuffer() {
    return false;
}

int32 ACampCharaPanelCtrlBase::SetUtsusemiPanelPositionBySelectUtsusemiId() {
    return 0;
}

bool ACampCharaPanelCtrlBase::SetUtsusemiNewIconByOffsetIndex(int32 InOffsetIndex, int32 InIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetUtsusemiNewIconByIndex(int32 InIndex) {
    return false;
}

int32 ACampCharaPanelCtrlBase::SetUtsusemiInitializeCursorPositionIndex(int32 InIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::SetUtsusemiCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset) {
    return 0;
}

bool ACampCharaPanelCtrlBase::SetUseSkillTargetListPanel(int32 InUseSkillId, int32 InUseNkmIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetUseItemTargetListPanel(int32 InUseItemId) {
    return false;
}

int32 ACampCharaPanelCtrlBase::SetUnselectableTargetPanelOn(int32 InIndex) {
    return 0;
}

bool ACampCharaPanelCtrlBase::SetUnselectablePanelByUtsusemi(int32 InIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetTargetListOffsetIndex(int32 InOffsetIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetStockSortToParty() {
    return false;
}

int32 ACampCharaPanelCtrlBase::SetStockInitializeCursorPositionIndex(int32 InIndex, int32 InType) {
    return 0;
}

bool ACampCharaPanelCtrlBase::SetSortUtsusemiList(int32 InSortType) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetSortType(int32 InPanelType, int32 InSortType) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetSortStockList(int32 InSortType) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetSortAscending(bool InAscending) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetSortAnalyzeList(int32 InSortType) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetSkillCalcOnPanelByIndex(int32 InUseSkillId, int32 InUseNkmIndex, int32 InIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetSkillCalcOnPanelAll(int32 InUseSkillId, int32 InUseNkmIndex) {
    return false;
}

int32 ACampCharaPanelCtrlBase::SetPartyPanelPositionBySelectNkmId(int32 InType) {
    return 0;
}

bool ACampCharaPanelCtrlBase::SetPartyListOffsetIndex(int32 InOffsetIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetPartyListDstOffsetIndex(int32 InOffsetIndex) {
    return false;
}

int32 ACampCharaPanelCtrlBase::SetPartyInitializeCursorPositionIndex(int32 InIndex) {
    return 0;
}

bool ACampCharaPanelCtrlBase::SetPartyCursorParameter(int32 InCursor, int32 InOffset) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetMovingCursor(int32 InType) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetMovePanelSpeed(int32 InCategory, float InMoveSpeed) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetMovePanelPosition(FVector2D InPos, int32 InCategory, int32 InType) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetItemNumberPosition() {
    return false;
}

bool ACampCharaPanelCtrlBase::SetItemCalcOnPanelByIndex(int32 InUseItemId, int32 InIndex, int32 InUseItemNumber) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetItemCalcOnPanelAll(int32 InUseItemId, int32 InUseItemNumber) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetExtractSortUtsusemiList(int32 InSortType) {
    return false;
}

int32 ACampCharaPanelCtrlBase::SetEnemyTypeCursor(int32 InIndex) {
    return 0;
}

bool ACampCharaPanelCtrlBase::SetEnemyType(int32 InEnemyType) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetCharaMovingCursor(int32 InType) {
    return false;
}

int32 ACampCharaPanelCtrlBase::SetAnalyzePanelPositionBySelectAnalyzeId() {
    return 0;
}

bool ACampCharaPanelCtrlBase::SetAnalyzeNewIconByOffsetIndex(int32 InEnemyType, int32 InOffsetIndex, int32 InIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::SetAnalyzeNewIconByIndex(int32 InIndex) {
    return false;
}

int32 ACampCharaPanelCtrlBase::SetAnalyzeInitializeCursorPositionIndex(int32 InIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::SetAnalyzeCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset) {
    return 0;
}

bool ACampCharaPanelCtrlBase::ResetUnselectablePanelByUtsusemi(int32 InIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::ResetUnselectablePanel() {
    return false;
}

bool ACampCharaPanelCtrlBase::ResetReserveHPMPParam() {
    return false;
}

bool ACampCharaPanelCtrlBase::ResetMovingCursor(int32 InType) {
    return false;
}

bool ACampCharaPanelCtrlBase::ResetCharaMovingCursor(int32 InType) {
    return false;
}

void ACampCharaPanelCtrlBase::RebuildStatusCharaList_Utsusemi(UUIStatusCtrlDataObjCampParty* StatusUIDataObj) {
}

void ACampCharaPanelCtrlBase::RebuildStatusCharaList_Analyze(UUIStatusCtrlDataObjCampParty* StatusUIDataObj) {
}

void ACampCharaPanelCtrlBase::RebuildStatusCharaList(UUIStatusCtrlDataObjCampParty* StatusUIDataObj) {
}

int32 ACampCharaPanelCtrlBase::MoveSortType(int32 InPanelType, int32 InMoveSortType) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::MoveOffsetSortType(int32 InPanelType, int32 InMoveOffsetSortType, bool InScrollLock) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::MoveItemNumberPosition(int32 InMoveIndex, bool InForceLoopEnd) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::MoveEnemyType(int32 InMoveIndex) {
    return 0;
}

bool ACampCharaPanelCtrlBase::IsSummonAnimation() {
    return false;
}

bool ACampCharaPanelCtrlBase::IsPartyCursorWithInDrawRange(int32 InIndex, int32 InCursorOffset) {
    return false;
}

bool ACampCharaPanelCtrlBase::IsNewIconOfAllUtsusemiOff() {
    return false;
}

bool ACampCharaPanelCtrlBase::IsNewIconOfAllAnalyzesOff() {
    return false;
}

int32 ACampCharaPanelCtrlBase::IsMultipleUseItem(int32 InUseItemId) {
    return 0;
}

bool ACampCharaPanelCtrlBase::IsMovePanelAnimation(int32 InCategory) {
    return false;
}

bool ACampCharaPanelCtrlBase::IsIndexPanelSummoned(int32 InIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::IsGuestParty(int32 InIndex, int32 InOffsetCursor) {
    return false;
}

bool ACampCharaPanelCtrlBase::IsExistUtsusemiInShop(int32 InIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::IsDead(int32 InIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::IsCharaPanelAnimation() {
    return false;
}

bool ACampCharaPanelCtrlBase::IsAnalyzeExistIndexInParty(int32 InIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::InitializeUtsusemiSkillBuffer() {
    return false;
}

bool ACampCharaPanelCtrlBase::InitializeSortCursor(int32 InType, int32 InCursorPosition, int32 InCursorOffset) {
    return false;
}

bool ACampCharaPanelCtrlBase::InitializeEntryPartyList() {
    return false;
}

bool ACampCharaPanelCtrlBase::InitializeCharaPanelCursor(int32 InType) {
    return false;
}

int32 ACampCharaPanelCtrlBase::GetUtsusemiOffsetCursorPosition() {
    return 0;
}

bool ACampCharaPanelCtrlBase::GetUtsusemiNewIconByIndex(int32 InIndex) {
    return false;
}

int32 ACampCharaPanelCtrlBase::GetUtsusemiMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetUtsusemiMoveCursorOffsetPositionIndexByScroll(int32 InIndex, int32 InMoveIndex, int32 InScrollLock) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetUtsusemiMoveCursorOffsetPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetUtsusemiMaxDisplayCount() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetUtsusemiItemHelpMessageIdByIndex(int32 InIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetUtsusemiDevilIdByIndex(int32 InIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetUtsusemiCursorPosition() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetUtsusemiCount() {
    return 0;
}

bool ACampCharaPanelCtrlBase::GetUseMessageTagParam(int32 InUseMessageType, int32 InUseId, int32 InIndex) {
    return false;
}

int32 ACampCharaPanelCtrlBase::GetUseItemMessage(int32 InUseItemId, int32 InIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetTargetListOffsetIndex() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetSummonTargetInStock(int32 InIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetStockNumber() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetStockIndexByNkmIndex(int32 InNkmIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetStockIndexByBattleIndex(int32 InIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetStockIndexByAddOffset(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetStockDispNumber() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetSortType(int32 InPanelType) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetSortCursorOffset() {
    return 0;
}

bool ACampCharaPanelCtrlBase::GetSortAscending() {
    return false;
}

int32 ACampCharaPanelCtrlBase::GetSkillCostByNkmIndex(int32 InUseSkillId, int32 InUseNkmIndex) {
    return 0;
}

bool ACampCharaPanelCtrlBase::GetRecoveryAllSEFlag() {
    return false;
}

int32 ACampCharaPanelCtrlBase::GetPartyMaxDisplayCount() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetPartyListOffsetIndex() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetPartyListDstOffsetIndex() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetPartyCursorWithInDrawRange(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

FVector2D ACampCharaPanelCtrlBase::GetPanelPositionByIndex(int32 InIndex, FVector2D InVec2D, int32 InCheckType) {
    return FVector2D{};
}

int32 ACampCharaPanelCtrlBase::GetPanelIndexByNkmIndex(int32 InNkmIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetNkmIndexOfUseTargetListInOffset(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetNkmIndexOfUseTargetList(int32 InIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetNewIconFrameRate() {
    return 0;
}

FVector2D ACampCharaPanelCtrlBase::GetMovePanelPosition(int32 InCategory) {
    return FVector2D{};
}

FVector2D ACampCharaPanelCtrlBase::GetMovePanelAnimation(int32 InCategory) {
    return FVector2D{};
}

int32 ACampCharaPanelCtrlBase::GetMoveOffsetCursorPositionIndexByScrollBar(int32 InIndex, int32 InOffsetIndex, int32 InMoveIndex, int32 InOffsetType) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetMoveOffsetCursorPositionIndex(int32 InIndex, int32 InMoveIndex, int32 InOffsetType, bool InScrollLock) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex, int32 InOffsetType) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetMaxStockNumber() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetMaxNumberOfItem() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetItemNumberPosition() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetItemNumber() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetISValueParam(int32 InValueIndex) {
    return 0;
}

E_SKILL_TEKISEI_CATEGORY ACampCharaPanelCtrlBase::GetISSkillTekiseiGategory() {
    return E_SKILL_TEKISEI_CATEGORY::E_SKILL_TEKISEI_CATEGORY_PHISICS;
}

uint8 ACampCharaPanelCtrlBase::GetISNkmIndex() {
    return 0;
}

E_ABILITYNAME_TYPE ACampCharaPanelCtrlBase::GetISAbilityNameType() {
    return E_ABILITYNAME_TYPE::E_ABILITYNAME_MAXHP;
}

int32 ACampCharaPanelCtrlBase::GetEnemyType() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetDevilIdByIndex(int32 InIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetCursorIndexByUseTargetList(int32 InStartIndex) {
    return 0;
}

bool ACampCharaPanelCtrlBase::GetCharaMovingCursor(int32 InType) {
    return false;
}

int32 ACampCharaPanelCtrlBase::GetBattleIndexByStockIndex(int32 InIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetAnalyzeOffsetCursorPosition() {
    return 0;
}

bool ACampCharaPanelCtrlBase::GetAnalyzeNewIconByIndex(int32 InIndex) {
    return false;
}

int32 ACampCharaPanelCtrlBase::GetAnalyzeMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetAnalyzeMoveCursorOffsetPositionIndexByScrollBar(int32 InIndex, int32 InMoveIndex, int32 InScrollLock) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetAnalyzeMoveCursorOffsetPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetAnalyzeMaxDisplayCount() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetAnalyzeDevilIdByIndex(int32 InIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetAnalyzeCursorPosition() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetAnalyzeCount() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::GetAddGodParameterPoint() {
    return 0;
}

int32 ACampCharaPanelCtrlBase::EntryPartyList(int32 InIndex, E_CAMPCHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}

bool ACampCharaPanelCtrlBase::EntryNkmList(int32 InIndex, int32 InNkmIndex, int32 InCursorOffset) {
    return false;
}

bool ACampCharaPanelCtrlBase::DidUseInUtsusemi(int32 InIndex) {
    return false;
}

int32 ACampCharaPanelCtrlBase::DelPartyListFlag(int32 InIndex, E_CAMPCHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}

bool ACampCharaPanelCtrlBase::DeletePanelList() {
    return false;
}

bool ACampCharaPanelCtrlBase::DeleteCharaPanel(int32 InSrcIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::CreateUtsusemiSkillBuffer() {
    return false;
}

bool ACampCharaPanelCtrlBase::CreateUtsusemiEntryList() {
    return false;
}

bool ACampCharaPanelCtrlBase::CreateUseSkillTargetList(int32 InUseSkillId, int32 InUseNkmIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::CreateUseItemTargetList(int32 InUseItemId) {
    return false;
}

bool ACampCharaPanelCtrlBase::CreateStockSortList() {
    return false;
}

bool ACampCharaPanelCtrlBase::CreateAnalyzeEntryList(int32 InMode) {
    return false;
}

bool ACampCharaPanelCtrlBase::ChangeSortAscending() {
    return false;
}

bool ACampCharaPanelCtrlBase::ChangeSelectedPanel(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InDstType) {
    return false;
}

bool ACampCharaPanelCtrlBase::CanBeUseSelectedSkill(int32 InUseSkillId, int32 InUseNkmIndex) {
    return false;
}

bool ACampCharaPanelCtrlBase::CanBeUseSelectedItem(int32 InItemId) {
    return false;
}

bool ACampCharaPanelCtrlBase::CanBeSelectedTarget(int32 InIndex, bool InAllTarget) {
    return false;
}

bool ACampCharaPanelCtrlBase::CanBeSelectedAsStatusTarget(int32 InSrcIndex, int32 InOffsetCursor) {
    return false;
}

int32 ACampCharaPanelCtrlBase::CanBeSelectedAsSrc(int32 InSrcIndex) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::CanBeSelectedAsDst(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InSrcCursorOffset, int32 InDstCursorOffset) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::CanBeDeletedAsSrc(int32 InSrcIndex) {
    return 0;
}

bool ACampCharaPanelCtrlBase::CalcUseMessageTagParam(int32 InUseMessageType, int32 InUseId, int32 InIndex) {
    return false;
}

int32 ACampCharaPanelCtrlBase::CalcUseItemMaxNumber(int32 InUseItemId, int32 InIndex, bool InSingleUsed) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::CalcScrollBarClickedByUtsusemi(float InRate, int32 InOffsetType) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::CalcScrollBarClickedByParty(float InRate, int32 InType) {
    return 0;
}

int32 ACampCharaPanelCtrlBase::CalcScrollBarClickedByAnalyze(float InRate, int32 InOffsetType) {
    return 0;
}














bool ACampCharaPanelCtrlBase::BackUpForSortUtsusemiData() {
    return false;
}

bool ACampCharaPanelCtrlBase::BackUpForSortPartyData(int32 InIndex, int32 InOffset) {
    return false;
}

bool ACampCharaPanelCtrlBase::BackUpForSortAnalyzeData() {
    return false;
}

int32 ACampCharaPanelCtrlBase::AddPartyListFlag(int32 InIndex, E_CAMPCHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}


