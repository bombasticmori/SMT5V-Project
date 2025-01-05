#include "BattleCamActorFactoryBase.h"

UBattleCamActorFactoryBase::UBattleCamActorFactoryBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UBattleCamActorFactoryBase::IsRangeSkillCamera_Native(FString& CameraName) {
    return false;
}

void UBattleCamActorFactoryBase::CalcUnitSocketLocation_Native(FTransform& PartyTrans, FVector& LocalSocketLoc, float RelativeLocZ, FVector& OutRoot, FVector& OutSocketLoc) {
}


