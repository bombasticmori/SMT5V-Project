#pragma once
#include "CoreMinimal.h"
#include "UniteSeireiTable.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FUniteSeireiTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 group1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 soul;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rank;
    
    FUniteSeireiTable();
};

