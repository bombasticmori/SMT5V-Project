#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CharaMovementComponent.h"
#include "PlayerMoveToTargetSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "PlayerMovementComponent.generated.h"

class AActor;
class UCurveFloat;
class UFoliageHitEffect;
class UFoliageInstancedStaticMeshComponent;
class UParticleSystemComponent;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UPlayerMovementComponent : public UCharaMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashVelocityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingVelocityMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityMaxFallen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed_OnSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TransientRotationSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Deceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepupAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepupHeightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepdownHeightThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlopeRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator MomentRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector IdealVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ForwardMovementRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator SlopeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WallSlipCnt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CV_InputMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWalkBrakeStandby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRunBrakeStandby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRunTurnStandby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDashTurnStandby;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDashSharpTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowWalkBrakeMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bExceptionBrakeTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDashing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisableSliding_Transient_OnWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingStartSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingStartCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingStartDashSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingStartDashCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingFinishSlopeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlidingFinishCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAutoRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableJumpTransient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnableJumpForAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float gravityJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float velocityJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float OnAirTimeForForceTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEdgeGrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EdgeGripBodyHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EdgeGripJumpVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFoliageHitEffect> FoliageHitEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFoliageInstancedStaticMeshComponent*> FoliageCompList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UStaticMesh>> FoliageCompMeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoPilotWalkBrakeMargine;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerMoveToTargetSignature OnArrivedMoveToTarget;
    
public:
    UPlayerMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateFoliageActorList();
    
    UFUNCTION(BlueprintCallable)
    void TurnOnEdgeGripArrivalTrigger();
    
    UFUNCTION(BlueprintCallable)
    void SetParamJump(float NewGravityJump, float NewVelocityJump);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyFreeForce(const FVector& Force);
    
    UFUNCTION(BlueprintCallable)
    void RotateToTarget(AActor* TargetActor, FPlayerMoveToTargetSignature OnArrived, float TimeToGiveUp);
    
    UFUNCTION(BlueprintCallable)
    void ResetMovementVelocity();
    
    UFUNCTION(BlueprintCallable)
    void ResetMovementState(bool bResetLanding, bool bResetLandingValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetMovementInputVector();
    
    UFUNCTION(BlueprintCallable)
    void ResetBrakeTurnStandby();
    
    UFUNCTION(BlueprintCallable)
    TArray<UParticleSystemComponent*> PlayAttackVsFoliageEffect(const FBox& InAttackAABB);
    
    UFUNCTION(BlueprintCallable)
    void MoveToTargetLocation(FVector TargetLocation, float MoveSpeed, FPlayerMoveToTargetSignature OnArrived, float Distance, float TimeToGiveUp);
    
    UFUNCTION(BlueprintCallable)
    void MoveToTargetDirection(FVector TargetDirection, float Distance, float MoveSpeed, FPlayerMoveToTargetSignature OnArrived, float TimeToGiveUp);
    
    UFUNCTION(BlueprintCallable)
    void MoveToTarget(AActor* TargetActor, float MoveSpeed, FPlayerMoveToTargetSignature OnArrived, float Distance, float TimeToGiveUp);
    
    UFUNCTION(BlueprintCallable)
    void JumpTakeOff();
    
    UFUNCTION(BlueprintCallable)
    bool Jump();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEdgeGrippingStrictly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEdgeGripping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashingForEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDashing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAutoPilotMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovementSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJumpHeight() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceRotateActorWhileKeepingCamera(const FRotator& InNewRotation);
    
    UFUNCTION(BlueprintCallable)
    bool EndEdgeGrip();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EdgeGripAdjustFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearFoliageActorList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDebugJump() const;
    
    UFUNCTION(BlueprintCallable)
    bool BeginEdgeGrip(const FVector& WallRight, const FVector& GripPoint);
    
    UFUNCTION(BlueprintCallable)
    void AddGimmickForce(const FVector& Force, float DumpingSpeed);
    
};

