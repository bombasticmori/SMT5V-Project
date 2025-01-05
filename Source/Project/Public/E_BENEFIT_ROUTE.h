#pragma once
#include "CoreMinimal.h"
#include "E_BENEFIT_ROUTE.generated.h"

UENUM(BlueprintType)
enum class E_BENEFIT_ROUTE : uint8 {
    E_BENEFIT_ROUTE_PLAY,
    E_BENEFIT_ROUTE_LAW,
    E_BENEFIT_ROUTE_CHAOS,
    E_BENEFIT_ROUTE_NEWTRAL,
    E_BENEFIT_ROUTE_NEWTRAL_EX,
    E_BENEFIT_ROUTE_ALL,
};

