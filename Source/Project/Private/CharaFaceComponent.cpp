#include "CharaFaceComponent.h"
#include "CharaExpressionTable.h"
UCharaFaceComponent::UCharaFaceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Index = 0;
    this->ExpressionTable = NULL;
    this->SlotName = TEXT("ExpressionSlot");
}

bool UCharaFaceComponent::UseExpressionEx(FName ExpressionID) {
    return false;
}

void UCharaFaceComponent::Update(float DeltaTime, UAnimInstance* AnimInstance, UCustomPoseWeightTable* PoseWeightTable) {
}

void UCharaFaceComponent::StopLipSync() {
}

void UCharaFaceComponent::StopBlink(bool Reset, float Duration, float BlendInTime, float BlendOutTime) {
}

void UCharaFaceComponent::PlayLipSync(const UCharaLipSync* LipSync, bool Loop, float BlendInTime, float BlendOutTime) {
}

void UCharaFaceComponent::PlayBlink(const UCharaBlink* Blink, bool Loop, float BlendInTime, float BlendOutTime) {
}

float UCharaFaceComponent::GetLipExpressionAttenuate() const {
    return 0.0f;
}

float UCharaFaceComponent::GetLidExpressionAttenuate() const {
    return 0.0f;
}

TSoftObjectPtr<UTexture> UCharaFaceComponent::GetExpressionEx(FName ExpressionID, int32 Type, float& OpacityL, float& OpacityR) {
    return NULL;
}

E_CHARA_LIP_ID UCharaFaceComponent::GetCurrentLipID() const {
    return E_CHARA_LIP_ID::DEFAULT;
}

E_CHARA_LID_ID UCharaFaceComponent::GetCurrentLidID() const {
    return E_CHARA_LID_ID::DEFAULT;
}

FName UCharaFaceComponent::GetCurrentExpressionID() const {
    return NAME_None;
}

void UCharaFaceComponent::ClearLip() {
}

void UCharaFaceComponent::ClearLid() {
}

void UCharaFaceComponent::ClearExpression() {
}

void UCharaFaceComponent::ChangeLip(E_CHARA_LIP_ID LipID, float Duration, float BlendInTime, float BlendOutTime) {
}

void UCharaFaceComponent::ChangeLid(E_CHARA_LID_ID LidID, float Duration, float BlendInTime, float BlendOutTime) {
}

void UCharaFaceComponent::ChangeExpression(FName ExpressionID, float BlendTimeOverride) {
}

void UCharaFaceComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
}

void UCharaFaceComponent::Activate(bool bReset)
{
}

void UCharaFaceComponent::Deactivate()
{
}

bool UCharaFaceComponent::IsReadyForOwnerToAutoDestroy() const
{
	return false;
}

void UCharaFaceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
}

bool UCharaFaceComponent::IsPostLoadThreadSafe() const
{
	return false;
}