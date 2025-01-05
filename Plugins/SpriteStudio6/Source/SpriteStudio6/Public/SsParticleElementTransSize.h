#pragma once
#include "CoreMinimal.h"
#include "SsEffectElementBase.h"
#include "SsVarianceValueFloat.h"
#include "SsParticleElementTransSize.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsParticleElementTransSize : public FSsEffectElementBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsVarianceValueFloat SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsVarianceValueFloat SizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsVarianceValueFloat ScaleFactor;
    
    FSsParticleElementTransSize();
};

