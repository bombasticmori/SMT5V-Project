#pragma once
#include "CoreMinimal.h"
#include "AsyncCompleteCaptureByFrameGrabberDelegate.generated.h"

class UTexture2D;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncCompleteCaptureByFrameGrabber, UTexture2D*, CaptureTexture);

