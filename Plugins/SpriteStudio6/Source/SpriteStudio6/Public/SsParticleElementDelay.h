#pragma once
#include "CoreMinimal.h"
#include "SsEffectElementBase.h"
#include "SsParticleElementDelay.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsParticleElementDelay : public FSsEffectElementBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayTime;
    
    FSsParticleElementDelay();
};

