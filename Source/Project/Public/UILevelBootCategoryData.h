#pragma once
#include "CoreMinimal.h"
#include "UILevelBootItemData.h"
#include "UILevelBootCategoryData.generated.h"

USTRUCT(BlueprintType)
struct FUILevelBootCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDirectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUILevelBootItemData> ItemData;
    
    PROJECT_API FUILevelBootCategoryData();
};

