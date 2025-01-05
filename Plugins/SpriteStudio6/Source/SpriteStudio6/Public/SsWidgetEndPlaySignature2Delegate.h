#pragma once
#include "CoreMinimal.h"
#include "SsWidgetEndPlaySignature2Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSsWidgetEndPlaySignature2, FName, AnimPackName, FName, AnimationName, int32, AnimPackIndex, int32, AnimationIndex);

