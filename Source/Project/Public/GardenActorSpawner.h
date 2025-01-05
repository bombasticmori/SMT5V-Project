#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
#include "E_GARDEN_SPAWN_ANIMATION.h"
#include "E_GARDEN_SPAWN_AREA.h"
#include "E_GARDEN_SPAWN_SIZE.h"
#include "GardenActorSpawner.generated.h"

class UCapsuleComponent;
class UMaterialInterface;
class UObject;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class PROJECT_API AGardenActorSpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_SPAWN_SIZE m_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_SPAWN_ANIMATION m_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_GARDEN_SPAWN_AREA m_Area;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsPrerequisiteArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_SkirtNGSpot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsSitArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_NGDevilIDList;
    
    AGardenActorSpawner(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SnapToGround(const UObject* WorldContextObject, UPARAM(Ref) UCapsuleComponent*& ActorCapsuleCollision, UPARAM(Ref) USceneComponent*& ActorSpawnLocation, UPARAM(Ref) UStaticMeshComponent*& ActorStaticMesh, UMaterialInterface* GoodMaterial, UMaterialInterface* BadMaterial, UPARAM(Ref) TArray<UCapsuleComponent*>& GroundedCheckCollisions, bool CheckOverlap, TEnumAsByte<ETraceTypeQuery> TraceChannel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool CheckIfLevelToGround(const UObject* WorldContextObject, UPARAM(Ref) UStaticMeshComponent*& ActorStaticMesh, UMaterialInterface* GoodMaterial, UMaterialInterface* BadMaterial, UPARAM(Ref) TArray<UCapsuleComponent*>& GroundedCheckCollisions, bool CheckOverlap, UPARAM(Ref) UCapsuleComponent*& OverlapCheckCollision, TEnumAsByte<ETraceTypeQuery> TraceChannel);
    
};

