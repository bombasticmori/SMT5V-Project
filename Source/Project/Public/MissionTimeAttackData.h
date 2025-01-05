#pragma once
#include "CoreMinimal.h"
#include "MissionTimeAttackData.generated.h"

USTRUCT(BlueprintType)
struct FMissionTimeAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoonAgeNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnFlag;
    
    PROJECT_API FMissionTimeAttackData();
};

