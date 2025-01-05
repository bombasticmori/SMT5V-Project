#pragma once
#include "CoreMinimal.h"
#include "E_TALK_QUESTION_PART.generated.h"

UENUM(BlueprintType)
enum class E_TALK_QUESTION_PART : uint8 {
    QUESTION_PART_NONE,
    QUESTION_PART_A,
    QUESTION_PART_B,
    QUESTION_PART_A_LOW,
    QUESTION_PART_A_HIGH,
};

