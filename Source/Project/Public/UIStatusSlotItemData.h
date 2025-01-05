#pragma once
#include "CoreMinimal.h"
#include "E_UI_STATUS_LIST_ITEM_TYPE.h"
#include "E_UI_STATUS_SLOT.h"
#include "UIStatusSlotItemData.generated.h"

USTRUCT(BlueprintType)
struct FUIStatusSlotItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_UI_STATUS_SLOT m_AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_UI_STATUS_SLOT m_FontColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_IconNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TextNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CostNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_UI_STATUS_LIST_ITEM_TYPE m_TextType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_OpenFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AddNum;
    
    PROJECT_API FUIStatusSlotItemData();
};

