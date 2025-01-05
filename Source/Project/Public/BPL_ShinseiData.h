#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_ShinseiKind.h"
#include "ShinseiData.h"
#include "ShinseiSaveBuffer.h"
#include "BPL_ShinseiData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_ShinseiData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_ShinseiData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShinseiSaveBufferStart(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShinseiSaveBufferNum(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetShinseiSaveBufferDataMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FShinseiSaveBuffer GetShinseiSaveBufferData(int32 tableID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FShinseiData GetShinseiData(E_ShinseiKind Kind);
    
};

