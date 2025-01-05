#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_CAMPITEMLIST_CANSELTYPE.h"
#include "CampItemCtrlBase.generated.h"

UCLASS(Blueprintable)
class ACampItemCtrlBase : public AActor {
    GENERATED_BODY()
public:
    ACampItemCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool StopListAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartListAnimation(bool InCursorAnimation, bool InCursorLoop, bool InDarkMaskOnFlag);
    
    UFUNCTION(BlueprintCallable)
    bool StartFadeOutListAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool SetSortUseItem(int32 InSortType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortType(int32 InItemType, int32 InSortType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortRelicItem(int32 InSortType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortMovingCursor(int32 InItemType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortImportantItem(int32 InSortType);
    
    UFUNCTION(BlueprintCallable)
    bool SetSortAscending(int32 InItemType, bool InAscending);
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedDarkmaskOn();
    
    UFUNCTION(BlueprintCallable)
    bool SetSelectedDarkmaskOff(int32 InCanselType);
    
    UFUNCTION(BlueprintCallable)
    bool SetMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    bool SetItemTypeMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    int32 SetItemTypeCursor(int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemType(int32 InItemType);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemPanelPositionBySelectItem(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetItemPanel(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetCanselType(E_CAMPITEMLIST_CANSELTYPE InType);
    
    UFUNCTION(BlueprintCallable)
    bool ResettingCursorListIndex();
    
    UFUNCTION(BlueprintCallable)
    bool ResetSortMovingCursor(int32 InItemType);
    
    UFUNCTION(BlueprintCallable)
    bool ResetMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    bool ResetItemTypeMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    int32 MoveSortType(int32 InItemType, int32 InMoveSortType);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveItemType(int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveCursorOffset(int32 InMoveCursor, int32 InScrollStartOffset, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 MoveCursor(int32 InMoveCursor, int32 InScrollStartOffset);
    
    UFUNCTION(BlueprintCallable)
    bool IsListAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeItemListCursor();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSortType(int32 InItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSortMovingCursorSpeed(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool GetSortAscending(int32 InItemType);
    
    UFUNCTION(BlueprintCallable)
    E_CAMPITEMLIST_CANSELTYPE GetReasonForCansel();
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemType();
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemDisplayNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemCursorOffset();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorListIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorItemId();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorDispIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCanBeUseItemNumber();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteItemList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateItemList();
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSortAscending(int32 InItemType);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeUseItem(int32 InItemId);
    
    UFUNCTION(BlueprintCallable)
    int32 CanBeUsedSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClicked(float InRate);
    
    UFUNCTION(BlueprintCallable)
    bool CalcCanBeUseItem(int32 InNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetItemSelectCursorAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetItemPanel(int32 InIndex, int32 InItemId, int32 InItemNumber, int32 InItemNumberMax, int32 InUseItem, bool InDispOnFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetItemNumberMax(int32 InIndex, int32 InItemNumberMax);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetItemNumber(int32 InIndex, int32 InItemNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetItemNameColor(int32 InIndex, int32 InUseItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetItemName(int32 InIndex, int32 InItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetItemCursorAnimationByUseAnimeType(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetItemCursorAnimation(int32 InIndex, int32 InType, int32 InAnimeType, bool InCursorOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeListAnimation(int32 InIndex, int32 InType, int32 InAnimeType, bool InCursorOn, bool InCursorLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelItemNoDataTextDispOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelItemNoDataTextDispOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelItemDarkMaskDispOn(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelItemDarkMaskDispOff(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEItemPanelDispOn(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEItemPanelDispOff(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool BackUpForSortItemData(int32 InType);
    
};

