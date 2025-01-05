#pragma once
#include "CoreMinimal.h"
#include "E_AActionWindowType.generated.h"

UENUM(BlueprintType)
enum class E_AActionWindowType : uint8 {
    E_AActionWindow_None,
    E_AActionWindow_Search,
    E_AActionWindow_MapIn,
    E_AActionWindow_Talk,
    E_AActionWindow_Open,
};

