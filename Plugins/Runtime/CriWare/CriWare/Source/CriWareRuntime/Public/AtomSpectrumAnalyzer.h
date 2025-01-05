#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AtomSpectrumAnalyzer.generated.h"

class UAtomAsrRack;

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomSpectrumAnalyzer : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtomSpectrumAnalyzer();

    UFUNCTION(BlueprintCallable)
    static void GetLevelsDB(float display_range, TArray<float>& spectra);
    
    UFUNCTION(BlueprintCallable)
    static void GetLevels(TArray<float>& spectra);
    
    UFUNCTION(BlueprintCallable)
    static void CreateDspSpectra(UAtomAsrRack* asr_rack, const FString& bus_name, int32 num_bands);
    
};

