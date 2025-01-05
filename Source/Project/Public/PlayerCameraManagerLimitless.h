#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
#include "PlayerCameraManagerLimitless.generated.h"

UCLASS(Blueprintable, NonTransient)
class PROJECT_API APlayerCameraManagerLimitless : public APlayerCameraManager {
    GENERATED_BODY()
public:
    APlayerCameraManagerLimitless(const FObjectInitializer& ObjectInitializer);

};

