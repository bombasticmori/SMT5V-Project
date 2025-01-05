#pragma once
#include "CoreMinimal.h"
#include "AtomAttenuationDistanceParam.generated.h"

USTRUCT(BlueprintType)
struct FAtomAttenuationDistanceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    CRIWARERUNTIME_API FAtomAttenuationDistanceParam();
};

