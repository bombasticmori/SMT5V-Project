#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EParticleCollisionComplete -FallbackName=EParticleCollisionComplete
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RawDistributionFloat -FallbackName=RawDistributionFloat
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RawDistributionVector -FallbackName=RawDistributionVector
#include "ES3N2ParticleCollisionType.h"
#include "ParticleModuleS3N2Base.h"
#include "ParticleModuleS3N2ActorCollision.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleS3N2ActorCollision : public UParticleModuleS3N2Base {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector DampingFactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionVector DampingFactorRotation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat MaxCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EParticleCollisionComplete> CollisionCompletionOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ES3N2ParticleCollisionType CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyPhysics: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreTriggerVolumes: 1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat ParticleMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPawnsDoNotDecrementCount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyVerticalNormalsDecrementCount: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalFudgeFactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawDistributionFloat DelayAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollideOnlyIfVisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreSourceActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCollisionDistance;
    
    UParticleModuleS3N2ActorCollision();

};

