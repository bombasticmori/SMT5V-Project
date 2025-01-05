#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GardenTutorialCameraSetting.h"
#include "GardenTutorialSpotSettings.h"
#include "GardenTutorialSettings.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AGardenTutorialSettings : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTutorialCameraSetting InitialViewTutorialCameraSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTutorialSpotSettings SmallGardenTutorialSpotSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGardenTutorialSpotSettings BigGardenTutorialSpotSettings;
    
    AGardenTutorialSettings(const FObjectInitializer& ObjectInitializer);

};

