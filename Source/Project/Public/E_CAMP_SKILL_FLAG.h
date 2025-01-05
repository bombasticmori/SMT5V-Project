#pragma once
#include "CoreMinimal.h"
#include "E_CAMP_SKILL_FLAG.generated.h"

UENUM(BlueprintType)
enum class E_CAMP_SKILL_FLAG : uint8 {
    E_CAMP_SKILL_FLAG_NONE,
    E_CAMP_SKILL_FLAG_SEL_SKILL,
    E_CAMP_SKILL_FLAG_SEL_PARTY,
    E_CAMP_SKILL_FLAG_SET_SKILL,
    E_CMAP_SKILL_FLAG_CHARA_ONE,
    E_CAMP_SKILL_FLAG_PARTY_ALL,
};

