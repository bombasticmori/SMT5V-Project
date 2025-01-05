#pragma once
#include "CoreMinimal.h"
#include "LevelInfo.generated.h"

class ULevelStreaming;

USTRUCT(BlueprintType)
struct FLevelInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelStreaming* LevelStreamingObject;
    
    PROJECT_API FLevelInfo();
};

