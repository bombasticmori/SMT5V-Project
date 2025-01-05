#pragma once
#include "CoreMinimal.h"
#include "BtlResultCharaData.h"
#include "BtlResultItemData.h"
#include "BtlResultMakkaData.h"
#include "BtlResultMessageData.h"
#include "E_BTL_END.h"
#include "BtlApllyResultData.generated.h"

USTRUCT(BlueprintType)
struct FBtlApllyResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlResultMakkaData m_MakkaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlResultItemData> m_GetItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlResultCharaData> m_PartyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlResultCharaData> m_StockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtlResultCharaData> m_PartnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlResultMessageData m_MessData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsBattleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_RecMagGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_BTL_END m_BtlEndType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ChainEncountNum;
    
    PROJECT_API FBtlApllyResultData();
};

