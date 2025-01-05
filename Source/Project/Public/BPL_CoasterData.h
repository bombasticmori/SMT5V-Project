#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CoasterSaveBuffer.h"
#include "BPL_CoasterData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_CoasterData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_CoasterData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCoasterSaveBufferStart(int32 mapId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCoasterSaveBufferNum(int32 mapId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCoasterSaveBufferDataMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FCoasterSaveBuffer GetCoasterSaveBufferData(int32 tableID);
    
};

