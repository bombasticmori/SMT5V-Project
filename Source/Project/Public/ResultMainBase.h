#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ResultData.h"
#include "ResultMainBase.generated.h"

class UResultTopDataObj;

UCLASS(Blueprintable)
class AResultMainBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UResultTopDataObj* pTopData;
    
    AResultMainBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SaveResultTopBeforeData(const FResultData& ResultData);
    
    UFUNCTION(BlueprintCallable)
    void SaveResultTopAfterData();
    
    UFUNCTION(BlueprintCallable)
    static void PopResultData(FResultData& outResultData);
    
    UFUNCTION(BlueprintCallable)
    void Init(const FResultData ResultData, bool& Success);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMakkaData(int32& Makka);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetItemData(TArray<int32>& ItemId, TArray<int32>& itemCnt);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInterval_Top2ExpMove();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcParamPoint(int32 beforeLv, int32 afterLv);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 CalcGodPoint(int32 beforeLv, int32 afterLv);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddItemAndMakka(bool getMakkaFlag, bool getItemFlag);
    
};

