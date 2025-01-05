#pragma once
#include "CoreMinimal.h"
#include "SsU8Color.h"
#include "SsVarianceValueRangeType.h"
#include "SsVarianceValueColor.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsVarianceValueColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<SsVarianceValueRangeType::Type> RangeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsU8Color Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsU8Color SubValue;
    
    FSsVarianceValueColor();
};

