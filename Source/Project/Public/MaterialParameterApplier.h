#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MaterialParameterApplier_ScalarParam.h"
#include "MaterialParameterApplier_VectorParam.h"
#include "MaterialParameterApplier.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UMaterialParameterApplier : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParameterApplier_ScalarParam> ScalarParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialParameterApplier_VectorParam> VectorParams;
    
    UMaterialParameterApplier();

};

