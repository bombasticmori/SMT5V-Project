#pragma once
#include "CoreMinimal.h"
#include "BtlCommandWidgetBase.h"
#include "BtlParty.h"
#include "BtlSubCommandUIData.h"
#include "BtlSubCommandWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UBtlSubCommandWidgetBase : public UBtlCommandWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBtlSubCommandUIData> m_CommandUIDataArray;
    
public:
    UBtlSubCommandWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Setting(FBtlParty PartyData, bool isUseCharaChange, bool isCounter, bool isList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakePlayerListCommand(bool isChangeCharaUse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakePlayerCommand(bool isChangeCharaUse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeNkmListCommand(bool isChangeCharaUse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeNkmCommand(bool isChangeCharaUse);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MakeCounterListCommand(bool isChangeCharaUse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBtlSubCommandUIData> GetCommandUIDataArray();
    
private:
    UFUNCTION(BlueprintCallable)
    void CreateCommandData(bool isList, bool isPlayer, bool isCounter, bool isChangeCharaUse);
    
    UFUNCTION(BlueprintCallable)
    void AddCommandUIData(FBtlSubCommandUIData Data);
    
};

