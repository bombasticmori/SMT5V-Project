#pragma once
#include "CoreMinimal.h"
#include "EBgmScene.h"
#include "OnBGMSceneChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBGMSceneChangedSignature, EBgmScene, NewScene);

