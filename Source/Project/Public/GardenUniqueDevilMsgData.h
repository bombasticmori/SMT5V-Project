#pragma once
#include "CoreMinimal.h"
#include "GardenChatMsgData.h"
#include "GardenMsgData.h"
#include "GardenTributeMsgData.h"
#include "GardenUniqueDevilMsgData.generated.h"

USTRUCT(BlueprintType)
struct FGardenUniqueDevilMsgData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenMsgData m_TrustMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenMsgData m_PowerUpMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenMsgData m_ItemMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTributeMsgData m_TributeMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGardenChatMsgData> m_ChatMsgData;
    
    PROJECT_API FGardenUniqueDevilMsgData();
};

