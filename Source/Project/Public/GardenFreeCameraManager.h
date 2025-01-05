#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "E_GARDEN_FREE_CAMERA_STATE.h"
#include "Templates/SubclassOf.h"
#include "GardenFreeCameraManager.generated.h"

class AGardenFreeCameraController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UGardenFreeCameraManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ShowFreeCamUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGardenFreeCameraController* GardenFreeCameraControllerRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGardenFreeCameraController> GardenFreeCameraControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_FREE_CAMERA_STATE m_FreeCameraState;
    
public:
    UGardenFreeCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleFreeCameraUI();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestStartFreeCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestEndFreeCamera();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(const FTransform& SafeSpawnTransform);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool EnableGardenFreeCamera(const FVector Location, const FRotator Rotation, const float CameraTurnSpeed, const float MovementSpeed, const float MovementAcceleration, const float CollisionRadius, const FName CollisionProfile, const float MinUpViewAngle, const float MaxUpViewAngle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableFreeCamera();
    
protected:
    UFUNCTION(BlueprintCallable)
    bool DisableGardenFreeCamera();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableFreeCamera();
    
};

