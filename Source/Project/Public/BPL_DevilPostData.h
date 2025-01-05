#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_DevilPostData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_DevilPostData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_DevilPostData();

    UFUNCTION(BlueprintCallable)
    static bool DevilPostDataSaveArray(TArray<FString> Data);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> DevilPostDataLoadToArray();
    
    UFUNCTION(BlueprintCallable)
    static bool DevilPostDataInitialize();
    
};

