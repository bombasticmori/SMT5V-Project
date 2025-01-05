#pragma once
#include "CoreMinimal.h"
#include "E_MISSION_COND_TYPE.h"
#include "MissionCondData.generated.h"

USTRUCT(BlueprintType)
struct FMissionCondData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MISSION_COND_TYPE Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompleteOnFlag;
    
    PROJECT_API FMissionCondData();
};

