#pragma once
#include "CoreMinimal.h"
#include "BattleActorComponentBase.h"
#include "BtlParty.h"
#include "SkillCriticalValueOne.h"
#include "BattleAsyncTaskWorkComponent.generated.h"

class ABattleMainWorkBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UBattleAsyncTaskWorkComponent : public UBattleActorComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillCriticalValueOne> m_Result;
    
    UBattleAsyncTaskWorkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void MakeSettleCriticalWork(ABattleMainWorkBase* BattleMain, FBtlParty Player, TArray<FBtlParty> Enemy, TArray<FBtlParty> partyAll);
    
};

