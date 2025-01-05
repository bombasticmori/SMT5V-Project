#pragma once
#include "CoreMinimal.h"
#include "ScriptMessageIconData.h"
#include "ScriptMessagePageData.h"
#include "ScriptMessage.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FScriptMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MessageLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MessageTextPages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptMessagePageData> MessagePageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScriptMessageIconData> MessageIconData;
    
    FScriptMessage();
};

