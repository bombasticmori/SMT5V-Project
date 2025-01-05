#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "BacktraceOnCrashpadSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config = Plugins)
class BACKTRACEONCRASHPAD_API UBacktraceOnCrashpadSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta = (AllowPrivateAccess = true))
    FString BacktraceURL;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta = (AllowPrivateAccess = true))
    FString BacktraceToken;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta = (AllowPrivateAccess = true))
    FString CrashpadDatabasePath;

    UBacktraceOnCrashpadSettings();

};

