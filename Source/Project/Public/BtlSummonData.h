#pragma once
#include "CoreMinimal.h"
#include "BtlSummonData.generated.h"

USTRUCT(BlueprintType)
struct FBtlSummonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DevilID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PartyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TaskIndex;
    
    PROJECT_API FBtlSummonData();
};

