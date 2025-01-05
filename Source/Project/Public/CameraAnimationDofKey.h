#pragma once
#include "CoreMinimal.h"
#include "CameraAnimationDofKey.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FCameraAnimationDofKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DofDistance;
    
    FCameraAnimationDofKey();
};

