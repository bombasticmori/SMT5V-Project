#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleModule -FallbackName=ParticleModule
#include "Particles/ParticleModule.h"
#include "Distributions/DistributionFloat.h"
#include "Distributions/DistributionVector.h"
#include "Particles/Collision/ParticleModuleCollision.h"
#include "ParticleModuleS3N2Base.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class PROJECT_API UParticleModuleS3N2Base : public UParticleModule {
    GENERATED_BODY()
public:
    UParticleModuleS3N2Base();

};

