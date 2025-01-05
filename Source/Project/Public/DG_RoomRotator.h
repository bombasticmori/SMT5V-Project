#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DG_RoomRotatorDynamicActor.h"
#include "E_DG_ROOM_ROTATOR_STATE.h"
#include "DG_RoomRotator.generated.h"

class AStaticMeshActor;
class UBoxComponent;
class UCurveFloat;

UCLASS(Blueprintable)
class PROJECT_API ADG_RoomRotator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AStaticMeshActor*> StaticMeshList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ObjectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDG_RoomRotatorDynamicActor> DynamicActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_DG_ROOM_ROTATOR_STATE RotateDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_DG_ROOM_ROTATOR_STATE RotateState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotateSecondsDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* HitBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotateAngleNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotateAngleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotateAngleTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotateAngleOffsetNow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotateAngleOffsetTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RotateCurve;
    
    ADG_RoomRotator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateRotate(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHitBox();
    
    UFUNCTION(BlueprintCallable)
    void StartRotate();
    
    UFUNCTION(BlueprintCallable)
    void SetRotateCountY(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void SetRotateCountX(int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDynamicActors();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllStaticMesh();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllObjects();
    
    UFUNCTION(BlueprintCallable)
    void RegisterDynamicActors(TArray<AActor*> dynamicActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInOriginalState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotateRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRotateCountY();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRotateCountX();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEventFlagValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEventFlagName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDataId();
    
    UFUNCTION(BlueprintCallable)
    void ForceFinishRotate();
    
    UFUNCTION(BlueprintCallable)
    void CollectStaticMeshActors();
    
    UFUNCTION(BlueprintCallable)
    void CollectObjects();
    
    UFUNCTION(BlueprintCallable)
    void ApplyGameData(bool bDoStaticMesh, bool bDoObject, bool bDoPhysics);
    
};

