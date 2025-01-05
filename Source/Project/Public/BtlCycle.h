#pragma once
#include "CoreMinimal.h"
#include "E_BTL_CYCLE_TYPE.h"
#include "BtlCycle.generated.h"

USTRUCT(BlueprintType)
struct FBtlCycle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_WaitDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_CYCLE_TYPE m_CycleType;
    
    PROJECT_API FBtlCycle();
};

