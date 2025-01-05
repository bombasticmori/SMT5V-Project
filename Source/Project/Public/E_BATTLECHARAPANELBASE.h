#pragma once
#include "CoreMinimal.h"
#include "E_BATTLECHARAPANELBASE.generated.h"

UENUM(BlueprintType)
enum class E_BATTLECHARAPANELBASE : uint8 {
    E_BATTLECHARAPANELBASE_NONE,
    BATTLELISTMAX = 4,
    CENEMYLISTMAX = 6,
    STOCKLISTMAX = 32,
    BSUMMONLISTMAX = 16,
    CLISTMAX = 22,
    CPARTYLISTMAX = 44,
};

