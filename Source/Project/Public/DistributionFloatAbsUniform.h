#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DistributionFloatUniform -FallbackName=DistributionFloatUniform
#include "Distributions/DistributionFloatUniform.h"
#include "DistributionFloatAbsUniform.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PROJECT_API UDistributionFloatAbsUniform : public UDistributionFloatUniform {
    GENERATED_BODY()
public:
    UDistributionFloatAbsUniform();

    virtual bool IsPostLoadThreadSafe() const override;
};

