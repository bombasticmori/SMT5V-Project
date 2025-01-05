#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EDevilTalkVoice.h"
#include "BPL_TalkUtils.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_TalkUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_TalkUtils();

    UFUNCTION(BlueprintCallable)
    static EDevilTalkVoice GetStringToDevilTalkVoice(const FString& string);
    
};

