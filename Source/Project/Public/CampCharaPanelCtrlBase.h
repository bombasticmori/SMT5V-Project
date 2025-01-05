#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_ABILITYNAME_TYPE.h"
#include "E_CAMPCHARAPANELFLAG.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "CampCharaPanelCtrlBase.generated.h"

class UUIStatusCtrlDataObjCampParty;

UCLASS(Blueprintable)
class ACampCharaPanelCtrlBase : public AActor {
    GENERATED_BODY()
public:
    ACampCharaPanelCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool UseSkill(int32 InUseSkillId, int32 InUseNkmIndex, int32 InTargetIndex, bool InSingleUsed);
    
    UFUNCTION(BlueprintCallable)
    bool UseItem(int32 InUseItemId, int32 InIndex, bool InSingleUsed, int32 InUseItemNumber);
    
    UFUNCTION(BlueprintCallable)
    bool UpDateAnalyzeExistInParty();
    
    UFUNCTION(BlueprintCallable)
    bool StopSummonAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StopMovePanelAnimation(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool StopCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartSummonAnimation(float InWaitTime);
    
    UFUNCTION(BlueprintCallable)
    bool StartMovePanelAnimation(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool StartCharaPanelFadeOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool SortUtsusemiSkillBuffer();
    
    UFUNCTION(BlueprintCallable)
    int32 SetUtsusemiPanelPositionBySelectUtsusemiId();
    
    UFUNCTION(BlueprintCallable)
    bool SetUtsusemiNewIconByOffsetIndex(int32 InOffsetIndex, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetUtsusemiNewIconByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetUtsusemiInitializeCursorPositionIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetUtsusemiCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool SetUseSkillTargetListPanel(int32 InUseSkillId, int32 InUseNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetUseItemTargetListPanel(int32 InUseItemId);
    
    UFUNCTION(BlueprintCallable)
    int32 SetUnselectableTargetPanelOn(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetUnselectablePanelByUtsusemi(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetTargetListOffsetIndex(int32 InOffsetIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetStockSortToParty();
    
    UFUNCTION(BlueprintCallable)
    int32 SetStockInitializeCursorPositionIndex(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortUtsusemiList(int32 InSortType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortType(int32 InPanelType, int32 InSortType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortStockList(int32 InSortType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortAscending(bool InAscending);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortAnalyzeList(int32 InSortType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkillCalcOnPanelByIndex(int32 InUseSkillId, int32 InUseNkmIndex, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkillCalcOnPanelAll(int32 InUseSkillId, int32 InUseNkmIndex);
    
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
    bool SetMovingCursor(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetMovePanelSpeed(int32 InCategory, float InMoveSpeed);
    
    UFUNCTION(BlueprintCallable)
    bool SetMovePanelPosition(FVector2D InPos, int32 InCategory, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemNumberPosition();
    
    UFUNCTION(BlueprintCallable)
    bool SetItemCalcOnPanelByIndex(int32 InUseItemId, int32 InIndex, int32 InUseItemNumber);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemCalcOnPanelAll(int32 InUseItemId, int32 InUseItemNumber);
    
    UFUNCTION(BlueprintCallable)
    bool SetExtractSortUtsusemiList(int32 InSortType);
    
    UFUNCTION(BlueprintCallable)
    int32 SetEnemyTypeCursor(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnemyType(int32 InEnemyType);
    
    UFUNCTION(BlueprintCallable)
    bool SetCharaMovingCursor(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 SetAnalyzePanelPositionBySelectAnalyzeId();
    
    UFUNCTION(BlueprintCallable)
    bool SetAnalyzeNewIconByOffsetIndex(int32 InEnemyType, int32 InOffsetIndex, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetAnalyzeNewIconByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetAnalyzeInitializeCursorPositionIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetAnalyzeCursorPositionIndex(int32 InCursorPosition, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool ResetUnselectablePanelByUtsusemi(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ResetUnselectablePanel();
    
    UFUNCTION(BlueprintCallable)
    bool ResetReserveHPMPParam();
    
    UFUNCTION(BlueprintCallable)
    bool ResetMovingCursor(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool ResetCharaMovingCursor(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList_Utsusemi(UUIStatusCtrlDataObjCampParty* StatusUIDataObj);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList_Analyze(UUIStatusCtrlDataObjCampParty* StatusUIDataObj);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList(UUIStatusCtrlDataObjCampParty* StatusUIDataObj);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveSortType(int32 InPanelType, int32 InMoveSortType);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveOffsetSortType(int32 InPanelType, int32 InMoveOffsetSortType, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveItemNumberPosition(int32 InMoveIndex, bool InForceLoopEnd);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveEnemyType(int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsSummonAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsPartyCursorWithInDrawRange(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool IsNewIconOfAllUtsusemiOff();
    
    UFUNCTION(BlueprintCallable)
    bool IsNewIconOfAllAnalyzesOff();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 IsMultipleUseItem(int32 InUseItemId);
    
    UFUNCTION(BlueprintCallable)
    bool IsMovePanelAnimation(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool IsIndexPanelSummoned(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsGuestParty(int32 InIndex, int32 InOffsetCursor);
    
    UFUNCTION(BlueprintCallable)
    bool IsExistUtsusemiInShop(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsDead(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnalyzeExistIndexInParty(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool InitializeUtsusemiSkillBuffer();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeSortCursor(int32 InType, int32 InCursorPosition, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool InitializeEntryPartyList();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeCharaPanelCursor(int32 InType);
    
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
    int32 GetUtsusemiItemHelpMessageIdByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiDevilIdByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetUtsusemiCount();
    
    UFUNCTION(BlueprintCallable)
    bool GetUseMessageTagParam(int32 InUseMessageType, int32 InUseId, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetUseItemMessage(int32 InUseItemId, int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetListOffsetIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSummonTargetInStock(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockIndexByNkmIndex(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockIndexByBattleIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStockIndexByAddOffset(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockDispNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSortType(int32 InPanelType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSortCursorOffset();
    
    UFUNCTION(BlueprintCallable)
    bool GetSortAscending();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSkillCostByNkmIndex(int32 InUseSkillId, int32 InUseNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetRecoveryAllSEFlag();
    
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
    int32 GetPanelIndexByNkmIndex(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNkmIndexOfUseTargetListInOffset(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNkmIndexOfUseTargetList(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNewIconFrameRate();
    
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxNumberOfItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemNumberPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetISValueParam(int32 InValueIndex);
    
    UFUNCTION(BlueprintCallable)
    E_SKILL_TEKISEI_CATEGORY GetISSkillTekiseiGategory();
    
    UFUNCTION(BlueprintCallable)
    uint8 GetISNkmIndex();
    
    UFUNCTION(BlueprintCallable)
    E_ABILITYNAME_TYPE GetISAbilityNameType();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyType();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDevilIdByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorIndexByUseTargetList(int32 InStartIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharaMovingCursor(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleIndexByStockIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalyzeOffsetCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    bool GetAnalyzeNewIconByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalyzeMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalyzeMoveCursorOffsetPositionIndexByScrollBar(int32 InIndex, int32 InMoveIndex, int32 InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalyzeMoveCursorOffsetPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalyzeMaxDisplayCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalyzeDevilIdByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalyzeCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnalyzeCount();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAddGodParameterPoint();
    
    UFUNCTION(BlueprintCallable)
    int32 EntryPartyList(int32 InIndex, E_CAMPCHARAPANELFLAG InType, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool EntryNkmList(int32 InIndex, int32 InNkmIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool DidUseInUtsusemi(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 DelPartyListFlag(int32 InIndex, E_CAMPCHARAPANELFLAG InType, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool DeletePanelList();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteCharaPanel(int32 InSrcIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CreateUtsusemiSkillBuffer();
    
    UFUNCTION(BlueprintCallable)
    bool CreateUtsusemiEntryList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateUseSkillTargetList(int32 InUseSkillId, int32 InUseNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CreateUseItemTargetList(int32 InUseItemId);
    
    UFUNCTION(BlueprintCallable)
    bool CreateStockSortList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateAnalyzeEntryList(int32 InMode);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSortAscending();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSelectedPanel(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InDstType);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeUseSelectedSkill(int32 InUseSkillId, int32 InUseNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeUseSelectedItem(int32 InItemId);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeSelectedTarget(int32 InIndex, bool InAllTarget);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeSelectedAsStatusTarget(int32 InSrcIndex, int32 InOffsetCursor);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedAsSrc(int32 InSrcIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedAsDst(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InSrcCursorOffset, int32 InDstCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeDeletedAsSrc(int32 InSrcIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CalcUseMessageTagParam(int32 InUseMessageType, int32 InUseId, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcUseItemMaxNumber(int32 InUseItemId, int32 InIndex, bool InSingleUsed);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClickedByUtsusemi(float InRate, int32 InOffsetType);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClickedByParty(float InRate, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClickedByAnalyze(float InRate, int32 InOffsetType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetRecoveryVNumberHPMP(int32 InIndex, float InStartTime, int32 InValueHp, int32 InValueMp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetRecoveryAnimationTime(int32 InIndex, float InStartTime, int32 InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetRecoveryAnimation(int32 InIndex, int32 InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetNewIconFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializePanelAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetFadeOutPanelAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetCampCharaPanelUnselectablePanelOn(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetCampCharaPanelUnselectablePanelOff(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetCampCharaPanelReserveHPMPParam(int32 InIndex, int32 InHp, int32 InMp);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetCampCharaPanelMaxHPMPParam(int32 InIndex, int32 InNkmIndex, int32 InNowType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetCampCharaPanelCalcHPMPParam(int32 InIndex, int32 InHp, int32 InMp, int32 InFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetCampCharaPanelAllRecoveryEffect(float InStartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEResetCampCharaPanelReserveHPMPParam(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool BackUpForSortUtsusemiData();
    
    UFUNCTION(BlueprintCallable)
    bool BackUpForSortPartyData(int32 InIndex, int32 InOffset);
    
    UFUNCTION(BlueprintCallable)
    bool BackUpForSortAnalyzeData();
    
    UFUNCTION(BlueprintCallable)
    int32 AddPartyListFlag(int32 InIndex, E_CAMPCHARAPANELFLAG InType, int32 InCursorOffset);
    
};

