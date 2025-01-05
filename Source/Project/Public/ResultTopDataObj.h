#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ResultTopCharaData.h"
#include "ResultTopItem.h"
#include "ResultTopDataObj.generated.h"

UCLASS(Blueprintable)
class UResultTopDataObj : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AnimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MoneyRatex10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ExpRatex10;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultTopItem> m_Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultTopCharaData> m_PartyExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FResultTopCharaData> m_StockExp;
    
    UResultTopDataObj();

    UFUNCTION(BlueprintCallable)
    void UpdateExpBarState(const int32& Index, const float& pastTime, bool& IsEnd, bool& lvUp, int32& barRate, int32& Lv);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 PageScrollLastIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float PageScrollBarRate(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInterval_Zero2Max();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInterval_Top2ExpMove();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInterval_LvUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ExistLvUpChara() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EnablePageChange();
    
    UFUNCTION(BlueprintCallable)
    void CheckLvUpHelpTiming(const int32& Index, const float& pastDeltaSeconds, bool& AllEnd, bool& EnablePop, int32& DevilID);
    
};

