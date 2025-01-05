#pragma once
#include "CoreMinimal.h"
#include "MissionCondData.h"
#include "MissionUpdateInfo.generated.h"

USTRUCT(BlueprintType)
struct FMissionUpdateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CondIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionCondData CondData;
    
    PROJECT_API FMissionUpdateInfo();
};

