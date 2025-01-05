#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AogamiDebrisData.h"
#include "BPL_AogamiDebrisData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_AogamiDebrisData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_AogamiDebrisData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAogamiDebrisTableMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAogamiDebrisTableIndex(int32 mapId, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAogamiDebrisData GetAogamiDebrisData_FromTableIndex(int32 tableIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAogamiDebrisData GetAogamiDebrisData(int32 mapId, int32 Index);
    
};

