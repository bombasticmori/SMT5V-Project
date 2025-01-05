#include "BattlePlaceInFieldComponent.h"

UBattlePlaceInFieldComponent::UBattlePlaceInFieldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_IsSuccess = false;
    this->m_IsFinished = false;
    this->m_IsReplace = false;
}

void UBattlePlaceInFieldComponent::MakeRePlaceWorkFree(int32 rimitX, int32 rimitY, TArray<FBattleUnitPlaceOne> unitArray) {
}

void UBattlePlaceInFieldComponent::MakeNewPlaceWorkFree(int32 rimitX, int32 rimitY, TArray<FBattleUnitPlaceOne> unitArray) {
}

void UBattlePlaceInFieldComponent::MakeNewPlaceWork(E_BTL_FIELD_TYPE Type, TArray<FBattleUnitPlaceOne> unitArray) {
}


