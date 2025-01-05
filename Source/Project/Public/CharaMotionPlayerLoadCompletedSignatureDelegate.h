#pragma once
#include "CoreMinimal.h"
#include "CharaMotionPlayerLoadCompletedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharaMotionPlayerLoadCompletedSignature, bool, Success);

