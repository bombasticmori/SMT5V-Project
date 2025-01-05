#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MessageData.h"
#include "MessageUI.generated.h"

class UScriptMessageAsset;

UCLASS(Blueprintable)
class PROJECT_API UMessageUI : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMessageUI();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMessageData GetMessageDataFromLabel(const UScriptMessageAsset* pScriptMessage, FName Label);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMessageData GetMessageDataFromId(const UScriptMessageAsset* pScriptMessage, int32 MessageID);
    
};

