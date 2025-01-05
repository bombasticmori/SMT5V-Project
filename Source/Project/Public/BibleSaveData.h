#pragma once
#include "CoreMinimal.h"
#include "BibleData.h"
#include "BibleSaveData.generated.h"

USTRUCT(BlueprintType)
struct FBibleSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBibleData> m_BibleList;
    
    PROJECT_API FBibleSaveData();
};

