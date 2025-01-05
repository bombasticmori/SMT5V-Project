#pragma once
#include "CoreMinimal.h"
#include "E_TALK_WANT_AC.generated.h"

UENUM(BlueprintType)
enum class E_TALK_WANT_AC : uint8 {
    WANT_AC_INVALID,
    WANT_AC_YES,
    WANT_AC_OTHER,
    WANT_AC_NOT_HAVE,
    WANT_AC_SHORTCUT,
    WANT_AC_CARD,
};

