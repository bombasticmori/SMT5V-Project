#pragma once
#include "CoreMinimal.h"
#include "TalkToneSaveData.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FTalkToneSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LastTopicID;
    
    FTalkToneSaveData();
};

