#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RawDistributionFloat -FallbackName=RawDistributionFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RawDistributionVector -FallbackName=RawDistributionVector
#include "Particles/ParticleModule.h"
#include "Distributions/DistributionFloat.h"
#include "Distributions/DistributionVector.h"
#include "ParticleModuleS3N2Base.h"
#include "ParticleModuleS3N2AttractorLine.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UParticleModuleS3N2AttractorLine : public UParticleModuleS3N2Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRawDistributionVector BeginPoint;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionVector EndPoint;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Range;
    
    UPROPERTY(EditAnywhere)
    FRawDistributionFloat Strength;
    
    UParticleModuleS3N2AttractorLine();

};

