#pragma once
#include "CoreMinimal.h"
#include "UniteSeireiBornTable.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FUniteSeireiBornTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 group1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 group2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 soul;
    
    FUniteSeireiBornTable();
};

