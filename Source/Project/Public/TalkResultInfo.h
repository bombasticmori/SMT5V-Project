#pragma once
#include "CoreMinimal.h"
#include "E_TALK_END_TYPE.h"
#include "E_TALK_RESULT_TARGET_STATUS.h"
#include "TalkResultInfo.generated.h"

USTRUCT(BlueprintType)
struct FTalkResultInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_END_TYPE m_TalkEndType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_RESULT_TARGET_STATUS m_TargetStatus;
    
    PROJECT_API FTalkResultInfo();
};

