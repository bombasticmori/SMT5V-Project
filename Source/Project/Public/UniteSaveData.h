#pragma once
#include "CoreMinimal.h"
#include "UniteSaveData.generated.h"

USTRUCT(BlueprintType)
struct FUniteSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_MenuNewFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_AnnounceFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_UtsusemiUnionCounter;
    
    PROJECT_API FUniteSaveData();
};

