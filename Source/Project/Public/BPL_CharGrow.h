#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_PLAYER_TYPE.h"
#include "PlayerGrowData.h"
#include "BPL_CharGrow.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_CharGrow : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_CharGrow();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool PlayerGrowDataIsDummy(FPlayerGrowData pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlayerRace(E_PLAYER_TYPE playerType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPlayerGrowData GetPlayerGrowTableData();
    
};

