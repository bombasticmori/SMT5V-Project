#pragma once
#include "CoreMinimal.h"
#include "UniteCombineHead.generated.h"

USTRUCT(BlueprintType)
struct FUniteCombineHead {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TableMax;
    
    PROJECT_API FUniteCombineHead();
};

