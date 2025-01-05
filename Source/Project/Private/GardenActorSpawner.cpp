#include "GardenActorSpawner.h"

AGardenActorSpawner::AGardenActorSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Size = E_GARDEN_SPAWN_SIZE::E_ALL;
    this->m_Animation = E_GARDEN_SPAWN_ANIMATION::E_STAND;
    this->m_Area = E_GARDEN_SPAWN_AREA::E_GROUND;
    this->m_IsPrerequisiteArea = false;
    this->m_SkirtNGSpot = false;
    this->m_IsSitArea = false;
}

void AGardenActorSpawner::SnapToGround(const UObject* WorldContextObject, UCapsuleComponent*& ActorCapsuleCollision, USceneComponent*& ActorSpawnLocation, UStaticMeshComponent*& ActorStaticMesh, UMaterialInterface* GoodMaterial, UMaterialInterface* BadMaterial, TArray<UCapsuleComponent*>& GroundedCheckCollisions, bool CheckOverlap, TEnumAsByte<ETraceTypeQuery> TraceChannel) {
}

bool AGardenActorSpawner::CheckIfLevelToGround(const UObject* WorldContextObject, UStaticMeshComponent*& ActorStaticMesh, UMaterialInterface* GoodMaterial, UMaterialInterface* BadMaterial, TArray<UCapsuleComponent*>& GroundedCheckCollisions, bool CheckOverlap, UCapsuleComponent*& OverlapCheckCollision, TEnumAsByte<ETraceTypeQuery> TraceChannel) {
    return false;
}


