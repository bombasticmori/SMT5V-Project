#include "BPL_ProjectLevel.h"

UBPL_ProjectLevel::UBPL_ProjectLevel() {
}

void UBPL_ProjectLevel::ProjectSetSubLevelStatus(UObject* WorldContextObject, const TArray<FProjectSubLevelStatus> SubLevelStatusArray, bool isForceUpdate) {
}

void UBPL_ProjectLevel::ProjectPropagateLightingScenarioChange(UObject* WorldContextObject) {
}

void UBPL_ProjectLevel::ProjectPrintLightmapInfo(UObject* WorldContextObject) {
}

void UBPL_ProjectLevel::ProjectLevelWaitLightMapStream(UObject* WorldContextObject) {
}

bool UBPL_ProjectLevel::ProjectLevelUseBridgeLevelForSameLevelChange(UObject* WorldContextObject, int32 PrevMapId, int32 PrevAreaId, int32 nextMapId, int32 nextAreaId) {
    return false;
}

void UBPL_ProjectLevel::ProjectLevelStatusPrint(UObject* WorldContextObject) {
}

bool UBPL_ProjectLevel::ProjectLevelIsReady(UObject* WorldContextObject, bool UpdateIfNotReady) {
    return false;
}

void UBPL_ProjectLevel::ProjectLevelFlushLevelStreaming(UObject* WorldContextObject, bool isVisibilityOnly) {
}

void UBPL_ProjectLevel::ProjectHideAllSubLevels(UObject* WorldContextObject, bool isForceUpdate) {
}

TArray<FProjectSubLevelStatus> UBPL_ProjectLevel::ProjectGetSubLevelStatusArray(UObject* WorldContextObject) {
    return TArray<FProjectSubLevelStatus>();
}

FString UBPL_ProjectLevel::EProjectStreamingStatusToString(TEnumAsByte<EProjectStreamingStatus> status) {
    return TEXT("");
}


