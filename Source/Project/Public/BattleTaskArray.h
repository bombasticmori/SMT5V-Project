#pragma once
#include "CoreMinimal.h"
#include "BattleTaskArray.generated.h"

class ABattleActorBase;

USTRUCT(BlueprintType)
struct FBattleTaskArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABattleActorBase*> Array;
    
    PROJECT_API FBattleTaskArray();
};

