#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "BtlParty.h"
#include "BtlResultData.h"
#include "ResultData.h"
#include "BattleResultActorComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UBattleResultActorComponentBase : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResultData m_NewReslutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EXPRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MakkaRate;
    
public:
    UBattleResultActorComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetResultData(const FBtlResultData& oldResultData);
    
    UFUNCTION(BlueprintCallable)
    bool SetPlayerPartyIndex(UPARAM(Ref) TArray<FBtlParty>& partyArray, UPARAM(Ref) TArray<int32>& panelorder);
    
    UFUNCTION(BlueprintCallable)
    void SetMakkaRate(int32 rate);
    
    UFUNCTION(BlueprintCallable)
    void SetExpRate(int32 rate);
    
    UFUNCTION(BlueprintCallable)
    FBtlResultData ClearResultData(FBtlResultData& src);
    
    UFUNCTION(BlueprintCallable)
    void BattleDataApllyPartyOne(FBtlParty& src);
    
    UFUNCTION(BlueprintCallable)
    void BattleDataApllyPartyData(UPARAM(Ref) TArray<FBtlParty>& partyArray);
    
};

