#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DebugBtlAITempViewData.h"
#include "DebugBtlAITempView.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UDebugBtlAITempView : public UObject {
    GENERATED_BODY()
public:
    UDebugBtlAITempView();

    UFUNCTION(BlueprintCallable)
    void Sort_Data(TArray<FDebugBtlAITempViewData>& Data, bool IsDown);
    
    UFUNCTION(BlueprintCallable)
    void Sort();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDebugBtlAITempViewData> GetValueData_Index(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDebugBtlAITempViewData> GetValueData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDebugBtlAITempViewData> GetFlagData_Index(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDebugBtlAITempViewData> GetFlagData();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllData();
    
    UFUNCTION(BlueprintCallable)
    void AddValueData(FDebugBtlAITempViewData Data);
    
    UFUNCTION(BlueprintCallable)
    void AddFlagData(FDebugBtlAITempViewData Data);
    
};

