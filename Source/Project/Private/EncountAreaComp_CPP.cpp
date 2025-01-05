#include "EncountAreaComp_CPP.h"

UEncountAreaComp_CPP::UEncountAreaComp_CPP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UEncountAreaComp_CPP::SetNeedData(float SpaceWhenSpawning) {
}

float UEncountAreaComp_CPP::GetSpaceWhenSpawning() {
    return 0.0f;
}

int32 UEncountAreaComp_CPP::ConvertDevilLevel(int32 PrevLevel) {
    return 0;
}

bool UEncountAreaComp_CPP::CheckSpaceWhenSpawning(const UObject* WorldContextObject, FVector spawnPos) {
    return false;
}

void UEncountAreaComp_CPP::CalcSpawnPointList_Spline(USplineComponent* splineComp, TArray<int32> spawnKeyList, float Space) {
}

void UEncountAreaComp_CPP::CalcSpawnPointList_Box(FVector BoxSize, float Space, TArray<AActor*> addPointActors, bool addPointOnly) {
}


