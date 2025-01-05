#pragma once
#include "CoreMinimal.h"
#include "BenefitData.h"
#include "BenefitDataReadCompleteDispatherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBenefitDataReadCompleteDispather, FBenefitData, Data);

