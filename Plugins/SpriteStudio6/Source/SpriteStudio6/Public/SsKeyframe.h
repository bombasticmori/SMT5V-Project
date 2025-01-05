#pragma once
#include "CoreMinimal.h"
#include "SsCurve.h"
#include "SsInterpolationType.h"
#include "SsValue.h"
#include "SsKeyframe.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<SsInterpolationType::Type> IpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsCurve Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSsValue Value;
    
    FSsKeyframe();
};

