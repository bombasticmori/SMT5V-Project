#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedSingleKeyboardFunctionDelegate.h"
#include "EnableCheckFontData.h"
#include "SingleKeyboardTextSet.h"
#include "SingleKeyboardAsyncFunction.generated.h"

class UObject;
class USingleKeyboardAsyncFunction;

UCLASS(Blueprintable)
class PROJECT_API USingleKeyboardAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedSingleKeyboardFunction Completed;
    
    USingleKeyboardAsyncFunction();

    UFUNCTION(BlueprintCallable)
    static void SetPlayerName(const FText& Input, bool bFirstInput);
    
    UFUNCTION(BlueprintCallable)
    static bool PlatformIsSupportedVirtualKeyboard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetVirtualKeyboardIntervalTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPlayerDataName(bool bFirstInput);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNameEntryMaxLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetFamilyNameFirst();
    
    UFUNCTION(BlueprintCallable)
    static FString CheckNameEntryText(const FString& InputStr, const FEnableCheckFontData& FontFamilyData);
    
    UFUNCTION(BlueprintCallable)
    static FString CheckFontUnsupportedCharacter(const FString& InStr, const FEnableCheckFontData& FontFamilyData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USingleKeyboardAsyncFunction* CallSingleKeyboard(UObject* WorldContextObject, FSingleKeyboardTextSet TextSet, FEnableCheckFontData FontFamilyData, bool IsFirst);
    
};

