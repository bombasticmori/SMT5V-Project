#pragma once
#include "CoreMinimal.h"
#include "BossRushOneData.generated.h"

USTRUCT(BlueprintType)
struct FBossRushOneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_EventEncountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_ChallengeModeClearCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_OriginalModeFirstClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_OriginalModeFirstClearByCreation;
    
    PROJECT_API FBossRushOneData();
};

