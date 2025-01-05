#pragma once
#include "CoreMinimal.h"
#include "E_TALK_END_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_TALK_END_TYPE : uint8 {
    E_TALK_END_NONE,
    E_TALK_END_USE_PRESS,
    E_TALK_END_NO_PRESS,
    E_TALK_END_ENEMY_TURN,
    E_TALK_END_ENEMY_LEAVE,
    E_TALK_END_FRIEND_ESCAPE,
};

