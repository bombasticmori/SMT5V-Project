#pragma once
#include "CoreMinimal.h"
#include "BtlCommandWidgetBase.h"
#include "BtlMainCommandUIData.h"
#include "BtlParty.h"
#include "BtlMainCommandWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UBtlMainCommandWidgetBase : public UBtlCommandWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBtlMainCommandUIData> m_CommandUIDataArray;
    
public:
    UBtlMainCommandWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Setting(FBtlParty PartyData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakePlayerCommandData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeNkmCommandData(int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsUseItemCommand();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBtlMainCommandUIData> GetCommandUIDataArray();
    
private:
    UFUNCTION(BlueprintCallable)
    void AddCommandUIData(FBtlMainCommandUIData Data);
    
};

