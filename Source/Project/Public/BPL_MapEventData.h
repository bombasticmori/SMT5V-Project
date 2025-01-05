#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MapEventData.h"
#include "BPL_MapEventData.generated.h"

UCLASS(Blueprintable)
class UBPL_MapEventData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_MapEventData();

    UFUNCTION(BlueprintCallable)
    static void SetMapEventStartFlags(int32 _mapEventID, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapEventEndFlag(int32 _mapEventID, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapEventAfterFlag(int32 _mapEventID, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMapEventActivateFlagsFromData(const FMapEventData& MapEventData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMapEventActivateFlags(int32 _mapEventID);
    
    UFUNCTION(BlueprintCallable)
    static void GetMapEventNext(int32 _nowMapEventId, int32& nextMapId, int32& nextAreaId, int32& nextWarpPoint, int32& _nextMapEventId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMapEventIdFromIndex(int32 _mapEventID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMapEventDataNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMapEventData GetMapEventDataFromMapEventId(int32 _mapEventID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMapEventData GetMapEventData(int32 ID);
    
};

