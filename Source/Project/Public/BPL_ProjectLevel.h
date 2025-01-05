#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EProjectStreamingStatus.h"
#include "ProjectSubLevelStatus.h"
#include "BPL_ProjectLevel.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_ProjectLevel : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_ProjectLevel();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProjectSetSubLevelStatus(UObject* WorldContextObject, const TArray<FProjectSubLevelStatus> SubLevelStatusArray, bool isForceUpdate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProjectPropagateLightingScenarioChange(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProjectPrintLightmapInfo(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProjectLevelWaitLightMapStream(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ProjectLevelUseBridgeLevelForSameLevelChange(UObject* WorldContextObject, int32 PrevMapId, int32 PrevAreaId, int32 nextMapId, int32 nextAreaId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProjectLevelStatusPrint(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ProjectLevelIsReady(UObject* WorldContextObject, bool UpdateIfNotReady);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProjectLevelFlushLevelStreaming(UObject* WorldContextObject, bool isVisibilityOnly);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProjectHideAllSubLevels(UObject* WorldContextObject, bool isForceUpdate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FProjectSubLevelStatus> ProjectGetSubLevelStatusArray(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FString EProjectStreamingStatusToString(TEnumAsByte<EProjectStreamingStatus> status);
    
};

