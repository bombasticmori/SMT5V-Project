#pragma once
#include "CoreMinimal.h"
#include "AnalyzeData.h"
#include "BtlParty.h"
#include "UIStatusCtrlDataObjBase.h"
#include "UIStatusCtrlDataObjBtlBase.generated.h"

UCLASS(Blueprintable)
class UUIStatusCtrlDataObjBtlBase : public UUIStatusCtrlDataObjBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_CampLikeList;
    
public:
    UUIStatusCtrlDataObjBtlBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool UseDedicatedDropData(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool UseDedicatedAnalyzeData(const int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetUIObjBtlCharaStatus(UPARAM(Ref) FBtlParty& in_btlParty, bool isEnemy);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RebuildCharaList(const TArray<uint8>& enemyList, const TArray<uint8>& partyList, const TArray<uint8>& stockList);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsBossChallangeMode();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSatanAnalyzeData(FAnalyzeData& Data, const int32 DevilID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<int32> GetMagatsuhiSkillData(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<int32> GetMagaSkillSupporters(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TArray<int32> GetDedicatedDropData(const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetAnalyzeData(const int32 Index, FAnalyzeData& AnalyzeData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateCharaList(const TArray<uint8>& srcList, UPARAM(Ref) TArray<int32>& dstList);
    
};

