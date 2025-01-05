#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "SsEffectElementBase.h"
#include "SsParticlePointGravity.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsParticlePointGravity : public FSsEffectElementBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Power;
    
    FSsParticlePointGravity();
};

