#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_TestPlayTrace.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_TestPlayTrace : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_TestPlayTrace();

    UFUNCTION(BlueprintCallable)
    static bool SetTestTraceData(const FString& Text, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetTestTraceFileName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetTestTraceData(const FString& Filename);
    
};

