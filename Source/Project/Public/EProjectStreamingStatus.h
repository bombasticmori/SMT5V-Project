#pragma once
#include "CoreMinimal.h"
#include "EProjectStreamingStatus.generated.h"

UENUM(BlueprintType)
enum EProjectStreamingStatus {
    PROJECT_LEVEL_Invalid,
    PROJECT_LEVEL_Unloaded,
    PROJECT_LEVEL_UnloadedButStillAround,
    PROJECT_LEVEL_Loading,
    PROJECT_LEVEL_Loaded,
    PROJECT_LEVEL_MakingVisible,
    PROJECT_LEVEL_Visible,
    PROJECT_LEVEL_Preloading,
    PROJECT_LEVEL_AlwaysLoaded,
    PROJECT_LEVEL_Persistent,
};

