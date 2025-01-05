#pragma once
#include "CoreMinimal.h"
#include "SpecialFusionResultDevil.h"
#include "SpecialFusionSourceDevil.h"
#include "SpecialFusionResult.generated.h"

USTRUCT(BlueprintType)
struct FSpecialFusionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialFusionSourceDevil> SourceDevilList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialFusionResultDevil ResultDevil;
    
    PROJECT_API FSpecialFusionResult();
};

