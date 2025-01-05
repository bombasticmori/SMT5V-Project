#pragma once
#include "CoreMinimal.h"
#include "E_CHARA_MOTION_ID.h"
#include "CharaMotionPlayerEventSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCharaMotionPlayerEventSignature, E_CHARA_MOTION_ID, MotionID);

