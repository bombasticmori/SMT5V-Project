#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "RyuketsuData.h"
#include "BPL_RyuketsuData.generated.h"

UCLASS(Blueprintable)
class UBPL_RyuketsuData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_RyuketsuData();

    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetRyuketsuIDList_Sorted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRyuketsuDataMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetRyuketsuDataId_FromMapID(int32 mapId, int32 AreaId, int32 Index, int32& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRyuketsuData GetRyuketsuData_FromMapID(int32 mapId, int32 AreaId, int32 Index, int32& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRyuketsuData GetRyuketsuData(int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static FName ConvertRyuketsuNameLabel(FName beforeLabel);
    
};

