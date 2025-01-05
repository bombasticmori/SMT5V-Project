#pragma once
#include "CoreMinimal.h"
#include "SsEndPlaySignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSsEndPlaySignature, FName, AnimPackName, FName, AnimationName, int32, AnimPackIndex, int32, AnimationIndex);

