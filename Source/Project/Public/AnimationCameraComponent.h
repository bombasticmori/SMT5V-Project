#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
#include "Camera/CameraComponent.h"
#include "CameraAnimFinishedDelegateDelegate.h"
#include "ECameraAnimationSpace.h"
#include "AnimationCameraComponent.generated.h"

class UCameraAnimationAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UAnimationCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FovAdjuster;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraAnimationAsset* Animation;
    
public:
    UAnimationCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAnimation(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(UCameraAnimationAsset* InAnimation, UCameraAnimationAsset* InAnimation2nd, FCameraAnimFinishedDelegate OnEndPlay, TEnumAsByte<ECameraAnimationSpace::Type> InPlaySpace, float InPlayRate, float InLerpAlpha, bool bInLoop, float InPlayStartPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentTime() const;
    
};

