#pragma once
#include "CoreMinimal.h"
#include "CharaExpressionLipParam.generated.h"

USTRUCT(BlueprintType)
struct FCharaExpressionLipParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LipTableIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LipScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpressionScale;
    
    PROJECT_API FCharaExpressionLipParam();
};

