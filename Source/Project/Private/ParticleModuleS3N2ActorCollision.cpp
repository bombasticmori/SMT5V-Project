#include "ParticleModuleS3N2ActorCollision.h"

UParticleModuleS3N2ActorCollision::UParticleModuleS3N2ActorCollision() {
    this->bSpawnModule = true;
    this->bUpdateModule = true;
    this->LODDuplicate = false;
    this->CollisionCompletionOption = EPCC_Kill;
    this->CollisionType = ES3N2ParticleCollisionType::HitAll;
    this->bApplyPhysics = false;
    this->bIgnoreTriggerVolumes = true;
    this->DirScalar = 3.50f;
    this->bPawnsDoNotDecrementCount = true;
    this->bOnlyVerticalNormalsDecrementCount = false;
    this->VerticalFudgeFactor = 0.10f;
    this->bCollideOnlyIfVisible = true;
    this->bIgnoreSourceActor = true;
    this->MaxCollisionDistance = 10000.00f;
}


