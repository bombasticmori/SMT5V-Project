#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MapCharaPanelCtrlBase.generated.h"

UCLASS(Blueprintable)
class AMapCharaPanelCtrlBase : public AActor {
    GENERATED_BODY()
public:
    AMapCharaPanelCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool StopMapCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartMapCharaPanelFadeOutAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartMapCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool IsMapCharaPanelAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetMapCharaPanelFadeOutPanelAnimation(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeMapCharaPanelAnimation(int32 InIndex);
    
};

