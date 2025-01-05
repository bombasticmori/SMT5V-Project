#pragma once
#include "CoreMinimal.h"
#include "E_BTL_CHAR_TYPE.h"
#include "BtlKuishibariData.generated.h"

USTRUCT(BlueprintType)
struct FBtlKuishibariData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_CHAR_TYPE m_CharType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_CheckUseArray;
    
    PROJECT_API FBtlKuishibariData();
};

