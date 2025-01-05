#pragma once
#include "CoreMinimal.h"
#include "E_EVTBTL_WIN_COND.generated.h"

UENUM(BlueprintType)
enum class E_EVTBTL_WIN_COND : uint8 {
    E_EVTBTL_WIN_COND_NONE,
    E_EVTBTL_WIN_COND_DEFAULT,
    E_EVTBTL_WIN_COND_LEADER,
    E_EVTBTL_WIN_COND_TURN_KILL,
};

