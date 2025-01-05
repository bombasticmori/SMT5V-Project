#pragma once
#include "CoreMinimal.h"
#include "SsTriangle.generated.h"

USTRUCT(BlueprintType)
struct FSsTriangle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdxPo1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdxPo2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdxPo3;
    
    SPRITESTUDIO6_API FSsTriangle();
};

