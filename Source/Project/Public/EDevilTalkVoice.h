#pragma once
#include "CoreMinimal.h"
#include "EDevilTalkVoice.generated.h"

UENUM(BlueprintType)
enum class EDevilTalkVoice : uint8 {
    None,
    Positive = 51,
    Negative,
    Intimidation,
    Thought,
    Bearish,
    Call,
    Together,
    Disappointment,
    Yorosiku = 61,
};

