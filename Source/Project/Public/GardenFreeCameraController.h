#pragma once
#include "CoreMinimal.h"
#include "CustomPlayerController.h"
#include "GardenFreeCameraController.generated.h"

class APlayerController;
class ASpectatorPawn;
class UPlayer;

UCLASS(Blueprintable)
class PROJECT_API AGardenFreeCameraController : public ACustomPlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* OriginalControllerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayer* OriginalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASpectatorPawn* GardenFreeCameraPawnRef;
    
    AGardenFreeCameraController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFreeCameraMovementSpeed(float MovementSpeed);
    
    UFUNCTION(BlueprintCallable)
    void MoveUp(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveRight(float Val);
    
    UFUNCTION(BlueprintCallable)
    void MoveForward(float Val);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitFreeCamera();
    
    UFUNCTION(BlueprintCallable)
    bool DestroyFreeCameraActors();
    
};

