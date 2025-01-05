#pragma once
#include "CoreMinimal.h"
#include "UniteDlcDevilTable.generated.h"

USTRUCT(BlueprintType)
struct FUniteDlcDevilTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DevilID;
    
    PROJECT_API FUniteDlcDevilTable();
};

