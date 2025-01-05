#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "CoreUObject.h"
#include "SsEffectElementBase.h"
#include "SsParticleElementGravity.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsParticleElementGravity : public FSsEffectElementBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Gravity;
    
    FSsParticleElementGravity();
};

