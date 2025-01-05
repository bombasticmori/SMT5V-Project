#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OneEncountData.h"
#include "PackEncount.h"
#include "BPL_EncountData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_EncountData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_EncountData();

    UFUNCTION(BlueprintCallable)
    static void SettingEncountDataRandomStream(const FRandomStream& RandomStream);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseEncountDataRandomStream();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRandomEncountId_Dungeon(int32 mapId, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRandomEncountId(int32 pack_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEncountPackDataNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPackEncount GetEncountPackData_Dungeon(int32 mapId, int32 Index, int32& packId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPackEncount GetEncountPackData(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEncountDataNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOneEncountData GetEncountData(int32 ID);
    
};

