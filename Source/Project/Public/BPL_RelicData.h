#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RelicData.h"
#include "RelicSaveBuffer.h"
#include "BPL_RelicData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_RelicData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_RelicData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRelicTableIndex(int32 mapId, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRelicSaveBufferStart(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRelicSaveBufferNum(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRelicSaveBufferDataMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRelicSaveBuffer GetRelicSaveBufferData(int32 tableID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRelicData GetRelicData_FromTableIndex(int32 tableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRelicData GetRelicData(int32 mapId, int32 Index);
    
};

