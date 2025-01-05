#pragma once
#include "CoreMinimal.h"
#include "EDevilVoiceType.h"
#include "E_GARDEN_MSG_USE_TYPE.h"
#include "GardenTributeMsgData.generated.h"

USTRUCT(BlueprintType)
struct FGardenTributeMsgData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_MSG_USE_TYPE m_MsgTypeNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_MSG_USE_TYPE m_MsgTypeRare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDevilVoiceType m_DevilTalkVoice;
    
    PROJECT_API FGardenTributeMsgData();
};

