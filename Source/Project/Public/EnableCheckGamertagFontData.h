#pragma once
#include "CoreMinimal.h"
#include "EnableCheckGamertagFontData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FEnableCheckGamertagFontData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* FontObject;
    
    PROJECT_API FEnableCheckGamertagFontData();
};

