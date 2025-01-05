#pragma once
#include "CoreMinimal.h"
#include "BattleIntegerArray.generated.h"

USTRUCT(BlueprintType)
struct FBattleIntegerArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Array;
    
    PROJECT_API FBattleIntegerArray();
};

