#pragma once
#include "CoreMinimal.h"
#include "MessageData.h"
#include "MessageSelData.generated.h"

class UScriptMessageAsset;

USTRUCT(BlueprintType)
struct FMessageSelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptMessageAsset* ScriptMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMessageData> MessArray;
    
    PROJECT_API FMessageSelData();
};

