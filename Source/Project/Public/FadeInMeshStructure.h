#pragma once
#include "CoreMinimal.h"
#include "MaskedMeshStructure.h"
#include "FadeInMeshStructure.generated.h"

USTRUCT(BlueprintType)
struct FFadeInMeshStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaskedMeshStructure MaskedMeshStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingFadeTime;
    
    PROJECT_API FFadeInMeshStructure();
};

