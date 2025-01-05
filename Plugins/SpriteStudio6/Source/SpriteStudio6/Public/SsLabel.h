#pragma once
#include "CoreMinimal.h"
#include "SsLabel.generated.h"

USTRUCT(BlueprintType)
struct SPRITESTUDIO6_API FSsLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Time;
    
    FSsLabel();
};

