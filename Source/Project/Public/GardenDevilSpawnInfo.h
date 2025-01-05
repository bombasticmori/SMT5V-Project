#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GardenDevilSpawnInfo.generated.h"

class AGardenActorSpawner;

USTRUCT(BlueprintType)
struct PROJECT_API FGardenDevilSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DevilSpawnTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGardenActorSpawner* DevilSpawner;
    
    FGardenDevilSpawnInfo();
};

