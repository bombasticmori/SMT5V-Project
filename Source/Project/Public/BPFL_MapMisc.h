#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPFL_MapMisc.generated.h"

class UExponentialHeightFogComponent;
class UShapeComponent;

UCLASS(Blueprintable)
class PROJECT_API UBPFL_MapMisc : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPFL_MapMisc();

    UFUNCTION(BlueprintCallable)
    static void SetShapeComponentColor(UShapeComponent* ShapeComponent, const FColor& Color);
    
    UFUNCTION(BlueprintCallable)
    static void SetSecondFogData(UExponentialHeightFogComponent* target, float FogDensity, float FogHeightFalloff, float FogHeightOffset);
    
    UFUNCTION(BlueprintCallable)
    static void PrintFogVerbose(const FString& inString, bool bVeryVerbose);
    
    UFUNCTION(BlueprintCallable)
    static int32 CreateRandomSeedFromString(const FString& Str);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor ColorHSVInterp(FLinearColor ColorA, FLinearColor ColorB, float Alpha);
    
};

