#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CharaPanelVNumberCtrlBase.generated.h"

UCLASS(Blueprintable)
class ACharaPanelVNumberCtrlBase : public AActor {
    GENERATED_BODY()
public:
    ACharaPanelVNumberCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool StopVNumberAnimation();
    
    UFUNCTION(BlueprintCallable)
    bool StartVNumberAnimation(float InStartTime);
    
    UFUNCTION(BlueprintCallable)
    bool StartFadeOut();
    
    UFUNCTION(BlueprintCallable)
    bool SetVNumberValue(int32 InType, int32 InNumber);
    
    UFUNCTION(BlueprintCallable)
    bool SetVNumberMode(int32 InMode);
    
    UFUNCTION(BlueprintCallable)
    bool IsVNumberAnimation();
    
    UFUNCTION(BlueprintCallable)
    int32 GetVNumberMode();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetSignPosition();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetCenterPosition();
    
    UFUNCTION(BlueprintCallable)
    bool DeleteVNumberList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetStartFadeOutVNumberAnimation(int32 InIndex, int32 InDataType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BIESetInitializeVNumberAnimation(int32 InIndex, int32 InDataType, int32 InNumber);
    
};

