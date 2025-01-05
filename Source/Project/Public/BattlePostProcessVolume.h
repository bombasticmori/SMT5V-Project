#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessVolume -FallbackName=PostProcessVolume
#include "Engine/PostProcessVolume.h"
#include "BattlePostProcessVolume.generated.h"

class IBlendableInterface;
class UBlendableInterface;

UCLASS(Blueprintable)
class PROJECT_API ABattlePostProcessVolume : public APostProcessVolume {
    GENERATED_BODY()
public:
    ABattlePostProcessVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExposureCompensation(bool IsOverride, float ExposureCompensation);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlendable(TScriptInterface<IBlendableInterface> InBlendableObject);
    
    UFUNCTION(BlueprintCallable)
    void GetExposureCompensation(bool& OutIsOverride, float& OutExposureCompensation);
    
    UFUNCTION(BlueprintCallable)
    static float GetCurrentActiveExposureCompensation(TArray<APostProcessVolume*> PostProcessVolumes, FVector ViewLocation);
    
};

