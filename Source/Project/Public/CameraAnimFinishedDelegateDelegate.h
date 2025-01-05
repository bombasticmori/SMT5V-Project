#pragma once
#include "CoreMinimal.h"
#include "CameraAnimFinishedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCameraAnimFinishedDelegate, float, OverrunSec);

