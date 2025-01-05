#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BenefitDataTable.generated.h"

class UMMIAsset;

UCLASS(Blueprintable)
class PROJECT_API UBenefitDataTable : public UObject {
    GENERATED_BODY()
public:
    UBenefitDataTable();

    UFUNCTION(BlueprintCallable)
    bool MakeUp(UMMIAsset* pAsset);
    
};

