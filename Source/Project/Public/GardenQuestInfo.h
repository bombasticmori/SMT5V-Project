#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GardenQuestInfo.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FGardenQuestInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> QuestSublevelSoftObj;
    
    PROJECT_API FGardenQuestInfo();
};

