#pragma once
#include "CoreMinimal.h"
#include "GardenTutorialSpot.h"
#include "GardenTutorialSpotSettings.generated.h"

USTRUCT(BlueprintType)
struct FGardenTutorialSpotSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTutorialSpot SpawnSpot1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTutorialSpot SpawnSpot2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTutorialSpot SpawnSpot3;
    
    PROJECT_API FGardenTutorialSpotSettings();
};

