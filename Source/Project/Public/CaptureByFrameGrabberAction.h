#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompleteCaptureByFrameGrabberDelegate.h"
#include "CaptureByFrameGrabberAction.generated.h"

class UCaptureByFrameGrabberAction;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class UCaptureByFrameGrabberAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompleteCaptureByFrameGrabber Completed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* CaptureTexture;
    
public:
    UCaptureByFrameGrabberAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCaptureByFrameGrabberAction* CaptureByFrameGrabber(UObject* WorldContextObject, UTexture2D* ReuseCaptureTexture);
    
};

