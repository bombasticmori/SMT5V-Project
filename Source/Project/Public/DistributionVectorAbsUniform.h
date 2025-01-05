#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DistributionVectorUniform -FallbackName=DistributionVectorUniform
#include "Distributions/DistributionVectorUniform.h"
#include "DistributionVectorAbsUniform.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class PROJECT_API UDistributionVectorAbsUniform : public UDistributionVectorUniform {
    GENERATED_BODY()
public:
    UDistributionVectorAbsUniform();

    virtual bool IsPostLoadThreadSafe() const override;
};
