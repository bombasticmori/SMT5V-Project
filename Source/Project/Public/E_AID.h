#pragma once
#include "CoreMinimal.h"
#include "E_AID.generated.h"

UENUM(BlueprintType)
enum class E_AID : uint8 {
    E_AID_BATK,
    E_AID_MATK,
    E_AID_ESC,
    E_AID_DEF,
    E_AID_HIT,
};

