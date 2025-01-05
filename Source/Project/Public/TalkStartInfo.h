#pragma once
#include "CoreMinimal.h"
#include "E_TALK_START_TYPE.h"
#include "TalkStartInfo.generated.h"

USTRUCT(BlueprintType)
struct FTalkStartInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_TALK_START_TYPE m_StartType;
    
    PROJECT_API FTalkStartInfo();
};

