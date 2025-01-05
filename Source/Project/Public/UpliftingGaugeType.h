#pragma once
#include "CoreMinimal.h"
#include "UpliftingGaugeType.generated.h"

USTRUCT(BlueprintType)
struct FUpliftingGaugeType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RandValue;
    
    PROJECT_API FUpliftingGaugeType();
};

