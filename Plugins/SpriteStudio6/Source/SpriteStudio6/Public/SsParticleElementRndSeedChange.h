#pragma once
#include "CoreMinimal.h"
#include "SsEffectElementBase.h"
#include "SsParticleElementRndSeedChange.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsParticleElementRndSeedChange : public FSsEffectElementBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    FSsParticleElementRndSeedChange();
};

