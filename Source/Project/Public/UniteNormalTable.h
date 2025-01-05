#pragma once
#include "CoreMinimal.h"
#include "UniteNormalTable.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FUniteNormalTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 group1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 group2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 groupMake;
    
    FUniteNormalTable();
};

