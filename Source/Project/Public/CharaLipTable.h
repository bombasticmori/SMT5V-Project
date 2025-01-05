#pragma once
#include "CoreMinimal.h"
#include "E_CHARA_LIP_ID.h"
#include "CharaLipTable.generated.h"

USTRUCT(BlueprintType)
struct FCharaLipTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<E_CHARA_LIP_ID, FName> Map;
    
    PROJECT_API FCharaLipTable();
};

