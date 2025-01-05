#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EWindowsWindowMode.h"
#include "ProjectWindowState.h"
#include "ProjectPlatformMiscFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UProjectPlatformMiscFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UProjectPlatformMiscFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetWindowSettings(int32 MonitorIndex, EWindowsWindowMode InMode, FIntPoint InResolution);
    
    UFUNCTION(BlueprintCallable)
    static void SetVSyncEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetPresenceForLocalPlayer(const FString& StatusStr);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxFps(int32 NewMaxFPS);
    
    UFUNCTION(BlueprintCallable)
    static void RunBenchmark();
    
    UFUNCTION(BlueprintCallable)
    static void RestoreWindowState(const FProjectWindowState& InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWorkInProgress();
    
    UFUNCTION(BlueprintCallable)
    static bool IsSupportedFullscreen(int32 MonitorIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBootOnLowSpecPC();
    
    UFUNCTION(BlueprintCallable)
    static EWindowsWindowMode GetWindowMode();
    
    UFUNCTION(BlueprintCallable)
    static bool GetVSyncEnabled();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumMonitors();
    
    UFUNCTION(BlueprintCallable)
    static void GetMonitorSupportedResolutions(int32 MonitorIndex, TArray<FIntPoint>& OutResolutions);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetMonitorResolution(int32 MonitorIndex);
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetMonitorNativeResolution(int32 MonitorIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetMaxFpsList();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMaxFPS();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMainMonitorIndex();
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetLowSpecDefaultResolusion();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGameVersionString();
    
    UFUNCTION(BlueprintCallable)
    static FProjectWindowState GetCurrentWindowState();
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetCurrentResolution();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentMonitorIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CurrentPlatformIsWindows();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CurrentPlatformIsSwitch();
    
};

