#pragma once
#include "CoreMinimal.h"
#include "CharaStampEffect_Particle.h"
#include "CharaStampEffect_Print.h"
#include "CharaStampEffect_Sound.h"
#include "CharaStampEffect.generated.h"

USTRUCT(BlueprintType)
struct FCharaStampEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaStampEffect_Particle Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaStampEffect_Sound Sounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaStampEffect_Print Prints;
    
    PROJECT_API FCharaStampEffect();
};

