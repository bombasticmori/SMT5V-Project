#pragma once
#include "CoreMinimal.h"
#include "MissionRewardData.generated.h"

USTRUCT(BlueprintType)
struct FMissionRewardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    PROJECT_API FMissionRewardData();
};

