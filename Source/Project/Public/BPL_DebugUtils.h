#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ProjectSubLevelStatus.h"
#include "eDebugFlag.h"
#include "BPL_DebugUtils.generated.h"

class AProjectDebugCameraController;
class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_DebugUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_DebugUtils();

    UFUNCTION(BlueprintCallable)
    static void Screenshot(const FString& DirectoryPath, const FString& Filename, bool bAddDateTimeToFileName, bool bShowUI);
    
    UFUNCTION(BlueprintCallable)
    static bool ScreenCapture(int32 ScreenWidth, int32 ScreenHeight, const FString& Filename, bool bAddDateTime, bool bNotFileCompress);
    
    UFUNCTION(BlueprintCallable)
    static void SaveStatsInfo(const FString& DirectoryPath, const FString& StatsGroupName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FProjectSubLevelStatus ProjectDebugToggleVolumetricLightmap(UObject* WorldContextObject, const FName& DebugMenuPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FProjectSubLevelStatus ProjectDebugToggleLevelLoad(UObject* WorldContextObject, const FName& DebugMenuPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FProjectSubLevelStatus ProjectDebugGetLevelStatus(UObject* WorldContextObject, const FName& DebugMenuPath);
    
    UFUNCTION(BlueprintCallable)
    static bool ProjectDebugFlagToggle(eDebugFlag debugFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool ProjectDebugFlagSet(eDebugFlag debugFlag, bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ProjectDebugFlagGet(eDebugFlag debugFlag);
    
    UFUNCTION(BlueprintCallable)
    static void ProjectDebugCameraSetDisplay(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ProjectDebugCameraIsEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform ProjectDebugCameraGetTransform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AProjectDebugCameraController* ProjectDebugCameraGet();
    
    UFUNCTION(BlueprintCallable)
    static void ProjectConsoleCommand(const FString& ConsoleCommand);
    
    UFUNCTION(BlueprintCallable)
    static void GetCollisionProfileNames(TArray<FString>& CollisionProfileNames);
    
    UFUNCTION(BlueprintCallable)
    static void EnableProjectDebugCamera(const FVector& Location, const FRotator& Rotation, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static eDebugFlag eDebugFlag_FromString(const FString& enumString);
    
    UFUNCTION(BlueprintCallable)
    static void DisableProjectDebugCamera();
    
    UFUNCTION(BlueprintCallable)
    static bool DebugFirstInit();
    
    UFUNCTION(BlueprintCallable)
    static void ClipboardPaste(FString& Dest);
    
    UFUNCTION(BlueprintCallable)
    static void ClipboardCopy(const FString& Str);
    
};

