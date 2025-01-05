#pragma once
#include "CoreMinimal.h"
#include "GardenChatMsgData.h"
#include "GardenRespawnChatInfo.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FGardenRespawnChatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenChatMsgData UsedChatMsgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UsedRawChatIndex;
    
    FGardenRespawnChatInfo();
};

