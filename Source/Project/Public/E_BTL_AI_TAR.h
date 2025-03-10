#pragma once
#include "CoreMinimal.h"
#include "E_BTL_AI_TAR.generated.h"

UENUM(BlueprintType)
enum class E_BTL_AI_TAR : uint8 {
    E_BTL_AI_TAR_NON,
    E_BTL_AI_TAR_AI,
    E_BTL_AI_TAR_RND,
    E_BTL_AI_TAR_HPMIN,
    E_BTL_AI_TAR_HPMAX,
    E_BTL_AI_TAR_BAD,
    E_BTL_AI_TAR_NOTBAD,
    E_BTL_AI_TAR_ID,
    E_BTL_AI_TAR_NOTID,
    E_BTL_AI_TAR_MINE,
    E_BTL_AI_TAR_MYAI,
    E_BTL_AI_TAR_HPRATE,
    E_BTL_AI_TAR_PARTY_INDEX,
    E_BTL_AI_TAR_NOT_PARTY_INDEX,
    E_BTL_AI_TAR_AISHOU_PLUS,
    E_BTL_AI_TAR_AISHOU_NOTPLUS,
    E_BTL_AI_TAR_AISHOU_FLAT,
    E_BTL_AI_TAR_AISHOU_NOTFLAT,
    E_BTL_AI_TAR_AISHOU_MINUS,
    E_BTL_AI_TAR_AISHOU_NOTMINUS,
    E_BTL_AI_TAR_REC_COUNTER,
    E_BTL_AI_TAR_REC_CRITICAL,
    E_BTL_AI_TAR_NOT_CRITICAL,
    E_BTL_AI_TAR_HOJO_MIN,
    E_BTL_AI_TAR_HOJO_MAX UMETA(Hidden),
    E_BTL_AI_TAR_NOTBAD2,
    E_BTL_AI_TAR_REFLEX,
    E_BTL_AI_TAR_ABSORB,
    E_BTL_AI_TAR_BLOCK,
    E_BTL_AI_TAR_NOTREFLEX,
    E_BTL_AI_TAR_NOTABSORB,
    E_BTL_AI_TAR_NOTBLOCK,
    E_BTL_AI_TAR_GUARD,
    E_BTL_AI_TAR_NOTGUARD,
    E_BTL_AI_TAR_TETORA,
    E_BTL_AI_TAR_NOTTETORA,
    E_BTL_AI_TAR_MAKARA,
    E_BTL_AI_TAR_NOTMAKARA,
    E_BTL_AI_TAR_AUTOBATTLE,
    E_BTL_AI_TAR_HOJO_AI,
    E_BTL_AI_TAR_SMART,
    E_BTL_AI_TAR_HP_RATIO_MIN,
    E_BTL_AI_TAR_HP_RATIO_MAX UMETA(Hidden),
    E_BTL_AI_TAR_EN_ANALYZE,
    E_BTL_AI_TAR_WEAK,
    E_BTL_AI_TAR_VALID_SKILL,
    E_BTL_AI_TAR_RENZOKU_SKILL,
    E_BTL_AI_TAR_PROVOKE,
    E_BTL_AI_TAR_EN_ANALYZE2,
};

