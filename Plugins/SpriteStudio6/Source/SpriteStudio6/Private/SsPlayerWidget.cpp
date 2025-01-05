#include "SsPlayerWidget.h"
#include "SlateCore.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EWidgetClipping -FallbackName=EWidgetClipping

USsPlayerWidget::USsPlayerWidget() {
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->OffScreenMID = NULL;
    this->OffScreenRenderTarget = NULL;
    this->SsProject = NULL;
    this->bAutoUpdate = true;
    this->bAutoPlay = true;
    this->AutoPlayAnimPackIndex = 0;
    this->AutoPlayAnimationIndex = 0;
    this->AutoPlayStartFrame = 0;
    this->AutoPlayRate = 1.00f;
    this->AutoPlayLoopCount = 0;
    this->bAutoPlayRoundTrip = false;
    this->bDontUpdateIfHidden = false;
    this->bTickableWhenPaused = true;
    this->bEnableBGAnim = false;
    this->bRenderBGAnimToFront = false;
    this->InstanceRandomWaitMin = 0.00f;
    this->InstanceRandomWaitMax = 0.00f;
    this->RenderMode = ESsPlayerWidgetRenderMode::UMG_Default;
    this->bReflectParentAlpha = false;
    this->bScissor = false;
}

void USsPlayerWidget::UpdatePlayer(float DeltaSeconds) {
}

void USsPlayerWidget::SetRoundTrip(bool bInRoundTrip) {
}

void USsPlayerWidget::SetPlayRate(float InRate) {
}

void USsPlayerWidget::SetPlayFrame(float Frame) {
}

void USsPlayerWidget::SetLoopCount(int32 InLoopCount) {
}

void USsPlayerWidget::SetInstancePartPlayFrame(FName PartName, float Frame) {
}

void USsPlayerWidget::SetFlipV(bool InFlipV) {
}

void USsPlayerWidget::SetFlipH(bool InFlipH) {
}

void USsPlayerWidget::SetCanSlateTick(bool bInCanTick) {
}

bool USsPlayerWidget::Resume() {
    return false;
}

void USsPlayerWidget::RemoveTextureReplacementByIndex(int32 PartIndex) {
}

void USsPlayerWidget::RemoveTextureReplacementAll() {
}

void USsPlayerWidget::RemoveTextureReplacement(FName PartName) {
}

void USsPlayerWidget::RemoveMaterialReplacementPerBlendMode(EAlphaBlendType AlphaBlendMode, EColorBlendType ColorBlendMode) {
}

void USsPlayerWidget::RemoveMaterialReplacementByIndex(int32 PartIndex) {
}

void USsPlayerWidget::RemoveMaterialReplacementAllPerBlendMode() {
}

void USsPlayerWidget::RemoveMaterialReplacementAll() {
}

void USsPlayerWidget::RemoveMaterialReplacement(FName PartName) {
}

bool USsPlayerWidget::PlayByIndex(int32 AnimPackIndex, int32 AnimationIndex, int32 StartFrame, float PlayRate, int32 LoopCount, bool bRoundTrip) {
    return false;
}

bool USsPlayerWidget::Play(FName AnimPackName, FName AnimationName, int32 StartFrame, float PlayRate, int32 LoopCount, bool bRoundTrip) {
    return false;
}

void USsPlayerWidget::Pause() {
}

bool USsPlayerWidget::IsRoundTrip() const {
    return false;
}

bool USsPlayerWidget::IsPlaying() const {
    return false;
}

UTexture* USsPlayerWidget::GetRenderTarget() {
    return NULL;
}

float USsPlayerWidget::GetPlayRate() const {
    return 0.0f;
}

void USsPlayerWidget::GetPlayingAnimationName(FName& OutAnimPackName, FName& OutAnimationName) const {
}

void USsPlayerWidget::GetPlayingAnimationIndex(int32& OutAnimPackIndex, int32& OutAnimationIndex) const {
}

float USsPlayerWidget::GetPlayFrame() const {
    return 0.0f;
}

bool USsPlayerWidget::GetPartTransformByIndex(int32 PartIndex, FVector2D& OutPosition, float& OutAngle, FVector2D& OutScale) const {
    return false;
}

bool USsPlayerWidget::GetPartTransform(FName PartName, FVector2D& OutPosition, float& OutAngle, FVector2D& OutScale) const {
    return false;
}

int32 USsPlayerWidget::GetPartIndexFromName(FName InPartName) {
    return 0;
}

FName USsPlayerWidget::GetPartColorLabelByIndex(int32 PartIndex) {
    return NAME_None;
}

FName USsPlayerWidget::GetPartColorLabel(FName PartName) {
    return NAME_None;
}

int32 USsPlayerWidget::GetNumAnimPacks() const {
    return 0;
}

int32 USsPlayerWidget::GetNumAnimationsByIndex(int32 AnimPackIndex) const {
    return 0;
}

int32 USsPlayerWidget::GetNumAnimations(FName AnimPackName) const {
    return 0;
}

int32 USsPlayerWidget::GetLoopCount() const {
    return 0;
}

float USsPlayerWidget::GetInstancePartPlayFrame(FName PartName) const {
    return 0.0f;
}

bool USsPlayerWidget::GetFlipV() const {
    return false;
}

bool USsPlayerWidget::GetFlipH() const {
    return false;
}

bool USsPlayerWidget::GetCanSlateTick() const {
    return false;
}

void USsPlayerWidget::AddTextureReplacementByIndex(int32 PartIndex, UTexture* Texture) {
}

void USsPlayerWidget::AddTextureReplacement(FName PartName, UTexture* Texture) {
}

void USsPlayerWidget::AddMaterialReplacementPerBlendMode(EAlphaBlendType AlphaBlendMode, EColorBlendType ColorBlendMode, UMaterialInterface* InBaseMaterial) {
}

void USsPlayerWidget::AddMaterialReplacementByIndex(int32 PartIndex, UMaterialInterface* InBaseMaterial) {
}

void USsPlayerWidget::AddMaterialReplacement(FName PartName, UMaterialInterface* InBaseMaterial) {
}


