#pragma once
#include "CoreMinimal.h"
#include "SsUserDataValue.h"
#include "SsUserDataSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSsUserDataSignature, FName, PartName, int32, PartIndex, int32, KeyFrame, FSsUserDataValue, UserData);

