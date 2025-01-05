#pragma once
#include "CoreMinimal.h"
#include "SsEffectElementBase.h"
#include "SsVarianceValueFloat.h"
#include "SsParticleElementTransSpeed.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsParticleElementTransSpeed : public FSsEffectElementBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsVarianceValueFloat speed;
    
    FSsParticleElementTransSpeed();
};

