#pragma once
#include "CoreMinimal.h"
#include "UILevelBootItemData.generated.h"

USTRUCT(BlueprintType)
struct FUILevelBootItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString dispName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCategory;
    
    PROJECT_API FUILevelBootItemData();
};

