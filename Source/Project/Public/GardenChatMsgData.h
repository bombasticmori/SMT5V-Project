#pragma once
#include "CoreMinimal.h"
#include "EDevilVoiceType.h"
#include "E_GARDEN_CHAT_MSG_TYPE.h"
#include "E_GARDEN_MSG_USE_TYPE.h"
#include "GardenChatMsgData.generated.h"

USTRUCT(BlueprintType)
struct FGardenChatMsgData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_MSG_USE_TYPE m_MsgType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDevilVoiceType m_DevilTalkVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_CHAT_MSG_TYPE m_UseConditionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_UseCondition;
    
    PROJECT_API FGardenChatMsgData();
};

