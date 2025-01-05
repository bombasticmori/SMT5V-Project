#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_DEFENCE_RESISTANCE.h"
#include "BPL_CampPartyPanel.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_CampPartyPanel : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_CampPartyPanel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CampPartyPanel_GetStockPanelNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CampPartyPanel_GetAttribute_Type_Max();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_DEFENCE_RESISTANCE CampPartyPanel_CheckResistanceType(int32 Param);
    
};

