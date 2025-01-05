#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "E_OPTION_CONTENT_FOV_TYPE.h"
#include "CustomPlayerCameraManager.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, NonTransient)
class PROJECT_API ACustomPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableQuartanionBlending: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BlendCurve;
    
public:
    ACustomPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCameraFOV(E_OPTION_CONTENT_FOV_TYPE FOVType);
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdateCameraCache();
    
};

