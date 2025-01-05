#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ExpressionInput -FallbackName=ExpressionInput
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpression -FallbackName=MaterialExpression
#include "MaterialExpressionManaMovieFormatSwitch.generated.h"

UCLASS(Blueprintable, CollapseCategories, Deprecated, MinimalAPI, NotPlaceable)
class UDEPRECATED_MaterialExpressionManaMovieFormatSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Inputs[5];
    
    UDEPRECATED_MaterialExpressionManaMovieFormatSwitch();

};

