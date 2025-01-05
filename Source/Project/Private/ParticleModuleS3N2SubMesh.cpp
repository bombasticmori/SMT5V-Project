#include "ParticleModuleS3N2SubMesh.h"
#include "Particles/Material/ParticleModuleMeshMaterial.h"

UParticleModuleS3N2SubMesh::UParticleModuleS3N2SubMesh() {
    this->FirstOwnerAddr = 0;
    this->Mesh = NULL;
    this->FrameRate = 30.00f;
    this->FrameSec = 0.03f;
    this->SpendSec = 0.00f;
    this->StartIndex = 0;
    this->CurrentSubMeshIndex = 0;
    this->bLoop = true;
    this->bCreatedMID = false;
    this->bHalt = false;
    this->OverrideMaterial = NULL;
}

void UParticleModuleS3N2SubMesh::Spawn(FParticleEmitterInstance* Owner, int32 Offset, float SpawnTime, FBaseParticle* ParticleBase)
{
}

uint32 UParticleModuleS3N2SubMesh::RequiredBytesPerInstance()
{
    return uint32();
}
#if WITH_EDITOR
bool UParticleModuleS3N2SubMesh::IsValidForLODLevel(UParticleLODLevel* LODLevel, FString& OutErrorString)
{
    return false;
}
#endif

