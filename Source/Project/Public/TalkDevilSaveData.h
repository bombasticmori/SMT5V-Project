#pragma once
#include "CoreMinimal.h"
#include "E_TALK_WANT_KIND.h"
#include "TalkDevilSaveData.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FTalkDevilSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_WANT_KIND m_TalkWantWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_TalkLevelWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_TalkStockWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_TalkApologyWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TalkWantWaitValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TalkQuizCount;
    
    FTalkDevilSaveData();
};

