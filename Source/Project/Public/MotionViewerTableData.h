#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MotionViewerTableData.generated.h"

class ACustomPawn;

USTRUCT(BlueprintType)
struct FMotionViewerTableData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dispName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACustomPawn> CustomPawn;
    
    PROJECT_API FMotionViewerTableData();
};

