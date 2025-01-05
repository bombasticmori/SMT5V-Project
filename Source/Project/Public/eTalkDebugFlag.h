#pragma once
#include "CoreMinimal.h"
#include "eTalkDebugFlag.generated.h"

UENUM(BlueprintType)
enum class eTalkDebugFlag : uint8 {
    None,
    GodParamAll,
    GodParamNone,
    GodSafety100,
    GodLevelOK,
    GodNkmUnconditional100,
    GodAllButUnconditional,
    GodNotUnconditional,
    FriendTalk_SameNkm,
    FriendTalk_SameNkmDead,
    FriendTalk_Item100,
    FriendTalk_Money100,
    FriendTalk_Heal100,
    StockFull,
    Want_Next100,
    Want_Leave100,
    EasyMode,
    MagatsuhiSafetyActive,
    Quiz100,
    QuizListAll,
};

