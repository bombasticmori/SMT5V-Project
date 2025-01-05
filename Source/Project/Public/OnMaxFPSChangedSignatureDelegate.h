#pragma once
#include "CoreMinimal.h"
#include "OnMaxFPSChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxFPSChangedSignature, float, NewMaxFPS);

