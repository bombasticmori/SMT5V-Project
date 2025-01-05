#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_PCSave.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_PCSave : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_PCSave();

    UFUNCTION(BlueprintCallable)
    static void PCSave_ResaveAllInDirectory();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> PCSave_PickupFilePath();
    
    UFUNCTION(BlueprintCallable)
    static void PCSave_OverwriteExecute(const FString& Filename, int32 slotNo);
    
    UFUNCTION(BlueprintCallable)
    static void PCSave_LoadExecute(const FString& Name, int32 slotNo, bool& LoadedGameData);
    
    UFUNCTION(BlueprintCallable)
    static void PCSave_Execute(const FString& overrideName, int32 slotNo);
    
    UFUNCTION(BlueprintCallable)
    static bool PCSave_DeleteExecute(const FString& Name, int32 slotNo);
    
};

