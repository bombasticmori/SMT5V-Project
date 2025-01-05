#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FoliageHitEffectData.h"
#include "FoliageMoveEffectData.h"
#include "FoliageHitEffect.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class UFoliageHitEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, FFoliageMoveEffectData> MoveHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, FFoliageHitEffectData> AttackHitEffect;
    
    UFoliageHitEffect();

};

