#include "MapSymbolComponentCPP.h"

UMapSymbolComponentCPP::UMapSymbolComponentCPP(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_ActCounter = 0.00f;
    this->m_ActCounterEnd = 0.00f;
    this->m_SmallActCounter = 0.00f;
    this->m_SmallActCounterEnd = 0.00f;
    this->m_IsMove_PrevFrame = false;
    this->m_DeltaSec = 0.00f;
    this->m_DeltaSecAfterMove = 0.00f;
    this->m_SelfActor = NULL;
    this->m_PlayerActor = NULL;
    this->m_CollisionRadius = 0.00f;
    this->m_EncountCollisionSizeX = 0.00f;
    this->m_DeltaTime_ForMinimap = 0.00f;
    this->m_SpaceWhenSpawning = 0.00f;
    this->m_UniqueSymbolBGM = false;
}

void UMapSymbolComponentCPP::UpdateSomeTimes_cpp() {
}

void UMapSymbolComponentCPP::UpdateMotionBlendCounter_cpp() {
}

void UMapSymbolComponentCPP::UpdateLocationInfo(const UObject* WorldContextObject) {
}

void UMapSymbolComponentCPP::UpdateAttackMotionCounter_cpp() {
}

void UMapSymbolComponentCPP::UpdateActCounter() {
}

void UMapSymbolComponentCPP::TraceStickWall_cpp(FVector moveDir, float moveLength, int32 traceFrameCount, FName CollisionProfileName, bool ground, FVector HitNormal, FVector symbolSize, float climbableHeight, float collisionHeight, TEnumAsByte<EDrawDebugTrace::Type> drawDebugTrace, bool& out_hit, FVector& out_hitLocation, float& out_canMoveLength, bool& out_beginningHit) {
}

void UMapSymbolComponentCPP::StartMotionBlendCounter_cpp(float endSec) {
}

void UMapSymbolComponentCPP::StartAttackMotionCounter_cpp(float endSec) {
}

void UMapSymbolComponentCPP::SetNextRotation(FRotator Rotation) {
}

void UMapSymbolComponentCPP::SetNextLocation(FVector Location) {
}

void UMapSymbolComponentCPP::ReserveAsyncLineTrace_Implementation(const TArray<FHitResult>& HitResult) {
}







float UMapSymbolComponentCPP::GetSpaceWhenSpawning() {
    return 0.0f;
}

FRotator UMapSymbolComponentCPP::GetPrevRotation() {
    return FRotator{};
}

FVector UMapSymbolComponentCPP::GetPrevLocation() {
    return FVector{};
}

TArray<ACustomPawn*> UMapSymbolComponentCPP::GetNearSymbols() {
    return TArray<ACustomPawn*>();
}

float UMapSymbolComponentCPP::GetMotionBlendCounterEnd_cpp() {
    return 0.0f;
}

float UMapSymbolComponentCPP::GetMotionBlendAlpha_cpp() {
    return 0.0f;
}

float UMapSymbolComponentCPP::GetDeltaSecAfterMove() {
    return 0.0f;
}

int32 UMapSymbolComponentCPP::ConvertDevilLevel(int32 DevilID) {
    return 0;
}

bool UMapSymbolComponentCPP::CheckUniqueSymbolBGM() {
    return false;
}

bool UMapSymbolComponentCPP::CheckSomeTimes_Short_cpp() {
    return false;
}

bool UMapSymbolComponentCPP::CheckSomeTimes_Long_cpp() {
    return false;
}

bool UMapSymbolComponentCPP::CheckSomeTimes_cpp() {
    return false;
}

bool UMapSymbolComponentCPP::CheckRender() {
    return false;
}

bool UMapSymbolComponentCPP::CheckAttackMotionCounterEnd_cpp() {
    return false;
}

void UMapSymbolComponentCPP::CalcSlope_cpp(float Slope, FVector HitNormal, float climbableHeight, float CollisionRadius, float collisionHeight, FName CollisionProfileName, TEnumAsByte<EDrawDebugTrace::Type> drawDebugTrace, bool willMove, bool& out_move, FVector& out_deltaMove, float& out_adjustMin, float& out_adjustMax) {
}

void UMapSymbolComponentCPP::CalcRouteCore(TArray<FMapSymbolRouteNode> routeNodeList, FVector StartLoc, FVector goalLoc, FName CollisionProfileName, float routeNodeSpace, float Radius, bool Fly, bool& Success, TArray<FVector>& resultRoute, FHitResult& straightHit) {
}

void UMapSymbolComponentCPP::CalcNextLocation_StickWall_cpp(FName CollisionProfileName, bool ground, FVector HitNormal, int32 traceFrameCount, FVector symbolSize, float climbableHeight, float collisionHeight, TEnumAsByte<EDrawDebugTrace::Type> drawDebugTrace, bool& out_hit, FVector& out_wallLocation, FVector& out_deltaMove) {
}

void UMapSymbolComponentCPP::Calc_ShouldChangeDir_NearbySymbols(bool isTarget, FVector target, bool& ShouldChange, FVector& TargetVec, float DevilLength, float PlayerLength) {
}

void UMapSymbolComponentCPP::AsyncLineTrace(FVector StartPos, FVector goalPos, TEnumAsByte<ECollisionChannel> Channel) {
}

void UMapSymbolComponentCPP::AddNextLocation(FVector Add) {
}

void UMapSymbolComponentCPP::AddDeltaSecAfterMove(float deltaSec) {
}


