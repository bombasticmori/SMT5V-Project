#pragma once
#include "CoreMinimal.h"
#include "E_DATALOG_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_DATALOG_TYPE : uint8 {
    E_DATALOG_TYPE_PERSON,
    E_DATALOG_TYPE_MAT,
    E_DATALOG_TYPE_PLACE,
    E_DATALOG_TYPE_DEVIL,
    E_DATALOG_TYPE_ETC,
    E_DATALOG_TYPE_NONE,
};

