#include "ProjectPlatformMiscFunctionLibrary.h"

UProjectPlatformMiscFunctionLibrary::UProjectPlatformMiscFunctionLibrary() {
}

void UProjectPlatformMiscFunctionLibrary::SetWindowSettings(int32 MonitorIndex, EWindowsWindowMode InMode, FIntPoint InResolution) {
}

void UProjectPlatformMiscFunctionLibrary::SetVSyncEnable(bool bEnable) {
}

void UProjectPlatformMiscFunctionLibrary::SetPresenceForLocalPlayer(const FString& StatusStr) {
}

void UProjectPlatformMiscFunctionLibrary::SetMaxFps(int32 NewMaxFPS) {
}

void UProjectPlatformMiscFunctionLibrary::RunBenchmark() {
}

void UProjectPlatformMiscFunctionLibrary::RestoreWindowState(const FProjectWindowState& InState) {
}

bool UProjectPlatformMiscFunctionLibrary::IsWorkInProgress() {
    return false;
}

bool UProjectPlatformMiscFunctionLibrary::IsSupportedFullscreen(int32 MonitorIndex) {
    return false;
}

bool UProjectPlatformMiscFunctionLibrary::IsBootOnLowSpecPC() {
    return false;
}

EWindowsWindowMode UProjectPlatformMiscFunctionLibrary::GetWindowMode() {
    return EWindowsWindowMode::Fullscreen;
}

bool UProjectPlatformMiscFunctionLibrary::GetVSyncEnabled() {
    return false;
}

int32 UProjectPlatformMiscFunctionLibrary::GetNumMonitors() {
    return 0;
}

void UProjectPlatformMiscFunctionLibrary::GetMonitorSupportedResolutions(int32 MonitorIndex, TArray<FIntPoint>& OutResolutions) {
}

FIntPoint UProjectPlatformMiscFunctionLibrary::GetMonitorResolution(int32 MonitorIndex) {
    return FIntPoint{};
}

FIntPoint UProjectPlatformMiscFunctionLibrary::GetMonitorNativeResolution(int32 MonitorIndex) {
    return FIntPoint{};
}

TArray<int32> UProjectPlatformMiscFunctionLibrary::GetMaxFpsList() {
    return TArray<int32>();
}

int32 UProjectPlatformMiscFunctionLibrary::GetMaxFPS() {
    return 0;
}

int32 UProjectPlatformMiscFunctionLibrary::GetMainMonitorIndex() {
    return 0;
}

FIntPoint UProjectPlatformMiscFunctionLibrary::GetLowSpecDefaultResolusion() {
    return FIntPoint{};
}

FString UProjectPlatformMiscFunctionLibrary::GetGameVersionString() {
    return TEXT("");
}

FProjectWindowState UProjectPlatformMiscFunctionLibrary::GetCurrentWindowState() {
    return FProjectWindowState{};
}

FIntPoint UProjectPlatformMiscFunctionLibrary::GetCurrentResolution() {
    return FIntPoint{};
}

int32 UProjectPlatformMiscFunctionLibrary::GetCurrentMonitorIndex() {
    return 0;
}

bool UProjectPlatformMiscFunctionLibrary::CurrentPlatformIsWindows() {
    return false;
}

bool UProjectPlatformMiscFunctionLibrary::CurrentPlatformIsSwitch() {
    return false;
}


