#pragma once
#include "CoreMinimal.h"
#include "MissionSaveOneData.h"
#include "MissionSaveData.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FMissionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionSaveOneData> MissionList;
    
    FMissionSaveData();
};

