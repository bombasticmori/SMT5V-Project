#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EBgmScene.h"
#include "FrameRateManager.generated.h"

class UFrameRateManager;

UCLASS(Blueprintable)
class UFrameRateManager : public UObject {
    GENERATED_BODY()
public:
    UFrameRateManager();

    UFUNCTION(BlueprintCallable)
    void SetDebugMode(bool bActive, float Fps);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMaxFpsOptionChanged(float NewMaxFPS);
    
    UFUNCTION(BlueprintCallable)
    void OnBGMSceneChanged(EBgmScene NewScene);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDebugMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFrameRateLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UFrameRateManager* Get(const UObject* WorldContextObject);
    
};

