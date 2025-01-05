#pragma once
#include "CoreMinimal.h"
#include "DebugCameraInputSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDebugCameraInputSignature, int32, PressedNumber);

