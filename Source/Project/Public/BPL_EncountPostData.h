#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_EncountPostData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_EncountPostData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_EncountPostData();

    UFUNCTION(BlueprintCallable)
    static bool EventEncountPostDataSaveArray(TArray<FString> Data);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> EventEncountPostDataLoadToArray();
    
    UFUNCTION(BlueprintCallable)
    static bool EventEncountPostDataInitialize();
    
    UFUNCTION(BlueprintCallable)
    static bool EncountPostDataSaveArray(TArray<FString> Data);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> EncountPostDataLoadToArray();
    
    UFUNCTION(BlueprintCallable)
    static bool EncountPostDataInitialize();
    
};

