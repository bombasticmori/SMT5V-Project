#include "BPL_DebugUtils.h"

UBPL_DebugUtils::UBPL_DebugUtils() {
}

void UBPL_DebugUtils::Screenshot(const FString& DirectoryPath, const FString& Filename, bool bAddDateTimeToFileName, bool bShowUI) {
}

bool UBPL_DebugUtils::ScreenCapture(int32 ScreenWidth, int32 ScreenHeight, const FString& Filename, bool bAddDateTime, bool bNotFileCompress) {
    return false;
}

void UBPL_DebugUtils::SaveStatsInfo(const FString& DirectoryPath, const FString& StatsGroupName) {
}

FProjectSubLevelStatus UBPL_DebugUtils::ProjectDebugToggleVolumetricLightmap(UObject* WorldContextObject, const FName& DebugMenuPath) {
    return FProjectSubLevelStatus{};
}

FProjectSubLevelStatus UBPL_DebugUtils::ProjectDebugToggleLevelLoad(UObject* WorldContextObject, const FName& DebugMenuPath) {
    return FProjectSubLevelStatus{};
}

FProjectSubLevelStatus UBPL_DebugUtils::ProjectDebugGetLevelStatus(UObject* WorldContextObject, const FName& DebugMenuPath) {
    return FProjectSubLevelStatus{};
}

bool UBPL_DebugUtils::ProjectDebugFlagToggle(eDebugFlag debugFlag) {
    return false;
}

bool UBPL_DebugUtils::ProjectDebugFlagSet(eDebugFlag debugFlag, bool Value) {
    return false;
}

bool UBPL_DebugUtils::ProjectDebugFlagGet(eDebugFlag debugFlag) {
    return false;
}

void UBPL_DebugUtils::ProjectDebugCameraSetDisplay(bool bEnabled) {
}

bool UBPL_DebugUtils::ProjectDebugCameraIsEnabled() {
    return false;
}

FTransform UBPL_DebugUtils::ProjectDebugCameraGetTransform() {
    return FTransform{};
}

AProjectDebugCameraController* UBPL_DebugUtils::ProjectDebugCameraGet() {
    return NULL;
}

void UBPL_DebugUtils::ProjectConsoleCommand(const FString& ConsoleCommand) {
}

void UBPL_DebugUtils::GetCollisionProfileNames(TArray<FString>& CollisionProfileNames) {
}

void UBPL_DebugUtils::EnableProjectDebugCamera(const FVector& Location, const FRotator& Rotation, const FTransform& Transform) {
}

eDebugFlag UBPL_DebugUtils::eDebugFlag_FromString(const FString& enumString) {
    return eDebugFlag::None;
}

void UBPL_DebugUtils::DisableProjectDebugCamera() {
}

bool UBPL_DebugUtils::DebugFirstInit() {
    return false;
}

void UBPL_DebugUtils::ClipboardPaste(FString& Dest) {
}

void UBPL_DebugUtils::ClipboardCopy(const FString& Str) {
}


