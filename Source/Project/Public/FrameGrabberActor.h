#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FrameGrabberActor.generated.h"

class UMaterialInstanceDynamic;
class UTexture2D;

UCLASS(Blueprintable)
class PROJECT_API AFrameGrabberActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MaterialInstanceDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CaptureFrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* CaptureFrameTexture;
    
    AFrameGrabberActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopFrameGrab();
    
    UFUNCTION(BlueprintCallable)
    bool StartFrameGrab();
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialInstanceDynamic(UMaterialInstanceDynamic* MI);
    
    UFUNCTION(BlueprintCallable)
    bool isCaptureFinish();
    
};

