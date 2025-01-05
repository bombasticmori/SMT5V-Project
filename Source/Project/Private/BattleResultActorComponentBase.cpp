#include "BattleResultActorComponentBase.h"

UBattleResultActorComponentBase::UBattleResultActorComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_EXPRate = 1;
    this->m_MakkaRate = 1;
}

void UBattleResultActorComponentBase::SetResultData(const FBtlResultData& oldResultData) {
}

bool UBattleResultActorComponentBase::SetPlayerPartyIndex(TArray<FBtlParty>& partyArray, TArray<int32>& panelorder) {
    return false;
}

void UBattleResultActorComponentBase::SetMakkaRate(int32 rate) {
}

void UBattleResultActorComponentBase::SetExpRate(int32 rate) {
}

FBtlResultData UBattleResultActorComponentBase::ClearResultData(FBtlResultData& src) {
    return FBtlResultData{};
}

void UBattleResultActorComponentBase::BattleDataApllyPartyOne(FBtlParty& src) {
}

void UBattleResultActorComponentBase::BattleDataApllyPartyData(TArray<FBtlParty>& partyArray) {
}


