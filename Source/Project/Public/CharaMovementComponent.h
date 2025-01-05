#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PawnMovementComponent -FallbackName=PawnMovementComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "GameFramework/PawnMovementComponent.h"
#include "PhysicsCore.h"
#include "CharaMovementUpdatedSignatureDelegate.h"
#include "CharaMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UCharaMovementComponent : public UPawnMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugUpVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugFlyMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDebugJumpTrigger;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaMovementUpdatedSignature OnCharaMovementUpdated;
    
    UCharaMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MoveWorldOffset(FVector DeltaLocation, float AdjustHeightMin, float AdjustHeightMax);
    
    UFUNCTION(BlueprintCallable)
    void MoveLocalOffset(FVector DeltaLocation, float AdjustHeightMin, float AdjustHeightMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetSurfaceType() const;
    
};

