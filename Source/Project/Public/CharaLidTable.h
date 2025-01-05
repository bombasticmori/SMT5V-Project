#pragma once
#include "CoreMinimal.h"
#include "E_CHARA_LID_ID.h"
#include "CharaLidTable.generated.h"

USTRUCT(BlueprintType)
struct FCharaLidTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<E_CHARA_LID_ID, FName> Map;
    
    PROJECT_API FCharaLidTable();
};

