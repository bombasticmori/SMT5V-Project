#pragma once
#include "CoreMinimal.h"
#include "CharaExpressionLidParam.generated.h"

USTRUCT(BlueprintType)
struct FCharaExpressionLidParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LidTableIndex;
    
    PROJECT_API FCharaExpressionLidParam();
};

