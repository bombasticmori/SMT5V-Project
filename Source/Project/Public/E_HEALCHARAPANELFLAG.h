#pragma once
#include "CoreMinimal.h"
#include "E_HEALCHARAPANELFLAG.generated.h"

UENUM(BlueprintType)
enum class E_HEALCHARAPANELFLAG : uint8 {
    CPLAYER,
    CPLAYERDEVIL,
    CPLAYERDEVIIL_EVENT,
    CFREE,
    CEMPTY,
    CBATTLEIN,
    CSTOCK,
    CSUMMONED,
};

