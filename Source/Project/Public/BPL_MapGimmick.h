#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPL_MapGimmick.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_MapGimmick : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MapGimmick();

    UFUNCTION(BlueprintCallable)
    static void BPL_MapNaviLog(const FString& Str, float Time, FColor Color, bool bVerbose);
    
    UFUNCTION(BlueprintCallable)
    static void BPL_DgRotateFlagReset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BPL_DgRotateFlagGet();
    
};

