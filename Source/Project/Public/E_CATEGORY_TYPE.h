#pragma once
#include "CoreMinimal.h"
#include "E_CATEGORY_TYPE.generated.h"

UENUM(BlueprintType)
enum class E_CATEGORY_TYPE : uint8 {
    NONE,
    DEVIL_BOSS,
    DEVIL_ALL,
    DEVIL_COMMON,
    DEVIL_NEW,
    DEVIL_OLD,
    DEVIL_CUSTOM,
    DEVIL_ORIGINAL,
    ITEM_COMMON,
    ITEM_KEY,
    ITEM_TRESURE,
    ITEM_UTSUSEMI,
    QUEST_MAIN,
    QUEST_SUB,
    UNKNOWN,
    KAMUI_HADOU,
    KAMUI_HUKUIN,
    KAMUI_KAKUSEI,
    KAMUI_BANSYOU,
    OPTION1,
    OPTION2,
    OPTION3,
    OPTION4,
    OPTION5,
    OPTION6,
    HELP1,
    HELP2,
    HELP3,
    HELP4,
    HELP5,
};

