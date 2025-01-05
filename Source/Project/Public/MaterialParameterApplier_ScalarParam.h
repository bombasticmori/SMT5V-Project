#pragma once
#include "CoreMinimal.h"
#include "MaterialParameterApplier_ScalarParam.generated.h"

USTRUCT(BlueprintType)
struct FMaterialParameterApplier_ScalarParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    PROJECT_API FMaterialParameterApplier_ScalarParam();
};

