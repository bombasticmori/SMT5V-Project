#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MouseCursorState.h"
#include "BPL_ShowMouseCursor.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_ShowMouseCursor : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_ShowMouseCursor();

    UFUNCTION(BlueprintCallable)
    static void UpdateShowMouseCursor();
    
    UFUNCTION(BlueprintCallable)
    static void SetTopShowMouseCursor(const FString& SceneName, bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void SetForceShowMouseCursor(const FString& SceneName, bool bForceShow);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMouseCursorBasePosition();
    
    UFUNCTION(BlueprintCallable)
    static void PushShowMouseCursor(const FString& SceneName, bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static FMouseCursorState PopShowMouseCursor(const FString& SceneName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMouseCursorState PeekShowMouseCursor();
    
    UFUNCTION(BlueprintCallable)
    static void LogShowMouseCursorStack();
    
    UFUNCTION(BlueprintCallable)
    static void CallOpenDebugMenu_ShowMouseCursor();
    
    UFUNCTION(BlueprintCallable)
    static void CallCloseDebugMenu_ShowMouseCursor();
    
};

