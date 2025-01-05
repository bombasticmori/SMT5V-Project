#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_TUTORIAL_WINDOW_MESSAGE_TYPE.h"
#include "E_UI_STATUS_CTRL_TYPE.h"
#include "E_UNITECHARAPANELCTRL_GSTATUS.h"
#include "E_UNITECHARAPANELFLAG.h"
#include "E_UNITECHARAPANEL_DEVILDATATYPE.h"
#include "E_UNITECHARAPANEL_ERRORTYPE.h"
#include "E_UNITECHARAPANEL_MENUTYPE.h"
#include "E_UNITECHARAPANEL_SEARCH.h"
#include "FusionCombineDispID.h"
#include "SpecialFusionResultDevil.h"
#include "SpecialFusionSourceDevil.h"
#include "UniteCharaPanelParamData.h"
#include "UniteCharaPanelCtrlBase.generated.h"

class AUniteCtrl;
class UUIStatusCtrlDataObjUnite;

UCLASS(Blueprintable)
class AUniteCharaPanelCtrlBase : public AActor {
    GENERATED_BODY()
public:
    AUniteCharaPanelCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateDevilBookEntryList();
    
    UFUNCTION(BlueprintCallable)
    bool UpDateDevilBookEntry();
    
    UFUNCTION(BlueprintCallable)
    bool StopSummonAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StopMovePanelAnimation(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool StopFusionCombineAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StopCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartSummonAnimation(float InWaitTime);
    
    UFUNCTION(BlueprintCallable)
    bool StartMovePanelAnimation(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool StartFusionCombineAnimation(float InWaitTime, bool bCursorUp, int32 InStartCursorOffset, int32 InEndCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool StartCharaPanelFadeOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartCharaPanelAnimation(int32 InMovePanelNum);
    
    UFUNCTION(BlueprintCallable)
    bool SortUtsusemiSkillBuffer();
    
    UFUNCTION(BlueprintCallable)
    int32 SortFusionUtsusemi(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos, int32 InSkillId);
    
    UFUNCTION(BlueprintCallable)
    int32 SortFusionSpDevil(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos);
    
    UFUNCTION(BlueprintCallable)
    int32 SortFusionSecondDevil(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos);
    
    UFUNCTION(BlueprintCallable)
    int32 SortFusionSearchSecondDevil(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos);
    
    UFUNCTION(BlueprintCallable)
    int32 SortFusionSearchDevil(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos);
    
    UFUNCTION(BlueprintCallable)
    int32 SortFusionFirstDevil(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos);
    
    UFUNCTION(BlueprintCallable)
    int32 SortDevilBook(int32 InSortMenuPos, bool bInAscending, int32 InSelectPos);
    
    UFUNCTION(BlueprintCallable)
    void SetUtsusemiOffsetCursorPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetUtsusemiNewIconByOffsetIndex(int32 InOffsetIndex, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetUtsusemiNewIconByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetUtsusemiCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetUtsusemiCursorPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetUseSearchType(E_UNITECHARAPANEL_SEARCH InSearchType);
    
    UFUNCTION(BlueprintCallable)
    bool SetUnselectablePanelByUtsusemi(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetUniteCtrlPtr(AUniteCtrl* pUniteCtrl);
    
    UFUNCTION(BlueprintCallable)
    bool SetStockSortToParty();
    
    UFUNCTION(BlueprintCallable)
    int32 SetStockInitializeCursorPositionIndex(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialFusionDevilSecondCursorPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialFusionDevilOffsetCursorPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetSpecialFusionDevilId(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecialFusionDevilCursorPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetSpecialFusionCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetSearchFusionDevilOffsetCursorPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetSearchFusionDevilId(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetSearchFusionDevilCursorPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetSearchFusionCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool SetRewriteType(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 SetPartyPanelPositionBySelectNkmId(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetPartyListOffsetIndex(int32 InOffsetIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetPartyListDstOffsetIndex(int32 InOffsetIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetPartyInitializeCursorPositionIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetPartyCursorParameter(int32 InCursor, int32 InOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsetAndIndex(const E_UI_STATUS_CTRL_TYPE Mode, const int32 inCursorPos, const int32 InOffset, const bool swapDstMode);
    
    UFUNCTION(BlueprintCallable)
    bool SetMovePanelSpeed(int32 InCategory, float InMoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool SetMovePanelPosition(FVector2D InPos, int32 InCategory, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetFusionSecond();
    
    UFUNCTION(BlueprintCallable)
    bool SetFusionFirst(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetFusionCursorPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetFusionCursorOffset(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetDevilBookType(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    void SetDevilBookOffsetCursorPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetDevilBookCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDevilBookCursorPosition(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetDevilBookCost(int32 InIndex, int32 InCost);
    
    UFUNCTION(BlueprintCallable)
    bool SetCharaMovingCursor(E_UNITECHARAPANEL_MENUTYPE InType);
    
    UFUNCTION(BlueprintCallable)
    bool ResetUnselectablePanelByUtsusemi(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetCursorParam();
    
    UFUNCTION(BlueprintCallable)
    bool ResetCharaMovingCursor(E_UNITECHARAPANEL_MENUTYPE InType);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList_Utsusemi(UUIStatusCtrlDataObjUnite* StatusUIDataObj);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList_SpecialFusionSecond(UUIStatusCtrlDataObjUnite* StatusUIDataObj);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList_SpecialFirst(UUIStatusCtrlDataObjUnite* StatusUIDataObj);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList_SearchFirst(UUIStatusCtrlDataObjUnite* StatusUIDataObj);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList_Rewrite(UUIStatusCtrlDataObjUnite* StatusUIDataObj);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList_Party(UUIStatusCtrlDataObjUnite* StatusUIDataObj, E_UI_STATUS_CTRL_TYPE Type, bool useParty, bool useStock, int32 cursorPos);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList_FusionSecond(UUIStatusCtrlDataObjUnite* StatusUIDataObj, E_UI_STATUS_CTRL_TYPE Type);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList_Browse(UUIStatusCtrlDataObjUnite* StatusUIDataObj);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveRewriteType(int32 InMoveIndex, bool bInCursorLoop);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveDevilBookType(int32 InMoveIndex, bool bInCursorLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidInputCtrl(E_UNITECHARAPANELCTRL_GSTATUS InGStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidDevilBookPartyMakkaDiffColor();
    
    UFUNCTION(BlueprintCallable)
    bool IsSummonAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSearchFusionCombinationListNowSearching();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSearchFusionCombinationListCompleteSearch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSearchExFusionNowSearching();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSearchExFusionCompleteSearch();
    
    UFUNCTION(BlueprintCallable)
    bool IsPartyCursorWithInDrawRange(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool IsMovePanelAnimation(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool IsIndexPanelSummoned(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuestParty(int32 InIndex, int32 InOffsetCursor);
    
    UFUNCTION(BlueprintCallable)
    bool IsFusionExistDevilIdInParty(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    bool IsFusionExistDevilIdInDevilBook(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFusionCombineAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsExistUtsusemiInShop(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsDevilBookExistIndexInDevilBook(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsDead(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeUtsusemiSkillBuffer();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeEntryPartyList();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeCharaPanelCursor(E_UNITECHARAPANEL_MENUTYPE InType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiOffsetCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    bool GetUtsusemiNewIconByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiMoveCursorOffsetPositionIndexByScroll(int32 InIndex, int32 InMoveIndex, int32 InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiMoveCursorOffsetPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiMaxDisplayCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiDevilIdByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_UNITECHARAPANEL_SEARCH GetUseSearchType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTutorialMessageId(E_TUTORIAL_WINDOW_MESSAGE_TYPE InMessageNo, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockIndexByBattleIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStockIndexByAddOffset(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockDispNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpecialFusionSourceNum();
    
    UFUNCTION(BlueprintCallable)
    FSpecialFusionSourceDevil GetSpecialFusionSourceDevil(int32 InSourceIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialFusionSecondMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex, bool bInCursorLoop);
    
    UFUNCTION(BlueprintCallable)
    void GetSpecialFusionSecondDevilByIndex(int32 InIndex, int32& OutDevilId, int32& OutNkmIndex, E_UNITECHARAPANEL_DEVILDATATYPE& OutDevilType);
    
    UFUNCTION(BlueprintCallable)
    FSpecialFusionResultDevil GetSpecialFusionResultDevil();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialFusionMoveCursorOffsetPositionIndexByScroll(int32 InIndex, int32 InMoveIndex, int32 InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialFusionMoveCursorOffsetPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialFusionDevilSecondCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialFusionDevilOffsetCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialFusionDevilMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialFusionDevilMaxDisplayCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialFusionDevilIdByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialFusionDevilCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSpecialFusionDevilCount();
    
    UFUNCTION(BlueprintCallable)
    FSpecialFusionResultDevil GetSpecialFusionDevilByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSearchFusionMoveCursorOffsetPositionIndexByScroll(int32 InIndex, int32 InMoveIndex, int32 InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSearchFusionMoveCursorOffsetPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSearchFusionDevilOffsetCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSearchFusionDevilMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSearchFusionDevilMaxDisplayCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSearchFusionDevilIdByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSearchFusionDevilCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSearchFusionDevilCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRewriteType();
    
    UFUNCTION(BlueprintCallable)
    void GetReturnDataFromStatusUI(UUIStatusCtrlDataObjUnite* StatusUIDataObj, int32& retCursorPos, int32& retOffset, const int32 beforeCursorPos, const int32 beforeOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResultDevilLevelFontColor(int32 InDevilId, int32 InLv);
    
    UFUNCTION(BlueprintCallable)
    void GetResultDevilHpMpFontColor(int32 InDevilId, int32 InLv, int32 InHp, int32 InMp, int32& OutHpColorType, int32& OutMpColorType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResultDevilCostFontColor(int32 InCost);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartyMaxDisplayCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyListOffsetIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyListDstOffsetIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartyCursorWithInDrawRange(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetPanelPositionByIndex(int32 InIndex, FVector2D InVec2D, int32 InCheckType);
    
    UFUNCTION(BlueprintCallable)
    FUniteCharaPanelParamData GetNkmParamForResultPanel(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNkmIndexOfUseTargetListInOffset(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNkmIndexOfUseTargetList(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNkmIndexOfFusionFirst();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetMovePanelPosition(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetMovePanelAnimation(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveOffsetCursorPositionIndexByScrollBar(int32 InIndex, int32 InOffsetIndex, int32 InMoveIndex, int32 InOffsetType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveOffsetCursorPositionIndex(int32 InIndex, int32 InMoveIndex, int32 InOffsetType, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex, int32 InOffsetType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxStockNumber();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetFusionPanelPositionByIndex(int32 InIndex, FVector2D InVec2D, int32 InCheckType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFusionMaxDisplayCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFusionCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFusionCursorOffset();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFusionCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<FFusionCombineDispID> GetFusionCombineDispIDList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFusionCombineAnimationTimeMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFusionCombineAnimationRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFusionCombineAnimationMoveType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFusionCombineAnimationMoveDistance();
    
    UFUNCTION(BlueprintCallable)
    int32 GetFSecondNkmIndexByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFSecondMoveOffsetCursor(int32 InMove);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFSecondMoveCharaCursor(int32 InMove, bool bInCursorLoop);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFSecondDisplayCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    void GetFSecondDevilInfoByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType, int32& OutDevilId, int32& OutNkmIndex, int32& OutCost, E_UNITECHARAPANEL_DEVILDATATYPE& OutType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFSecondDevilIdByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    void GetFResultDevilInfoByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType, bool bInCheckCanSelect, int32& OutDevilId, int32& OutCost, int32& OutExp, int32& OutLv, int32& OutHp, int32& OutMp, int32& OutCanSelect);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFResultDevilIdByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFFirstNkmIndexByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    void GetFFirstDevilInfoByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType, int32& OutDevilId, int32& OutNkmIndex, int32& OutCost, E_UNITECHARAPANEL_DEVILDATATYPE& OutType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetFFirstDevilIdByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilIdOfFusionSecond();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilIdOfFusionResultCost();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilIdOfFusionResult();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilIdOfFusionFirst();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilIdByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDevilBookType();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilBookOffsetCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilBookMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilBookMoveCursorOffsetPositionIndexByScroll(int32 InIndex, int32 InMoveIndex, int32 InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilBookMoveCursorOffsetPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilBookMoveCategoryCursorPositionIndex(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilBookMaxDisplayCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilBookDevilIdByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilBookCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilBookCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDevilBookCostFontColor(int32 InCost, int32 InPartyMakka);
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilBookCost(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleIndexByStockIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 EntryPartyList(int32 InIndex, E_UNITECHARAPANELFLAG InType, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool EntryNkmList(int32 InIndex, int32 InNkmIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool EntryDevilBookAll();
    
    UFUNCTION(BlueprintCallable)
    bool EntryDevilBook(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    int32 DelPartyListFlag(int32 InIndex, E_UNITECHARAPANELFLAG InType, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool DeletePanelList();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteCharaPanel(int32 InSrcIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CreateUtsusemiSkillBuffer();
    
    UFUNCTION(BlueprintCallable)
    bool CreateUtsusemiEntryList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateStockSortList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateSpecialFusionList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateSearchFusionList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateSearchFusionCombinationList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateSearchExFusionListAsync(bool bInReSearch);
    
    UFUNCTION(BlueprintCallable)
    bool CreateSearchExFusionList(bool bInReSearch);
    
    UFUNCTION(BlueprintCallable)
    bool CreateFusionResultEntryList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateDevilBookRewriteList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateDevilBookEntryList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_UNITECHARAPANEL_ERRORTYPE CheckDevilBookSummonError(int32 InDevilId, int32 InCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CheckCombineNumFromSearchFusionList(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSelectedPanel(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InDstType);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeSelectedAsUtsusemiNkmIndex(int32 InSrcIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeSelectedAsUtsusemiDevil(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeSelectedAsUtsusemi(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeSelectedAsStatusTarget(int32 InSrcIndex, int32 InOffsetCursor);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedAsSrc(int32 InSrcIndex);
    
    UFUNCTION(BlueprintCallable)
    E_UNITECHARAPANEL_ERRORTYPE CanBeSelectedAsSpecialFusionSecond();
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedAsSearchFusion(int32 InSrcIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedAsFusionSecond();
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedAsFusionFirst(int32 InSrcIndex, bool bInUseDevilBook);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedAsDst(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InSrcCursorOffset, int32 InDstCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeDeletedAsSrc(int32 InSrcIndex);
    
    UFUNCTION(BlueprintCallable)
    void CalcUtsusemiFusionCursorPositionByDataIndex(int32 InDataIndex, int32& OutCursorOffset, int32& OutCursorPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcSpecialFusionSecondResultExp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcSpecialFusionResultExpByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    void CalcSpecialFusionCursorPositionByDataIndex(int32 InDataIndex, int32& OutCursorOffset, int32& OutCursorPosition);
    
    UFUNCTION(BlueprintCallable)
    void CalcSearchFusionCursorPositionByDataIndex(int32 InDataIndex, int32& OutCursorOffset, int32& OutCursorPosition);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClickedByUtsusemi(float InRate, int32 InOffsetType);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClickedBySpecialFusion(float InRate, int32 InOffsetType);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClickedBySearchFusion(float InRate, int32 InOffsetType);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClickedByParty(float InRate, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClickedByDevilBook(float InRate, int32 InOffsetType);
    
    UFUNCTION(BlueprintCallable)
    FVector2D CalcFusionCombineAnimationPos(const FVector2D& InStartPos, const FVector2D& InEndPos, float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 CalcFResultDevilExpByCursorOffset(int32 InCursorOffset, int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    FUniteCharaPanelParamData CalcDevilBookPanelParamByDevilId(int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    FUniteCharaPanelParamData CalcDevilBookPanelParam(int32 InIndex, int32 InMode, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    void CalcDevilBookCursorPositionByDataIndex(int32 InDataIndex, int32& OutCursorOffset, int32& OutCursorPosition);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcDevilBookCost(int32 InIndex, int32 InMode, int32 InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetUniteCharaPanelUnselectablePanelOn(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetUniteCharaPanelUnselectablePanelOff(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializePanelAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetFadeOutPanelAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool BackUpForSortPartyData(int32 InIndex, int32 InOffset);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyCharaPanelCursorCtrl(E_UNITECHARAPANEL_MENUTYPE InType);
    
    UFUNCTION(BlueprintCallable)
    int32 AddPartyListFlag(int32 InIndex, E_UNITECHARAPANELFLAG InType, int32 InCursorOffset);
    
};

