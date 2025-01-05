#pragma once
#include "CoreMinimal.h"
#include "FoliageHitEffectData.generated.h"

class UParticleSystem;
class USoundAtomCue;

USTRUCT(BlueprintType)
struct FFoliageHitEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* SE;
    
    PROJECT_API FFoliageHitEffectData();
};

