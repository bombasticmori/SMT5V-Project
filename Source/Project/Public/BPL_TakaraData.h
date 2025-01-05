#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "TakaraData.h"
#include "BPL_TakaraData.generated.h"

UCLASS(Blueprintable)
class UBPL_TakaraData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_TakaraData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetTakaraDataId(int32 mapId, int32 takaraID, int32& SaveId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTakaraData GetTakaraData_TableID(int32 tableID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTakaraData GetTakaraData(int32 mapId, int32 takaraID, int32& SaveId);
    
};

