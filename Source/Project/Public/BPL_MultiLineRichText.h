#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "BPL_MultiLineRichText.generated.h"

UCLASS(Blueprintable)
class UBPL_MultiLineRichText : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MultiLineRichText();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMargin GetLocalizedOffset(UPARAM(Ref) FSlateFontInfo& InFont);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> CreateLineStringArray(UPARAM(Ref) FString& srcStr);
    
};

