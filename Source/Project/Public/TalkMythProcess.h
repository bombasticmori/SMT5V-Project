#pragma once
#include "CoreMinimal.h"
#include "EDevilTalkVoice.h"
#include "EMythProcessType.h"
#include "EMythTalkerType.h"
#include "E_CHARA_MOTION_ID.h"
#include "TalkMythProcess.generated.h"

USTRUCT(BlueprintType)
struct FTalkMythProcess {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMythProcessType m_Process;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMythTalkerType m_Talker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDevilTalkVoice m_Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_CHARA_MOTION_ID m_Motion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ProcessValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Camera;
    
    PROJECT_API FTalkMythProcess();
};

