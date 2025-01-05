#pragma once
#include "CoreMinimal.h"
#include "FoliageMoveEffectData.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FFoliageMoveEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* HitSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTallTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TreeRadius;
    
    PROJECT_API FFoliageMoveEffectData();
};

