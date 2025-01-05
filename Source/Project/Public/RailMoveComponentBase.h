#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "RailMoveComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URailMoveComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
    URailMoveComponentBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalcTargetLocationWithOffset_Inner(UPARAM(Ref) FVector& TargetLocation, UPARAM(Ref) FVector& SocketLocation, bool IsUseTargetLocation, UPARAM(Ref) FVector& OriginTargetLocation, bool IsLockTarget, UPARAM(Ref) FRotator& ActorRotation, UPARAM(Ref) FVector& TargetOffset, FVector& OutVec);
    
};

