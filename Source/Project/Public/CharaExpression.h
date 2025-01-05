#pragma once
#include "CoreMinimal.h"
#include "CharaExpressionEx.h"
#include "CharaExpressionLidParam.h"
#include "CharaExpressionLipParam.h"
#include "CharaExpression.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FCharaExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaExpressionLidParam LidParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaExpressionLipParam LipParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaExpressionEx BrowParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaExpressionEx MouthParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaExpressionEx NoseParam;
    
    PROJECT_API FCharaExpression();
};

