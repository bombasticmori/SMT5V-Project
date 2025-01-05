#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "E_GARDENPLAYER_FADETYPE.h"
#include "GardenBenchEffect.h"
#include "GardenBenchEffectMap.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UGardenBenchEffectMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<E_GARDENPLAYER_FADETYPE, FGardenBenchEffect> GardenBenchEffectMap;
    
    UGardenBenchEffectMap();

};

