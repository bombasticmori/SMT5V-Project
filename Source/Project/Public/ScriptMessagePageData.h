#pragma once
#include "CoreMinimal.h"
#include "ScriptMessagePageData.generated.h"

class UCharaLipSync;
class USoundAtomCue;

USTRUCT(BlueprintType)
struct PROJECT_API FScriptMessagePageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> Cue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCharaLipSync> LipSync;
    
    FScriptMessagePageData();
};

