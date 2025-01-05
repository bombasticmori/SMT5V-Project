#pragma once
#include "CoreMinimal.h"
#include "E_KeyboardLanguage.generated.h"

UENUM(BlueprintType)
enum class E_KeyboardLanguage : uint8 {
    E_Other,
    E_Japanese,
    E_English,
    E_French,
    E_German,
    E_Spanish,
    E_Italian,
    E_Portuguese,
    E_Russian,
    E_ChineseT,
    E_ChineseS,
    E_Korean,
};

