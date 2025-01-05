#pragma once
#include "CoreMinimal.h"
#include "OnEventDispatherEndViewDelegate.generated.h"

class UUISystemInfoBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEventDispatherEndView, UUISystemInfoBase*, pSystemInfo);

