#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_OldNewRoute.h"
#include "E_TITLE_TOP_SELECTION.h"
#include "EnableCheckGamertagFontData.h"
#include "BPL_Title.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_Title : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_Title();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UsePCTitle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool UseGamertag();
    
    UFUNCTION(BlueprintCallable)
    static void SetRequestTitleMovie(bool useFirstMovie);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRequestedTitleMovie();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsActivityStart(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetTitleTopSelection(const bool enableConvert, TArray<E_TITLE_TOP_SELECTION>& retSelection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGamertag(const FEnableCheckGamertagFontData& inFontData, const bool modern, const bool modernSuffix, const FString& repCharforGarbledChar);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static E_OldNewRoute GetActivityTargetSaveDataType(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EnableCountUpNoInputTime();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckEnableConvertSaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckDisplayCopyrightFromPlatform(const int32 order);
    
};

