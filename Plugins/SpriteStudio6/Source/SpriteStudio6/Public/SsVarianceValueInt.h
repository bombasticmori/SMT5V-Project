#pragma once
#include "CoreMinimal.h"
#include "SsVarianceValueRangeType.h"
#include "SsVarianceValueInt.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsVarianceValueInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<SsVarianceValueRangeType::Type> RangeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubValue;
    
    FSsVarianceValueInt();
};

