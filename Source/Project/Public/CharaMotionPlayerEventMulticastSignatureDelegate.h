#pragma once
#include "CoreMinimal.h"
#include "E_CHARA_MOTION_ID.h"
#include "CharaMotionPlayerEventMulticastSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCharaMotionPlayerEventMulticastSignature, E_CHARA_MOTION_ID, MotionID);

