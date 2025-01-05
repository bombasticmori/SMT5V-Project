#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "E_RYUKETSU_GARDEN_TYPE.h"
#include "GardenBenchGodray.h"
#include "GardenBenchGodrayMap.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UGardenBenchGodrayMap : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<E_RYUKETSU_GARDEN_TYPE, FGardenBenchGodray> GardenBenchGodrayMap;
    
    UGardenBenchGodrayMap();

};

