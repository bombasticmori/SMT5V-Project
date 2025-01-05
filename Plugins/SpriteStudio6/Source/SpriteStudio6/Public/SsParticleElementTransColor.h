#pragma once
#include "CoreMinimal.h"
#include "SsEffectElementBase.h"
#include "SsVarianceValueColor.h"
#include "SsParticleElementTransColor.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsParticleElementTransColor : public FSsEffectElementBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsVarianceValueColor Color;
    
    FSsParticleElementTransColor();
};

