#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BtlParty.h"
#include "E_BAD_STATUS.h"
#include "E_BATTLECHARAPANELFLAG.h"
#include "E_BTL_CNT.h"
#include "BattleCharaPanelCtrlBase.generated.h"

class UUIStatusCtrlDataObjBtlBase;

UCLASS(Blueprintable)
class ABattleCharaPanelCtrlBase : public AActor {
    GENERATED_BODY()
public:
    ABattleCharaPanelCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool UpdateEnemyPanelData();
    
    UFUNCTION(BlueprintCallable)
    int32 UpdateBattleInPartyList();
    
    UFUNCTION(BlueprintCallable)
    bool StopSummonAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StopMovePanelAnimation(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool StopBattleSummonPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StopBattleStatusPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StopBattleCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartSummonCharaPanelFadeOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartSummonAnimation(float InWaitTime);
    
    UFUNCTION(BlueprintCallable)
    bool StartStatusCharaPanelFadeOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartMovePanelAnimation(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool StartBattleSummonPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartBattleStatusPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartBattleCharaPanelFadeOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartBattleCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool SetSummonSelectedPanel();
    
    UFUNCTION(BlueprintCallable)
    int32 SetStockStatusInitializeCursorPositionIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetStockCharaSelectInitializeCursorPositionIndex(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 SetPartyStatusInitializeCursorPositionIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetPartyListOffsetIndex(int32 InOffsetIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetPartyListDstOffsetIndex(int32 InOffsetIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetPartyCursorParameter(int32 InCursor, int32 InOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 SetPartyCharaSelectInitializeCursorPositionIndex(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetMovePanelPosition(FVector2D InPos, int32 InCategory, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 SetEnemyStatusInitializeCursorPositionIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetDeadSummonFlag(bool InDeadSummonOn);
    
    UFUNCTION(BlueprintCallable)
    bool SetCharaMovingCursor(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetBattleStatusOffsetCursorPositionByIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetBattleNkmIndexList(int32 InType, int32 InIndex, int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetBattleEnemyIndexList(int32 InType, int32 InIndex, int32 InPartyIndex, int32 InDevilId);
    
    UFUNCTION(BlueprintCallable)
    bool ResetCharaMovingCursor(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList(UUIStatusCtrlDataObjBtlBase* StatusUIDataObj, bool WithEnemy);
    
    UFUNCTION(BlueprintCallable)
    bool IsSummonAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsPartyCursorWithInDrawRange(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool IsOnBadStatusByIndex(int32 InIndex, E_BAD_STATUS InBadStatus);
    
    UFUNCTION(BlueprintCallable)
    bool IsMovePanelAnimation(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    bool IsEmptyPanel(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleSummonPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleStatusPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleInByNkmIndex(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeEntryPartyList();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeCharaPanelCursor();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeBattleStatusWork();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSummonTargetInStock(int32 InIndex, bool IsDeadSummon);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSummonTargetInBattle(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockIndexByBattleIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStockIndexByAddOffset(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockDispNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartyMaxDisplayCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyListOffsetIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyListDstOffsetIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartyIndexFromPanelID(int32 InIndex, bool WithEnemy);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartyDispNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartyCursorWithInDrawRange(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetPanelPositionByIndex(int32 InIndex, FVector2D InVec2D, int32 InCheckType);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetMovePanelPosition(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetMovePanelAnimation(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveOffsetStatusPositionIndexByScrollBar(int32 InIndex, int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveOffsetStatusPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveOffsetCursorPositionIndexByScrollBar(int32 InIndex, int32 InOffsetIndex, int32 InMoveIndex, int32 InOffsetType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveOffsetCursorPositionIndex(int32 InIndex, int32 InMoveIndex, int32 InOffsetType, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveCursorStatusPositionIndex(int32 InIndex, int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex, int32 InOffsetType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxStockNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDeadTargetInStock(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    uint8 GetBattleSummonNkmIndexByOffset(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    uint8 GetBattleSummonNkmIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleStatusPanelNumber(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleStatusOffsetCursorPosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleStatusEnemyPanelData(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleSStatusNkmIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattlePartyIndexType(int32 InNkmIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleNkmIndexByNkmIndexList(int32 InType, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleInPartyIndex(int32 InType, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBattleEnemyIndexByIndexList(int32 InType, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBadstatusNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 EntryPartyList(int32 InIndex, E_BATTLECHARAPANELFLAG InType, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool EntryNkmList(int32 InIndex, int32 InNkmIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool EntryBadStatusList(int32 InIndex, int32 InBadStatus, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 DelPartyListFlag(int32 InIndex, E_BATTLECHARAPANELFLAG InType, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool DeletePanelList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateBattleNkmIndexList();
    
    UFUNCTION(BlueprintCallable)
    int32 CreateBattleInPartyList();
    
    UFUNCTION(BlueprintCallable)
    TArray<E_BAD_STATUS> CreateBadstatusArray(int32 inBadstatusIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSelectedPanel(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InDstType);
    
    UFUNCTION(BlueprintCallable)
    bool CanBeSelectedAsStatusTarget(int32 InSrcIndex, int32 InOffsetCursor);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedAsStatus(int32 InSrcIndex, bool WithEnemy);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedAsSrc(int32 InSrcIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedAsDst(int32 InSrcIndex, int32 InSrcType, int32 InDstIndex, int32 InSrcCursorOffset, int32 InDstCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedAsCharaSelect(int32 InSrcIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool CalcSupportSkill(int32 InIndex, FBtlParty InPartyData);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClickedByStatus(float InRate);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClickedByParty(float InRate, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool CalcMoveCursorStatusPositionIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool CalcDeadBadstatus(int32 InNkmIndex, int32 InHp, int32 InBadStatus);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcBattleStatusPosition(int32 InPartyIndex, FBtlParty InPartyData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetSupportIcon(int32 InSupportIndex, E_BTL_CNT InCount, int32 InValue, bool InLoopCheck, int32 InTurn, bool InMagatsuhi);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeBattleSummonPanelAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeBattleStatusPanelAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeBattleCharaPanelAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetBattleStatusOffsetCursorInstanceFrameRate(int32 InOffsetType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetBattleStatusOffsetCursorAnimation(int32 InOffsetType, int32 InAnimationType, bool InInstanceAnimationFrameOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetBattleCharaPanelUnselectablePanelOn(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetBattleCharaPanelUnselectablePanelOff(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetBattleCharaPanelFadeOutPanelAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEResetSupportIcon(int32 InSupportIndex, E_BTL_CNT InCount);
    
    UFUNCTION(BlueprintCallable)
    int32 AddPartyListFlag(int32 InIndex, E_BATTLECHARAPANELFLAG InType, int32 InCursorOffset);
    
};

