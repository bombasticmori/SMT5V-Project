#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "CharaStampEffect.h"
#include "CharaStampEffectTable.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UCharaStampEffectTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FCharaStampEffect> Map;
    
    UCharaStampEffectTable();

    UFUNCTION(BlueprintCallable)
    FCharaStampEffect FindNonPure(TEnumAsByte<EPhysicalSurface> InSurfaceType);
    
};

