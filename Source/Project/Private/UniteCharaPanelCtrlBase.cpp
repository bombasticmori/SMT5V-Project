#include "UniteCharaPanelCtrlBase.h"

AUniteCharaPanelCtrlBase::AUniteCharaPanelCtrlBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool AUniteCharaPanelCtrlBase::UpdateDevilBookEntryList() {
    return false;
}

bool AUniteCharaPanelCtrlBase::UpDateDevilBookEntry() {
    return false;
}

bool AUniteCharaPanelCtrlBase::StopSummonAnimation() {
    return false;
}

bool AUniteCharaPanelCtrlBase::StopMovePanelAnimation(int32 InCategory) {
    return false;
}

bool AUniteCharaPanelCtrlBase::StopFusionCombineAnimation() {
    return false;
}

bool AUniteCharaPanelCtrlBase::StopCharaPanelAnimation() {
    return false;
}

bool AUniteCharaPanelCtrlBase::StartSummonAnimation(float InWaitTime) {
    return false;
}

bool AUniteCharaPanelCtrlBase::StartMovePanelAnimation(int32 InCategory) {
    return false;
}

bool AUniteCharaPanelCtrlBase::StartFusionCombineAnimation(float InWaitTime, bool bCursorUp, int32 InStartCursorOffset, int32 InEndCursorOffset) {
    return false;
}

bool AUniteCharaPanelCtrlBase::StartCharaPanelFadeOutAnimation() {
    return false;
}

bool AUniteCharaPanelCtrlBase::StartCharaPanelAnimation(int32 InMovePanelNum) {
    return false;
}

bool AUniteCharaPanelCtrlBase::SortUtsusemiSkillBuffer() {
    return false;
}

int32 AUniteCharaPanelCtrlBase::SortFusionUtsusemi(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos, int32 InSkillId) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::SortFusionSpDevil(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::SortFusionSecondDevil(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::SortFusionSearchSecondDevil(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::SortFusionSearchDevil(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::SortFusionFirstDevil(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::SortDevilBook(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos) {
    return 0;
}

void AUniteCharaPanelCtrlBase::SetUtsusemiOffsetCursorPosition(int32 InIndex) {
}

bool AUniteCharaPanelCtrlBase::SetUtsusemiNewIconByOffsetIndex(int32 InOffsetIndex, int32 InIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::SetUtsusemiNewIconByIndex(int32 InIndex) {
    return false;
}

int32 AUniteCharaPanelCtrlBase::SetUtsusemiCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset) {
    return 0;
}

void AUniteCharaPanelCtrlBase::SetUtsusemiCursorPosition(int32 InIndex) {
}

void AUniteCharaPanelCtrlBase::SetUseSearchType(E_UNITECHARAPANEL_SEARCH InSearchType) {
}

bool AUniteCharaPanelCtrlBase::SetUnselectablePanelByUtsusemi(int32 InIndex) {
    return false;
}

void AUniteCharaPanelCtrlBase::SetUniteCtrlPtr(AUniteCtrl* pUniteCtrl) {
}

bool AUniteCharaPanelCtrlBase::SetStockSortToParty() {
    return false;
}

int32 AUniteCharaPanelCtrlBase::SetStockInitializeCursorPositionIndex(int32 InIndex, int32 InType) {
    return 0;
}

void AUniteCharaPanelCtrlBase::SetSpecialFusionDevilSecondCursorPosition(int32 InIndex) {
}

void AUniteCharaPanelCtrlBase::SetSpecialFusionDevilOffsetCursorPosition(int32 InIndex) {
}

bool AUniteCharaPanelCtrlBase::SetSpecialFusionDevilId(int32 InIndex) {
    return false;
}

void AUniteCharaPanelCtrlBase::SetSpecialFusionDevilCursorPosition(int32 InIndex) {
}

int32 AUniteCharaPanelCtrlBase::SetSpecialFusionCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset) {
    return 0;
}

void AUniteCharaPanelCtrlBase::SetSearchFusionDevilOffsetCursorPosition(int32 InIndex) {
}

bool AUniteCharaPanelCtrlBase::SetSearchFusionDevilId(int32 InIndex) {
    return false;
}

void AUniteCharaPanelCtrlBase::SetSearchFusionDevilCursorPosition(int32 InIndex) {
}

int32 AUniteCharaPanelCtrlBase::SetSearchFusionCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset) {
    return 0;
}

bool AUniteCharaPanelCtrlBase::SetRewriteType(int32 InType) {
    return false;
}

int32 AUniteCharaPanelCtrlBase::SetPartyPanelPositionBySelectNkmId(int32 InType) {
    return 0;
}

bool AUniteCharaPanelCtrlBase::SetPartyListOffsetIndex(int32 InOffsetIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::SetPartyListDstOffsetIndex(int32 InOffsetIndex) {
    return false;
}

int32 AUniteCharaPanelCtrlBase::SetPartyInitializeCursorPositionIndex(int32 InIndex) {
    return 0;
}

bool AUniteCharaPanelCtrlBase::SetPartyCursorParameter(int32 InCursor, int32 InOffset) {
    return false;
}

void AUniteCharaPanelCtrlBase::SetOffsetAndIndex(const E_UI_STATUS_CTRL_TYPE Mode, const int32 inCursorPos, const int32 InOffset, const bool swapDstMode) {
}

bool AUniteCharaPanelCtrlBase::SetMovePanelSpeed(int32 InCategory, float InMoveSpeed) {
    return false;
}

bool AUniteCharaPanelCtrlBase::SetMovePanelPosition(FVector2D InPos, int32 InCategory, int32 InType) {
    return false;
}

bool AUniteCharaPanelCtrlBase::SetFusionSecond() {
    return false;
}

bool AUniteCharaPanelCtrlBase::SetFusionFirst(int32 InIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::SetFusionCursorPosition(int32 InIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::SetFusionCursorOffset(int32 InIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::SetDevilBookType(int32 InType) {
    return false;
}

void AUniteCharaPanelCtrlBase::SetDevilBookOffsetCursorPosition(int32 InIndex) {
}

int32 AUniteCharaPanelCtrlBase::SetDevilBookCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset) {
    return 0;
}

void AUniteCharaPanelCtrlBase::SetDevilBookCursorPosition(int32 InIndex) {
}

bool AUniteCharaPanelCtrlBase::SetDevilBookCost(int32 InIndex, int32 InCost) {
    return false;
}

bool AUniteCharaPanelCtrlBase::SetCharaMovingCursor(E_UNITECHARAPANEL_MENUTYPE InType) {
    return false;
}

bool AUniteCharaPanelCtrlBase::ResetUnselectablePanelByUtsusemi(int32 InIndex) {
    return false;
}

void AUniteCharaPanelCtrlBase::ResetCursorParam() {
}

bool AUniteCharaPanelCtrlBase::ResetCharaMovingCursor(E_UNITECHARAPANEL_MENUTYPE InType) {
    return false;
}

void AUniteCharaPanelCtrlBase::RebuildStatusCharaList_Utsusemi(UUIStatusCtrlDataObjUnite* StatusUIDataObj) {
}

void AUniteCharaPanelCtrlBase::RebuildStatusCharaList_SpecialFusionSecond(UUIStatusCtrlDataObjUnite* StatusUIDataObj) {
}

void AUniteCharaPanelCtrlBase::RebuildStatusCharaList_SpecialFirst(UUIStatusCtrlDataObjUnite* StatusUIDataObj) {
}

void AUniteCharaPanelCtrlBase::RebuildStatusCharaList_SearchFirst(UUIStatusCtrlDataObjUnite* StatusUIDataObj) {
}

void AUniteCharaPanelCtrlBase::RebuildStatusCharaList_Rewrite(UUIStatusCtrlDataObjUnite* StatusUIDataObj) {
}

void AUniteCharaPanelCtrlBase::RebuildStatusCharaList_Party(UUIStatusCtrlDataObjUnite* StatusUIDataObj, E_UI_STATUS_CTRL_TYPE Type, bool useParty, bool useStock, int32 cursorPos) {
}

void AUniteCharaPanelCtrlBase::RebuildStatusCharaList_FusionSecond(UUIStatusCtrlDataObjUnite* StatusUIDataObj, E_UI_STATUS_CTRL_TYPE Type) {
}

void AUniteCharaPanelCtrlBase::RebuildStatusCharaList_Browse(UUIStatusCtrlDataObjUnite* StatusUIDataObj) {
}

int32 AUniteCharaPanelCtrlBase::MoveRewriteType(int32 InMoveIndex, bool bInCursorLoop) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::MoveDevilBookType(int32 InMoveIndex, bool bInCursorLoop) {
    return 0;
}

bool AUniteCharaPanelCtrlBase::IsValidInputCtrl(E_UNITECHARAPANELCTRL_GSTATUS InGStatus) {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsValidDevilBookPartyMakkaDiffColor() {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsSummonAnimation() {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsSearchFusionCombinationListNowSearching() {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsSearchFusionCombinationListCompleteSearch() {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsSearchExFusionNowSearching() {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsSearchExFusionCompleteSearch() {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsPartyCursorWithInDrawRange(int32 InIndex, int32 InCursorOffset) {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsMovePanelAnimation(int32 InCategory) {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsIndexPanelSummoned(int32 InIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsGuestParty(int32 InIndex, int32 InOffsetCursor) {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsFusionExistDevilIdInParty(int32 InDevilId) {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsFusionExistDevilIdInDevilBook(int32 InDevilId) {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsFusionCombineAnimation() {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsExistUtsusemiInShop(int32 InIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsDevilBookExistIndexInDevilBook(int32 InIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsDead(int32 InIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::IsCharaPanelAnimation() {
    return false;
}

bool AUniteCharaPanelCtrlBase::InitializeUtsusemiSkillBuffer() {
    return false;
}

bool AUniteCharaPanelCtrlBase::InitializeEntryPartyList() {
    return false;
}

bool AUniteCharaPanelCtrlBase::InitializeCharaPanelCursor(E_UNITECHARAPANEL_MENUTYPE InType) {
    return false;
}

int32 AUniteCharaPanelCtrlBase::GetUtsusemiOffsetCursorPosition() {
    return 0;
}

bool AUniteCharaPanelCtrlBase::GetUtsusemiNewIconByIndex(int32 InIndex) {
    return false;
}

int32 AUniteCharaPanelCtrlBase::GetUtsusemiMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetUtsusemiMoveCursorOffsetPositionIndexByScroll(int32 InIndex, int32 InMoveIndex, int32 InScrollLock) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetUtsusemiMoveCursorOffsetPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetUtsusemiMaxDisplayCount() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetUtsusemiDevilIdByIndex(int32 InIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetUtsusemiCursorPosition() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetUtsusemiCount() {
    return 0;
}

E_UNITECHARAPANEL_SEARCH AUniteCharaPanelCtrlBase::GetUseSearchType() const {
    return E_UNITECHARAPANEL_SEARCH::E_SEARCH_PARTY;
}

int32 AUniteCharaPanelCtrlBase::GetTutorialMessageId(E_TUTORIAL_WINDOW_MESSAGE_TYPE InMessageNo, int32 InType) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetStockNumber() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetStockIndexByBattleIndex(int32 InIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetStockIndexByAddOffset(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetStockDispNumber() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSpecialFusionSourceNum() {
    return 0;
}

FSpecialFusionSourceDevil AUniteCharaPanelCtrlBase::GetSpecialFusionSourceDevil(int32 InSourceIndex) {
    return FSpecialFusionSourceDevil{};
}

int32 AUniteCharaPanelCtrlBase::GetSpecialFusionSecondMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex, bool bInCursorLoop) {
    return 0;
}

void AUniteCharaPanelCtrlBase::GetSpecialFusionSecondDevilByIndex(int32 InIndex, int32& OutDevilId, int32& OutNkmIndex, E_UNITECHARAPANEL_DEVILDATATYPE& OutDevilType) {
}

FSpecialFusionResultDevil AUniteCharaPanelCtrlBase::GetSpecialFusionResultDevil() {
    return FSpecialFusionResultDevil{};
}

int32 AUniteCharaPanelCtrlBase::GetSpecialFusionMoveCursorOffsetPositionIndexByScroll(int32 InIndex, int32 InMoveIndex, int32 InScrollLock) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSpecialFusionMoveCursorOffsetPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSpecialFusionDevilSecondCursorPosition() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSpecialFusionDevilOffsetCursorPosition() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSpecialFusionDevilMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSpecialFusionDevilMaxDisplayCount() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSpecialFusionDevilIdByIndex(int32 InIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSpecialFusionDevilCursorPosition() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSpecialFusionDevilCount() {
    return 0;
}

FSpecialFusionResultDevil AUniteCharaPanelCtrlBase::GetSpecialFusionDevilByIndex(int32 InIndex) {
    return FSpecialFusionResultDevil{};
}

int32 AUniteCharaPanelCtrlBase::GetSearchFusionMoveCursorOffsetPositionIndexByScroll(int32 InIndex, int32 InMoveIndex, int32 InScrollLock) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSearchFusionMoveCursorOffsetPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSearchFusionDevilOffsetCursorPosition() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSearchFusionDevilMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSearchFusionDevilMaxDisplayCount() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSearchFusionDevilIdByIndex(int32 InIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSearchFusionDevilCursorPosition() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetSearchFusionDevilCount() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetRewriteType() {
    return 0;
}

void AUniteCharaPanelCtrlBase::GetReturnDataFromStatusUI(UUIStatusCtrlDataObjUnite* StatusUIDataObj, int32& retCursorPos, int32& retOffset, const int32 beforeCursorPos, const int32 beforeOffset) {
}

int32 AUniteCharaPanelCtrlBase::GetResultDevilLevelFontColor(int32 InDevilId, int32 InLv) {
    return 0;
}

void AUniteCharaPanelCtrlBase::GetResultDevilHpMpFontColor(int32 InDevilId, int32 InLv, int32 InHp, int32 InMp, int32& OutHpColorType, int32& OutMpColorType) {
}

int32 AUniteCharaPanelCtrlBase::GetResultDevilCostFontColor(int32 InCost) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetPartyMaxDisplayCount() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetPartyListOffsetIndex() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetPartyListDstOffsetIndex() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetPartyCursorWithInDrawRange(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

FVector2D AUniteCharaPanelCtrlBase::GetPanelPositionByIndex(int32 InIndex, FVector2D InVec2D, int32 InCheckType) {
    return FVector2D{};
}

FUniteCharaPanelParamData AUniteCharaPanelCtrlBase::GetNkmParamForResultPanel(int32 InDevilId) {
    return FUniteCharaPanelParamData{};
}

int32 AUniteCharaPanelCtrlBase::GetNkmIndexOfUseTargetListInOffset(int32 InIndex, int32 InCursorOffset) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetNkmIndexOfUseTargetList(int32 InIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetNkmIndexOfFusionFirst() {
    return 0;
}

FVector2D AUniteCharaPanelCtrlBase::GetMovePanelPosition(int32 InCategory) {
    return FVector2D{};
}

FVector2D AUniteCharaPanelCtrlBase::GetMovePanelAnimation(int32 InCategory) {
    return FVector2D{};
}

int32 AUniteCharaPanelCtrlBase::GetMoveOffsetCursorPositionIndexByScrollBar(int32 InIndex, int32 InOffsetIndex, int32 InMoveIndex, int32 InOffsetType) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetMoveOffsetCursorPositionIndex(int32 InIndex, int32 InMoveIndex, int32 InOffsetType, bool InScrollLock) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex, int32 InOffsetType) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetMaxStockNumber() {
    return 0;
}

FVector2D AUniteCharaPanelCtrlBase::GetFusionPanelPositionByIndex(int32 InIndex, FVector2D InVec2D, int32 InCheckType) {
    return FVector2D{};
}

int32 AUniteCharaPanelCtrlBase::GetFusionMaxDisplayCount() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetFusionCursorPosition() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetFusionCursorOffset() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetFusionCount() {
    return 0;
}

TArray<FFusionCombineDispID> AUniteCharaPanelCtrlBase::GetFusionCombineDispIDList() {
    return TArray<FFusionCombineDispID>();
}

float AUniteCharaPanelCtrlBase::GetFusionCombineAnimationTimeMax() {
    return 0.0f;
}

float AUniteCharaPanelCtrlBase::GetFusionCombineAnimationRate() {
    return 0.0f;
}

int32 AUniteCharaPanelCtrlBase::GetFusionCombineAnimationMoveType() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetFusionCombineAnimationMoveDistance() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetFSecondNkmIndexByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetFSecondMoveOffsetCursor(int32 InMove) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetFSecondMoveCharaCursor(int32 InMove, bool bInCursorLoop) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetFSecondDisplayCursorPosition() {
    return 0;
}

void AUniteCharaPanelCtrlBase::GetFSecondDevilInfoByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType, int32& OutDevilId, int32& OutNkmIndex, int32& OutCost, E_UNITECHARAPANEL_DEVILDATATYPE& OutType) {
}

int32 AUniteCharaPanelCtrlBase::GetFSecondDevilIdByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType) {
    return 0;
}

void AUniteCharaPanelCtrlBase::GetFResultDevilInfoByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType, bool bInCheckCanSelect, int32& OutDevilId, int32& OutCost, int32& OutExp, int32& OutLv, int32& OutHp, int32& OutMp, int32& OutCanSelect) {
}

int32 AUniteCharaPanelCtrlBase::GetFResultDevilIdByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetFFirstNkmIndexByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType) {
    return 0;
}

void AUniteCharaPanelCtrlBase::GetFFirstDevilInfoByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType, int32& OutDevilId, int32& OutNkmIndex, int32& OutCost, E_UNITECHARAPANEL_DEVILDATATYPE& OutType) {
}

int32 AUniteCharaPanelCtrlBase::GetFFirstDevilIdByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilIdOfFusionSecond() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilIdOfFusionResultCost() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilIdOfFusionResult() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilIdOfFusionFirst() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilIdByIndex(int32 InIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookType() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookOffsetCursorPosition() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookMoveCursorOffsetPositionIndexByScroll(int32 InIndex, int32 InMoveIndex, int32 InScrollLock) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookMoveCursorOffsetPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookMoveCategoryCursorPositionIndex(int32 InDevilId) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookMaxDisplayCount() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookDevilIdByIndex(int32 InIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookCursorPosition() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookCount() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookCostFontColor(int32 InCost, int32 InPartyMakka) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetDevilBookCost(int32 InIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::GetBattleIndexByStockIndex(int32 InIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::EntryPartyList(int32 InIndex, E_UNITECHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}

bool AUniteCharaPanelCtrlBase::EntryNkmList(int32 InIndex, int32 InNkmIndex, int32 InCursorOffset) {
    return false;
}

bool AUniteCharaPanelCtrlBase::EntryDevilBookAll() {
    return false;
}

bool AUniteCharaPanelCtrlBase::EntryDevilBook(int32 InDevilId) {
    return false;
}

int32 AUniteCharaPanelCtrlBase::DelPartyListFlag(int32 InIndex, E_UNITECHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}

bool AUniteCharaPanelCtrlBase::DeletePanelList() {
    return false;
}

bool AUniteCharaPanelCtrlBase::DeleteCharaPanel(int32 InSrcIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::CreateUtsusemiSkillBuffer() {
    return false;
}

bool AUniteCharaPanelCtrlBase::CreateUtsusemiEntryList() {
    return false;
}

bool AUniteCharaPanelCtrlBase::CreateStockSortList() {
    return false;
}

bool AUniteCharaPanelCtrlBase::CreateSpecialFusionList() {
    return false;
}

bool AUniteCharaPanelCtrlBase::CreateSearchFusionList() {
    return false;
}

bool AUniteCharaPanelCtrlBase::CreateSearchFusionCombinationList() {
    return false;
}

bool AUniteCharaPanelCtrlBase::CreateSearchExFusionListAsync(bool bInReSearch) {
    return false;
}

bool AUniteCharaPanelCtrlBase::CreateSearchExFusionList(bool bInReSearch) {
    return false;
}

bool AUniteCharaPanelCtrlBase::CreateFusionResultEntryList() {
    return false;
}

bool AUniteCharaPanelCtrlBase::CreateDevilBookRewriteList() {
    return false;
}

bool AUniteCharaPanelCtrlBase::CreateDevilBookEntryList() {
    return false;
}

E_UNITECHARAPANEL_ERRORTYPE AUniteCharaPanelCtrlBase::CheckDevilBookSummonError(int32 InDevilId, int32 InCost) {
    return E_UNITECHARAPANEL_ERRORTYPE::E_UNITEPANEL_ERROR_NONE;
}

int32 AUniteCharaPanelCtrlBase::CheckCombineNumFromSearchFusionList(int32 InDevilId) {
    return 0;
}

bool AUniteCharaPanelCtrlBase::ChangeSelectedPanel(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InDstType) {
    return false;
}

bool AUniteCharaPanelCtrlBase::CanBeSelectedAsUtsusemiNkmIndex(int32 InSrcIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::CanBeSelectedAsUtsusemiDevil(int32 InDevilId) {
    return false;
}

bool AUniteCharaPanelCtrlBase::CanBeSelectedAsUtsusemi(int32 InIndex) {
    return false;
}

bool AUniteCharaPanelCtrlBase::CanBeSelectedAsStatusTarget(int32 InSrcIndex, int32 InOffsetCursor) {
    return false;
}

int32 AUniteCharaPanelCtrlBase::CanBeSelectedAsSrc(int32 InSrcIndex) {
    return 0;
}

E_UNITECHARAPANEL_ERRORTYPE AUniteCharaPanelCtrlBase::CanBeSelectedAsSpecialFusionSecond() {
    return E_UNITECHARAPANEL_ERRORTYPE::E_UNITEPANEL_ERROR_NONE;
}

int32 AUniteCharaPanelCtrlBase::CanBeSelectedAsSearchFusion(int32 InSrcIndex) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::CanBeSelectedAsFusionSecond() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::CanBeSelectedAsFusionFirst(int32 InSrcIndex, bool bInUseDevilBook) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::CanBeSelectedAsDst(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InSrcCursorOffset, int32 InDstCursorOffset) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::CanBeDeletedAsSrc(int32 InSrcIndex) {
    return 0;
}

void AUniteCharaPanelCtrlBase::CalcUtsusemiFusionCursorPositionByDataIndex(int32 InDataIndex, int32& OutCursorOffset, int32& OutCursorPosition) {
}

int32 AUniteCharaPanelCtrlBase::CalcSpecialFusionSecondResultExp() {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::CalcSpecialFusionResultExpByIndex(int32 InIndex) {
    return 0;
}

void AUniteCharaPanelCtrlBase::CalcSpecialFusionCursorPositionByDataIndex(int32 InDataIndex, int32& OutCursorOffset, int32& OutCursorPosition) {
}

void AUniteCharaPanelCtrlBase::CalcSearchFusionCursorPositionByDataIndex(int32 InDataIndex, int32& OutCursorOffset, int32& OutCursorPosition) {
}

int32 AUniteCharaPanelCtrlBase::CalcScrollBarClickedByUtsusemi(float InRate, int32 InOffsetType) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::CalcScrollBarClickedBySpecialFusion(float InRate, int32 InOffsetType) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::CalcScrollBarClickedBySearchFusion(float InRate, int32 InOffsetType) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::CalcScrollBarClickedByParty(float InRate, int32 InType) {
    return 0;
}

int32 AUniteCharaPanelCtrlBase::CalcScrollBarClickedByDevilBook(float InRate, int32 InOffsetType) {
    return 0;
}

FVector2D AUniteCharaPanelCtrlBase::CalcFusionCombineAnimationPos(const FVector2D& InStartPos, const FVector2D& InEndPos, float InRate) {
    return FVector2D{};
}

int32 AUniteCharaPanelCtrlBase::CalcFResultDevilExpByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType) {
    return 0;
}

FUniteCharaPanelParamData AUniteCharaPanelCtrlBase::CalcDevilBookPanelParamByDevilId(int32 InDevilId) {
    return FUniteCharaPanelParamData{};
}

FUniteCharaPanelParamData AUniteCharaPanelCtrlBase::CalcDevilBookPanelParam(int32 InIndex, int32 InMode, int32 InType) {
    return FUniteCharaPanelParamData{};
}

void AUniteCharaPanelCtrlBase::CalcDevilBookCursorPositionByDataIndex(int32 InDataIndex, int32& OutCursorOffset, int32& OutCursorPosition) {
}

int32 AUniteCharaPanelCtrlBase::CalcDevilBookCost(int32 InIndex, int32 InMode, int32 InType) {
    return 0;
}





bool AUniteCharaPanelCtrlBase::BackUpForSortPartyData(int32 InIndex, int32 InOffset) {
    return false;
}

bool AUniteCharaPanelCtrlBase::ApplyCharaPanelCursorCtrl(E_UNITECHARAPANEL_MENUTYPE InType) {
    return false;
}

int32 AUniteCharaPanelCtrlBase::AddPartyListFlag(int32 InIndex, E_UNITECHARAPANELFLAG InType, int32 InCursorOffset) {
    return 0;
}


