#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "EActivityTaskID.h"
#include "ActivityDataParam.generated.h"

USTRUCT(BlueprintType)
struct FActivityDataParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mapEventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityTaskID startTask;
    
    PROJECT_API FActivityDataParam();
};

