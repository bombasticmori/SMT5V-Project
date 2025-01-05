#pragma once
#include "CoreMinimal.h"
#include "MapTopCameraTransitionParam.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FMapTopCameraTransitionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    PROJECT_API FMapTopCameraTransitionParam();
};

