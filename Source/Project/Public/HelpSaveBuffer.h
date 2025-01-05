#pragma once
#include "CoreMinimal.h"
#include "HelpSaveBuffer.generated.h"

USTRUCT(BlueprintType)
struct FHelpSaveBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_helpType;
    
    PROJECT_API FHelpSaveBuffer();
};

