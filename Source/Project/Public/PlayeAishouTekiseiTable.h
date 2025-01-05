#pragma once
#include "CoreMinimal.h"
#include "PlayeAishouTekiseiTable.generated.h"

USTRUCT(BlueprintType)
struct FPlayeAishouTekiseiTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_DefenceAishou;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_SkillTekisei;
    
    PROJECT_API FPlayeAishouTekiseiTable();
};

