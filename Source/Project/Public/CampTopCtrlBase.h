#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CampTopCtrlBase.generated.h"

UCLASS(Blueprintable)
class ACampTopCtrlBase : public AActor {
    GENERATED_BODY()
public:
    ACampTopCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool StopTopMenuAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StopSubMenuAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartTopMenuAnimation(bool InCursorAnimation);
    
    UFUNCTION(BlueprintCallable)
    bool StartSubMenuAnimation(bool InCursorAnimation, float InStartTime);
    
    UFUNCTION(BlueprintCallable)
    bool SetTopMenuMode();
    
    UFUNCTION(BlueprintCallable)
    bool SetTopMenuCursorIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetSubMenuCursorIndex(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool SetMovingCursor(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    bool ResetMovingCursor(int32 InType);
    
    UFUNCTION(BlueprintCallable)
    int32 IsTopMenuSelected(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsTopMenuAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsSubMenuAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeTopMenuOn(bool InCursorFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubMenuColor(int32 InIndex, int32 InType, bool InMask);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteTopMenuList();
    
    UFUNCTION(BlueprintCallable)
    int32 CalcTopMenuCursor(int32 InCursor, int32 InCursorMax, int32 InCalcNumber);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcSubMenuCursor(int32 InCursor, int32 InCursorMax, int32 InCalcNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeTopMenuOn(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeTopMenuNewIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeTopMenuCursorOn(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeTopMenuCursorAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeTopMenuAnimation(int32 InIndex, int32 InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeSubMenuCursorAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeSubMenuAnimation(int32 InIndex);
    
};

