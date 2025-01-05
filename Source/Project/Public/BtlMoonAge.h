#pragma once
#include "CoreMinimal.h"
#include "BtlMoonAge.generated.h"

USTRUCT(BlueprintType)
struct FBtlMoonAge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TurnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_AddOK;
    
    PROJECT_API FBtlMoonAge();
};

