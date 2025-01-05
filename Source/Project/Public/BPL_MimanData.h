#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MimanData.h"
#include "MimanSaveBuffer.h"
#include "BPL_MimanData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_MimanData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MimanData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMimanSaveBufferStart(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMimanSaveBufferNum(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMimanSaveBufferDataMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMimanSaveBuffer GetMimanSaveBufferData(int32 tableID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMimanData GetMimanData(int32 mapId);
    
};

