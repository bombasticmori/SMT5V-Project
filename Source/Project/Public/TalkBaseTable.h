#pragma once
#include "CoreMinimal.h"
#include "TalkGiftItemTable.h"
#include "TalkMoonTemperRateTable.h"
#include "TalkMoonTemperTable.h"
#include "TalkMythTable.h"
#include "TalkRequestItemRankTable.h"
#include "TalkRequestItemTable.h"
#include "TalkWantReactionTable.h"
#include "TalkBaseTable.generated.h"

USTRUCT(BlueprintType)
struct PROJECT_API FTalkBaseTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> m_BalanceArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> m_WantMoneyArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> m_FundAngryRateArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTalkRequestItemTable> m_RequestItemTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTalkRequestItemRankTable> m_RequestItemRankTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> m_WantKindBeforeMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> m_WantKindAfterMoney;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> m_WantKindBeforeMoney_Easy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> m_WantKindAfterMoney_Easy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTalkWantReactionTable> m_WantReaction_Yes_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTalkWantReactionTable> m_WantReaction_Other_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTalkWantReactionTable> m_WantReaction_Shortcut_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTalkWantReactionTable> m_WantReaction_NotHave_Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTalkGiftItemTable> m_GiftItemTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTalkMythTable> m_MythTableArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTalkMoonTemperTable> m_MoonTemperArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTalkMoonTemperRateTable> m_MoonTemperRateArray;
    
    FTalkBaseTable();
};

