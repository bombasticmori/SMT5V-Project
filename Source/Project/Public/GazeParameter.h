#pragma once
#include "CoreMinimal.h"
#include "GazeParameter.generated.h"

USTRUCT(BlueprintType)
struct FGazeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TypeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleLimit;
    
    PROJECT_API FGazeParameter();
};

