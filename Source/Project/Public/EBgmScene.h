#pragma once
#include "CoreMinimal.h"
#include "EBgmScene.generated.h"

UENUM(BlueprintType)
enum class EBgmScene : uint8 {
    Map,
    Battle,
    Event,
    EventSimple,
    EventTalk,
    EventMission,
    CampMenu,
    CampMenuUnite,
    AutoMap,
    Title,
    SoundTest,
    Annin,
    Ryuketsu,
    ShopGustave,
    MapMagatsuka,
    Loading,
    DevilTalk,
    Result,
    PillarTeleport,
    CampMenuUnite_Silence,
    Garden,
    BootMenu,
};

