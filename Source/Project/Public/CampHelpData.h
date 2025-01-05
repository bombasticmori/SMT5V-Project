#pragma once
#include "CoreMinimal.h"
#include "CursorBaseData.h"
#include "CampHelpData.generated.h"

USTRUCT(BlueprintType)
struct FCampHelpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAscendingFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HelpSortType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCursorBaseData m_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCursorBaseData m_SortCursor;
    
    PROJECT_API FCampHelpData();
};

