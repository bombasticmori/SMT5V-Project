#pragma once
#include "CoreMinimal.h"
#include "CustomPawnTransformUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCustomPawnTransformUpdatedSignature, bool, Teleport);

