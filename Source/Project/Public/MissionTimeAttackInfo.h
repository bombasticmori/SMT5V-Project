#pragma once
#include "CoreMinimal.h"
#include "E_MISSION_TIME_ATTACK_INFO_TYPE.h"
#include "MissionTimeAttackInfo.generated.h"

USTRUCT(BlueprintType)
struct FMissionTimeAttackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MISSION_TIME_ATTACK_INFO_TYPE InfoType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value2;
    
    PROJECT_API FMissionTimeAttackInfo();
};

