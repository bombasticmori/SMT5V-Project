#pragma once
#include "CoreMinimal.h"
#include "SsUserDataValue.h"
#include "SsWidgetUserDataSignature2Delegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSsWidgetUserDataSignature2, FName, PartName, int32, PartIndex, int32, KeyFrame, FSsUserDataValue, UserData);

