#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_TUTORIAL_WINDOW_MESSAGE_TYPE.h"
#include "TutorialWindowBuffer.h"
#include "BPL_TutorialWindowData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_TutorialWindowData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_TutorialWindowData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTutorialWindowBuffer getTutorialWindowData(E_TUTORIAL_WINDOW_MESSAGE_TYPE Type);
    
};

