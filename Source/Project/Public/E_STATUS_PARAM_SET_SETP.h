#pragma once
#include "CoreMinimal.h"
#include "E_STATUS_PARAM_SET_SETP.generated.h"

UENUM(BlueprintType)
enum class E_STATUS_PARAM_SET_SETP : uint8 {
    E_STATUS_PARAM_SET_SETP_SET,
    E_STATUS_PARAM_SET_SETP_CHECK_CANCEL,
    E_STATUS_PARAM_SET_SETP_CHECK_ACT,
};

