#pragma once
#include "CoreMinimal.h"
#include "InheritSkillTekiseiTable.generated.h"

USTRUCT(BlueprintType)
struct FInheritSkillTekiseiTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClassValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rate;
    
    PROJECT_API FInheritSkillTekiseiTable();
};

