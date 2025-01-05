#pragma once
#include "CoreMinimal.h"
#include "E_TALK_JUDGE_PARAM.generated.h"

UENUM(BlueprintType)
enum class E_TALK_JUDGE_PARAM : uint8 {
    JUDGE_NONE,
    JUDGE_STR = 201,
    JUDGE_VIT,
    JUDGE_MGI,
    JUDGE_AGI,
    JUDGE_LUC,
};

