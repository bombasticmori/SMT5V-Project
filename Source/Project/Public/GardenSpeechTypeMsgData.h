#pragma once
#include "CoreMinimal.h"
#include "E_TALK_TONE_TYPE.h"
#include "GardenChatMsgData.h"
#include "GardenMsgData.h"
#include "GardenTributeMsgData.h"
#include "GardenSpeechTypeMsgData.generated.h"

USTRUCT(BlueprintType)
struct FGardenSpeechTypeMsgData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_TONE_TYPE m_SpeechType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenMsgData m_TrustMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGardenMsgData> m_PowerUpMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGardenMsgData> m_ItemMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTributeMsgData m_TributeMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGardenChatMsgData> m_ChatMsgData;
    
    PROJECT_API FGardenSpeechTypeMsgData();
};

