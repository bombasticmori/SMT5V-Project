#pragma once
#include "CoreMinimal.h"
#include "CameraAnimationFovKey.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FCameraAnimationFovKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV;
    
    FCameraAnimationFovKey();
};

