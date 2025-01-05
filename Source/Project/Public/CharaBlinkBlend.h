#pragma once
#include "CoreMinimal.h"
#include "CharaBlinkBlend.generated.h"

USTRUCT(BlueprintType)
struct FCharaBlinkBlend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutTime;
    
    PROJECT_API FCharaBlinkBlend();
};

