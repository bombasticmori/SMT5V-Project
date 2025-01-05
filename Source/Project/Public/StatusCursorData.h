#pragma once
#include "CoreMinimal.h"
#include "E_STATUS_SKILL_LIST_TYPE.h"
#include "StatusCursorData.generated.h"

USTRUCT(BlueprintType)
struct FStatusCursorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BackIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_STATUS_SKILL_LIST_TYPE m_NowMoveCursorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ListAllNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_ListNum;
    
    PROJECT_API FStatusCursorData();
};

