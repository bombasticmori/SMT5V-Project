#pragma once
#include "CoreMinimal.h"
#include "E_PARTY_PANEL_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_PARTY_PANEL_TYPE : uint8 {
    E_PARTY_PANEL_TYPE_PLAYER,
    E_PARTY_PANEL_TYPE_BTL_PARTY,
    E_PARTY_PANEL_TYPE_STOCK,
};

