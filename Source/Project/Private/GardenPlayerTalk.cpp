#include "GardenPlayerTalk.h"

UGardenPlayerTalk::UGardenPlayerTalk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ChosenRepeatableTalkIndex = -1;
}

bool UGardenPlayerTalk::HasPowerUpTalkQueued() {
    return false;
}

bool UGardenPlayerTalk::HasPlayOnceTalkQueued() {
    return false;
}

int32 UGardenPlayerTalk::EvaluatePlayerPowerUpAmount(UObject* WorldContextObject) {
    return 0;
}

void UGardenPlayerTalk::BuildPlayerTalkData(UObject* WorldContextObject, E_RYUKETSU_GARDEN_TYPE GardenType) {
}


