#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "E_MAP_TOP_CAMERA_STEP.h"
#include "E_MAP_TOP_CAMERA_TRANSITION_STEP.h"
#include "MapTopCameraTransitionParam.h"
#include "MapTopCamera.generated.h"

class UCameraComponent;
class UCapsuleComponent;

UCLASS(Blueprintable)
class PROJECT_API AMapTopCamera : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MAP_TOP_CAMERA_STEP Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MAP_TOP_CAMERA_TRANSITION_STEP TransitionStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapFOVY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopFOVY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MapCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MapCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentOffsetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentCameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator CurrentCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetOffsetHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator TargetCameraRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TransitionStartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapTopCameraTransitionParam ToTop_NearMap_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapTopCameraTransitionParam ToTop_NearTop_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapTopCameraTransitionParam ToMap_NearMap_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapTopCameraTransitionParam ToMap_NearTop_Param;
    
    AMapTopCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Update_TransitionToTop(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Update_TransitionToMap(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StartTransitionToTop();
    
    UFUNCTION(BlueprintCallable)
    void StartTransitionToMap(const FVector& inTransitionStartLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetMapCamera(const FVector& inMapCameraLocation, const FRotator& inMapCameraRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartTop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishTop();
    
    UFUNCTION(BlueprintCallable)
    void Init(const FVector& inMapCameraLocation, const FRotator& inMapCameraRotation, float inTargetOffsetHeight, const FRotator& inTargetCameraRotation, float inMapFOVY, float inTopFOVY);
    
};

