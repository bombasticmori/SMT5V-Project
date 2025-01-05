#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "GameFramework/GameMode.h"
#include "EDisableMenuReason.h"
#include "Templates/SubclassOf.h"
#include "ProjectGameModeBase.generated.h"

class UEnum;
class UGazeTargetHolder;
class UMapEventManager;
class UObject;

UCLASS(Blueprintable, NonTransient)
class PROJECT_API AProjectGameModeBase : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMapEventManager* MapEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEditorNoDebugMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGazeTargetHolder> GazeTargetHolderClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGazeTargetHolder* GazeTargetHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<bool> DisableMenuArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEnum> EDisableMenuReason_EnumPtr;
    
public:
    AProjectGameModeBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Exec)
    void TestCrash();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ProjectIsMenuDisabledByReason(const UObject* WorldContextObject, EDisableMenuReason DisableMenuReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool ProjectIsMenuDisabled(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProjectEnableMenuAll(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProjectEnableMenu(const UObject* WorldContextObject, const EDisableMenuReason DisableMenuReason);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ProjectDisableMenu(const UObject* WorldContextObject, const EDisableMenuReason DisableMenuReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreloadMap(int32 mapId, int32 AreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsSpawnDebugMenu(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGazeTargetHolder* GetGazeTargetHolder(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallReactivatedApp_ForConsumer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallAutoPause_ForConsumer();
    
};

