#pragma once
#include "CoreMinimal.h"
#include "DebugMenuNameChangeObj.generated.h"

class UDebugMenuNameChangeBaseObj;

USTRUCT(BlueprintType)
struct FDebugMenuNameChangeObj {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDebugMenuNameChangeBaseObj> obj;
    
    PROJECT_API FDebugMenuNameChangeObj();
};

