#include "SsPlayerComponent.h"

USsPlayerComponent::USsPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bCanEverAffectNavigation = false;
    this->bUseAsOccluder = false;
    this->CastShadow = false;
    this->SsProject = NULL;
    this->bAutoUpdate = true;
    this->bAutoPlay = true;
    this->AutoPlayAnimPackIndex = 0;
    this->AutoPlayAnimationIndex = 0;
    this->AutoPlayStartFrame = 0;
    this->AutoPlayRate = 1.00f;
    this->AutoPlayLoopCount = 0;
    this->bAutoPlayRoundTrip = false;
    this->bAutoPlayFlipH = false;
    this->bAutoPlayFlipV = false;
    this->RenderMode = ESsPlayerComponentRenderMode::Default;
    this->PixelDepthOffsetPerPart = 0.01f;
    this->OffScreenPlaneMID = NULL;
    this->UUPerPixel = 0.30f;
    this->SsBoundsScale = 2.00f;
}

void USsPlayerComponent::UpdatePlayer(float DeltaSeconds) {
}

void USsPlayerComponent::SetRoundTrip(bool bInRoundTrip) {
}

void USsPlayerComponent::SetPlayRate(float InRate) {
}

void USsPlayerComponent::SetPlayFrame(float Frame) {
}

void USsPlayerComponent::SetLoopCount(int32 InLoopCount) {
}

void USsPlayerComponent::SetFlipV(bool InFlipV) {
}

void USsPlayerComponent::SetFlipH(bool InFlipH) {
}

bool USsPlayerComponent::Resume() {
    return false;
}

void USsPlayerComponent::RemoveTextureReplacementByIndex(int32 PartIndex) {
}

void USsPlayerComponent::RemoveTextureReplacementAll() {
}

void USsPlayerComponent::RemoveTextureReplacement(FName PartName) {
}

void USsPlayerComponent::RemoveMaterialReplacementPerBlendMode(EAlphaBlendType AlphaBlendMode, EColorBlendType ColorBlendMode) {
}

void USsPlayerComponent::RemoveMaterialReplacementByIndex(int32 PartIndex) {
}

void USsPlayerComponent::RemoveMaterialReplacementAllPerBlendMode() {
}

void USsPlayerComponent::RemoveMaterialReplacementAll() {
}

void USsPlayerComponent::RemoveMaterialReplacement(FName PartName) {
}

bool USsPlayerComponent::PlayByIndex(int32 AnimPackIndex, int32 AnimationIndex, int32 StartFrame, float PlayRate, int32 LoopCount, bool bRoundTrip) {
    return false;
}

bool USsPlayerComponent::Play(FName AnimPackName, FName AnimationName, int32 StartFrame, float PlayRate, int32 LoopCount, bool bRoundTrip) {
    return false;
}

void USsPlayerComponent::Pause() {
}

bool USsPlayerComponent::IsRoundTrip() const {
    return false;
}

bool USsPlayerComponent::IsPlaying() const {
    return false;
}

UTexture* USsPlayerComponent::GetRenderTarget() {
    return NULL;
}

float USsPlayerComponent::GetPlayRate() const {
    return 0.0f;
}

void USsPlayerComponent::GetPlayingAnimationName(FName& OutAnimPackName, FName& OutAnimationName) const {
}

void USsPlayerComponent::GetPlayingAnimationIndex(int32& OutAnimPackIndex, int32& OutAnimationIndex) const {
}

float USsPlayerComponent::GetPlayFrame() const {
    return 0.0f;
}

FName USsPlayerComponent::GetPartColorLabelByIndex(int32 PartIndex) {
    return NAME_None;
}

FName USsPlayerComponent::GetPartColorLabel(FName PartName) {
    return NAME_None;
}

bool USsPlayerComponent::GetPartAttachTransform(int32 PartIndex, FTransform& OutTransform) const {
    return false;
}

int32 USsPlayerComponent::GetNumAnimPacks() const {
    return 0;
}

int32 USsPlayerComponent::GetNumAnimationsByIndex(int32 AnimPackIndex) const {
    return 0;
}

int32 USsPlayerComponent::GetNumAnimations(FName AnimPackName) const {
    return 0;
}

int32 USsPlayerComponent::GetLoopCount() const {
    return 0;
}

bool USsPlayerComponent::GetFlipV() const {
    return false;
}

bool USsPlayerComponent::GetFlipH() const {
    return false;
}

void USsPlayerComponent::AddTextureReplacementByIndex(int32 PartIndex, UTexture* Texture) {
}

void USsPlayerComponent::AddTextureReplacement(FName PartName, UTexture* Texture) {
}

void USsPlayerComponent::AddMaterialReplacementPerBlendMode(EAlphaBlendType AlphaBlendMode, EColorBlendType ColorBlendMode, UMaterialInterface* InBaseMaterial) {
}

void USsPlayerComponent::AddMaterialReplacementByIndex(int32 PartIndex, UMaterialInterface* InBaseMaterial) {
}

void USsPlayerComponent::AddMaterialReplacement(FName PartName, UMaterialInterface* InBaseMaterial) {
}


