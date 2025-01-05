#include "BattleAsyncTaskWorkComponent.h"

UBattleAsyncTaskWorkComponent::UBattleAsyncTaskWorkComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_IsFinished = false;
}

void UBattleAsyncTaskWorkComponent::MakeSettleCriticalWork(ABattleMainWorkBase* BattleMain, FBtlParty Player, TArray<FBtlParty> Enemy, TArray<FBtlParty> partyAll) {
}


