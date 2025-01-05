#pragma once
#include "CoreMinimal.h"
#include "CharaBlinkBlend.h"
#include "CharaBlinkValue.h"
#include "CharaBlinkKey.generated.h"

USTRUCT(BlueprintType)
struct FCharaBlinkKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaBlinkValue Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaBlinkBlend Blend;
    
    PROJECT_API FCharaBlinkKey();
};

