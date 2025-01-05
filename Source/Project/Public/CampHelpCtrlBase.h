#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_CAMPHELPLIST_CONDITIONTYPE.h"
#include "CampHelpCtrlBase.generated.h"

UCLASS(Blueprintable)
class ACampHelpCtrlBase : public AActor {
    GENERATED_BODY()
public:
    ACampHelpCtrlBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SynchronizedNewIconAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StopListAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartListAnimation(bool InCursorAnimation, bool InCursorLoop, bool InDarkMaskOnFlag);
    
    UFUNCTION(BlueprintCallable)
    bool StartFadeOutListAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool SetMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    bool SetHelpTypeMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    int32 SetHelpTypeCursor(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetHelpType(int32 InHelpType);
    
    UFUNCTION(BlueprintCallable)
    bool SetHelpPanel(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool SetHelpNewIcon(int32 InCategory, int32 InIndex, bool inFlag);
    
    UFUNCTION(BlueprintCallable)
    bool ResetMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    bool ResetHelpTypeMovingCursor();
    
    UFUNCTION(BlueprintCallable)
    bool ResetHelpNewIcon();
    
    UFUNCTION(BlueprintCallable)
    int32 MoveHelpType(int32 InMoveIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsListAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsItPossibleDisclose(int32 InconditionId, int32 InMessageTextId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExistDLCFlag(E_CAMPHELPLIST_CONDITIONTYPE InType);
    
public:
    UFUNCTION(BlueprintCallable)
    bool InitializeHelpListCursor();
    
    UFUNCTION(BlueprintCallable)
    int32 HelpMoveCursorOffset(int32 InMoveCursor, int32 InScrollStartOffset, bool InScrollLock);
    
    UFUNCTION(BlueprintCallable)
    int32 HelpMoveCursor(int32 InMoveCursor, int32 InScrollStartOffset);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHelpType();
    
    UFUNCTION(BlueprintCallable)
    int32 GetHelpNumber();
    
    UFUNCTION(BlueprintCallable)
    bool GetHelpNewIcon(int32 InCategory, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHelpMessageId(int32 InCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHelpListMax();
    
    UFUNCTION(BlueprintCallable)
    int32 GetHelpIdFromIndex(int32 InCategory, int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHelpId(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHelpDisplayNumber();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDisplayCursorIndex(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorListIndex();
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorIndex(int32 InCategory);
    
    UFUNCTION(BlueprintCallable)
    int32 GetCursorDispIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCategoryId();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteList();
    
    UFUNCTION(BlueprintCallable)
    bool CreateHelpList();
    
    UFUNCTION(BlueprintCallable)
    void ChangeHelpPanelList(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcScrollBarClicked(float InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEStartNewIconAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeListAnimation(int32 InIndex, int32 InType, int32 InAnimeType, bool InCursorOn, bool InCursorLoop, bool InNewIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetHelpPanel(int32 InIndex, int32 InCategoryId, int32 InHelpId, int32 InUseHelpNo, bool InDispOnFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetHelpNameColor(int32 InIndex, int32 InUseItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetHelpCursorAnimationByUseAnimeType(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetHelpCursorAnimation(int32 InIndex, int32 InType, int32 InAnimeType, bool InCursorOn, bool InNewIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelHelpNoDataTextDispOn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelHelpNoDataTextDispOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelHelpDarkMaskDispOn(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEPanelHelpDarkMaskDispOff(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEHelpPanelDispOn(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIEHelpPanelDispOff(int32 InIndex);
    
};

