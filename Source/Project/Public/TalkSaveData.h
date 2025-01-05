#pragma once
#include "CoreMinimal.h"
#include "TalkDevilSaveData.h"
#include "TalkToneSaveData.h"
#include "TalkSaveData.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FTalkSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkDevilSaveData> m_DevilData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkToneSaveData> m_ToneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_MythHappenedFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_QuizNotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ScoutSuccessCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PaidMoneyTotal;
    
    FTalkSaveData();
};

