#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ActionMappingInfoRow.h"
#include "AxisMappingInfoRow.h"
#include "BPL_ActionAxisMapping.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_ActionAxisMapping : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_ActionAxisMapping();

    UFUNCTION(BlueprintCallable)
    static void OutputDefaultActionAxisMappingCSV(const TArray<FActionMappingInfoRow>& actonMappingRows, const TArray<FAxisMappingInfoRow>& axisMappingRows);
    
    UFUNCTION(BlueprintCallable)
    static void OutputActionAxisMappingCSV();
    
    UFUNCTION(BlueprintCallable)
    static void LoadDefaultInputIniFile();
    
};

