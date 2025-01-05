#pragma once
#include "CoreMinimal.h"
#include "CharaExpressionEx.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FCharaExpressionEx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpacityL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpacityR;
    
    PROJECT_API FCharaExpressionEx();
};

