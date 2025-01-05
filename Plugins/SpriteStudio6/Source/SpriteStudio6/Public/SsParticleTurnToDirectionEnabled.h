#pragma once
#include "CoreMinimal.h"
#include "SsEffectElementBase.h"
#include "SsParticleTurnToDirectionEnabled.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsParticleTurnToDirectionEnabled : public FSsEffectElementBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    FSsParticleTurnToDirectionEnabled();
};

