#pragma once
#include "CoreMinimal.h"
#include "EDevilVoiceType.h"
#include "E_CHARA_MOTION_ID.h"
#include "E_GARDEN_MSG_USE_TYPE.h"
#include "GardenMsgData.generated.h"

USTRUCT(BlueprintType)
struct FGardenMsgData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_MSG_USE_TYPE m_MsgType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDevilVoiceType m_DevilTalkVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_CHARA_MOTION_ID m_CharaMotion;
    
    PROJECT_API FGardenMsgData();
};

