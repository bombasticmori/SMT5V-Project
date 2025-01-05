#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_HEALCHARAPANELFLAG.h"
#include "HealCharaPanelCtrlBase.generated.h"

class UUIStatusCtrlDataObjCampParty;

UCLASS(Blueprintable)
class AHealCharaPanelCtrlBase : public AActor {
    GENERATED_BODY()
public:
    AHealCharaPanelCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool StopCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartCharaPanelFadeOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool SetTargetListOffsetIndex(int32 InOffsetIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetStockInitializeCursorPositionIndex(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetPartyListOffsetIndex(int32 InOffsetIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 SetPartyInitializeCursorPositionIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    bool SetHealCostAll(int32 InCost);
    
    UFUNCTION(BlueprintCallable)
    bool SetHealCost(int32 InIndex, int32 InCost, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool ResetMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    void RebuildStatusCharaList(UUIStatusCtrlDataObjCampParty* StatusUIDataObj);
    
    UFUNCTION(BlueprintCallable)
    bool IsEmptyPanel(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool IsCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeEntryPartyList();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeCharaPanelCursor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTargetListOffsetIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetStockDispNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartyMaxDisplayCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyListOffsetIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPartyDispNumber();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetPanelPositionByIndex(int32 InIndex, FVector2D InVec2D, int32 InCheckType);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNkmIndexOfUseTargetList(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveOffsetCursorPositionIndexByScrollBar(int32 InIndex, int32 InOffsetIndex, int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveOffsetCursorPositionIndex(int32 InIndex, int32 InMoveIndex, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMoveCursorPositionIndex(int32 InIndex, int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetMaxStockNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetHealMp(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHealHp(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHealCostAllChara();
    
    UFUNCTION(BlueprintCallable)
    int32 GetHealCost(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorIndexByUseTargetList(int32 InStartIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 EntryPartyList(int32 InIndex, E_HEALCHARAPANELFLAG InType, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool EntryNkmList(int32 InIndex, int32 InNkmIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 DelPartyListFlag(int32 InIndex, E_HEALCHARAPANELFLAG InType, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    bool DeletePanelList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateUseHealTargetList();
    
    UFUNCTION(BlueprintCallable)
    bool CanBeUseSelected();
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeSelectedTarget(int32 InIndex, bool InAllHealFlag);
    
    UFUNCTION(BlueprintCallable)
    bool CalcTargetHealAll();
    
    UFUNCTION(BlueprintCallable)
    int32 CalcTargetHeal(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClickedByParty(float InRate);
    
    UFUNCTION(BlueprintCallable)
    bool CalcHealCostFontColorAll(int32 InUseCost);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcHealCost(int32 InIndex, int32 InCursorOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializePanelAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetFadeOutPanelAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetCostFontColor(int32 InIndex, int32 InCost, int32 InUseCost);
    
    UFUNCTION(BlueprintCallable)
    int32 AddPartyListFlag(int32 InIndex, E_HEALCHARAPANELFLAG InType, int32 InCursorOffset);
    
};

