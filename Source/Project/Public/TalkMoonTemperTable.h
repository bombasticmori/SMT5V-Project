#pragma once
#include "CoreMinimal.h"
#include "EDevilTalkVoice.h"
#include "E_CHARA_MOTION_ID.h"
#include "E_TALK_MOON_TEMPER_DATA.h"
#include "TalkMoonTemperTable.generated.h"

USTRUCT(BlueprintType)
struct FTalkMoonTemperTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_MOON_TEMPER_DATA m_MoonTemper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDevilTalkVoice m_NGVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_CHARA_MOTION_ID m_NGMotion;
    
    PROJECT_API FTalkMoonTemperTable();
};

