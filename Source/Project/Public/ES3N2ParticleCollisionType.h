#pragma once
#include "CoreMinimal.h"
#include "ES3N2ParticleCollisionType.generated.h"

UENUM(BlueprintType)
enum class ES3N2ParticleCollisionType : uint8 {
    HitAll,
    HitCharacter,
    HitGeometry,
};

