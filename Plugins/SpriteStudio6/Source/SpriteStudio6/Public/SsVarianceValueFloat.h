#pragma once
#include "CoreMinimal.h"
#include "SsVarianceValueRangeType.h"
#include "SsVarianceValueFloat.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsVarianceValueFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<SsVarianceValueRangeType::Type> RangeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubValue;
    
    FSsVarianceValueFloat();
};

