#pragma once
#include "CoreMinimal.h"
#include "SsEffectElementBase.h"
#include "SsParticleElementRotationTrans.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsParticleElementRotationTrans : public FSsEffectElementBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndLifeTimePer;
    
    FSsParticleElementRotationTrans();
};

