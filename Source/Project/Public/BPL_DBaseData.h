#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MapDBaseData.h"
#include "BPL_DBaseData.generated.h"

UCLASS(Blueprintable)
class UBPL_DBaseData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_DBaseData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetMagatsukaID_FromGodParam(int32 godParamID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMapDBaseData GetDBaseData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMagatsukaDead_FromGodParam(int32 godParamID);
    
};

