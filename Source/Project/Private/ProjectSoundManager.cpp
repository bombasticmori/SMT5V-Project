#include "ProjectSoundManager.h"

UProjectSoundManager::UProjectSoundManager() {
    this->CursorSE = NULL;
    this->DecideSE = NULL;
    this->CancelSE = NULL;
    this->ErrorSE = NULL;
    this->ActionWindowOpenSE = NULL;
    this->ActionWindowCloseSE = NULL;
    this->ActionWindowDecideSE = NULL;
    this->MessageSkipSE = NULL;
    this->BattleCursorSE = NULL;
    this->BattleCursor2SE = NULL;
    this->BattleDecideSE = NULL;
    this->BattleDecide2SE = NULL;
    this->BattleCancelSE = NULL;
    this->CursorSEComp = NULL;
    this->DecideSEComp = NULL;
    this->CancelSEComp = NULL;
    this->ErrorSEComp = NULL;
    this->ActionWindowOpenComp = NULL;
    this->ActionWindowCloseComp = NULL;
    this->ActionWindowDecideComp = NULL;
    this->MessageSkipComp = NULL;
    this->BattleCursorSEComp = NULL;
    this->BattleCursor2SEComp = NULL;
    this->BattleDecideSEComp = NULL;
    this->BattleDecide2SEComp = NULL;
    this->BattleCancelSEComp = NULL;
    this->DevilVoiceAssetMap = NULL;
    this->CurrentBGM = NULL;
    this->NextBGM = NULL;
    this->MapCrisisBGM = NULL;
    this->QuestMapBGM = NULL;
    this->CoasterBGM = NULL;
    this->CurrentMainENV = NULL;
    this->CurrentSubENV = NULL;
    this->NotPriorityMainENV = NULL;
    this->NotPrioritySubENV = NULL;
    this->MapUniqueFuncCounter = 0;
    this->ListenerActor = NULL;
}

void UProjectSoundManager::StopPriorityENV(float FadeTime) {
}

void UProjectSoundManager::StopPriorityBGM(EFadeType FadeType, float FadeTime, bool bForceReplay) {
}

void UProjectSoundManager::StopCategory(EGameVolumeCategory InCategory) {
}

void UProjectSoundManager::StopBGM(EBgmScene Scene, EFadeoutType FadeType) {
}

void UProjectSoundManager::StopBattleSubSound() {
}

void UProjectSoundManager::StopAllSkillSE() {
}

void UProjectSoundManager::StartEncountEffect() {
}

void UProjectSoundManager::SetVoiceStop_BattleSub1(bool bStop) {
}

void UProjectSoundManager::SetSubENVRate(float InRate) {
}

void UProjectSoundManager::SetSubENV(USoundAtomCue* Cue) {
}

void UProjectSoundManager::SetQuestMapBGM(USoundAtomCue* Cue) {
}

void UProjectSoundManager::SetOptionVolume(EOptionVolumeCategory category, float Volume) {
}

void UProjectSoundManager::SetOnCategoryAisac(FName InCategory, FName InAisac) {
}

void UProjectSoundManager::SetOffCategoryAisac(FName InCategory, FName InAisac, bool bIgnoreWarning) {
}

void UProjectSoundManager::SetMasterVolume(float Volume) {
}

void UProjectSoundManager::SetMapTopCameraMode(bool bin) {
}

void UProjectSoundManager::SetMainENV(USoundAtomCue* Cue) {
}

void UProjectSoundManager::SetListenerActor(AActor* InListenerActor) {
}

void UProjectSoundManager::SetGardenMode(bool bin) {
}

void UProjectSoundManager::SetGameVolume(EGameVolumeCategory category, float Volume, float FadeValuePerSecond) {
}

void UProjectSoundManager::SetFieldBGMVolume(float Volume, float FadeTime) {
}

void UProjectSoundManager::SetCoasterBGM(USoundAtomCue* Cue) {
}

void UProjectSoundManager::SetBGMSelectorLabel(EBgmScene Scene, const FString& Selector, const FString& Label) {
}

void UProjectSoundManager::SetBGMScene(EBgmScene Scene, EFadeType FadeType, bool bForceReplay) {
}

void UProjectSoundManager::SetBGMRequestPosition(float InStartPositionSeconds) {
}

void UProjectSoundManager::SetBGM(EBgmScene Scene, USoundAtomCue* Cue, EFadeType FadeType, bool bForceReplay) {
}

void UProjectSoundManager::SetBattleSubMute(bool bMute, bool bFade) {
}

void UProjectSoundManager::SetBattleSub3Mute(bool bMute, bool bFade) {
}

void UProjectSoundManager::SetBattleSub2Mute(bool bMute, bool bFade) {
}

void UProjectSoundManager::ResumeENV() {
}

void UProjectSoundManager::ResumeBGM() {
}

void UProjectSoundManager::ResetPerGame() {
}

void UProjectSoundManager::ResetGameVolume(bool bImmediately) {
}

void UProjectSoundManager::ResetBGMSelectorLabel(EBgmScene Scene) {
}

void UProjectSoundManager::PrintSoundVerbose(const FString& inString, bool bVeryVerbose) {
}

void UProjectSoundManager::PreTerminateBattleScene() {
}

void UProjectSoundManager::PlaySystemSE(ESystemSE SE) {
}

void UProjectSoundManager::PlayPriorityENV(USoundAtomCue* Cue, float FadeTime, bool bForceReplay) {
}

void UProjectSoundManager::PlayPriorityBGM(USoundAtomCue* Cue, EFadeType FadeType, float FadeTime, bool bForceReplay) {
}

void UProjectSoundManager::PlayerPawnOperational() {
}

void UProjectSoundManager::PauseENV() {
}

void UProjectSoundManager::PauseBGM() {
}

void UProjectSoundManager::OutReverbArea(EReverbType ReverbType, int32 Priority) {
}

void UProjectSoundManager::OnEndPlay() {
}

void UProjectSoundManager::OnBeginPlay() {
}

bool UProjectSoundManager::IsPlayingPriorityENV() const {
    return false;
}

bool UProjectSoundManager::IsPlayingPriorityBGM() const {
    return false;
}

bool UProjectSoundManager::IsPlayingMapCrisisBGM() const {
    return false;
}

void UProjectSoundManager::InReverbArea(EReverbType ReverbType, int32 Priority) {
}

void UProjectSoundManager::IncrementDefaultAttenuationRefCnt() {
}

USoundAtomCue* UProjectSoundManager::GetQuestMapBGM() const {
    return NULL;
}

float UProjectSoundManager::GetOptionVolumeDefault(EOptionVolumeCategory category) const {
    return 0.0f;
}

float UProjectSoundManager::GetOptionVolume(EOptionVolumeCategory category) const {
    return 0.0f;
}

float UProjectSoundManager::GetMasterVolume() const {
    return 0.0f;
}

FVector UProjectSoundManager::GetListenerLocation() const {
    return FVector{};
}

float UProjectSoundManager::GetGameVolume(EGameVolumeCategory category) const {
    return 0.0f;
}

UDevilVoiceAssetMap* UProjectSoundManager::GetDevilVoiceAssetMap() const {
    return NULL;
}

USoundAtomCue* UProjectSoundManager::GetCurrentSubENV() const {
    return NULL;
}

USoundAtomCue* UProjectSoundManager::GetCurrentMainENV() const {
    return NULL;
}

USoundAtomCue* UProjectSoundManager::GetCurrentBGM() const {
    return NULL;
}

EBgmScene UProjectSoundManager::GetBGMScene() const {
    return EBgmScene::Map;
}

UAtomComponent* UProjectSoundManager::GetBGMComponent() const {
    return NULL;
}

USoundAtomCue* UProjectSoundManager::GetBGM(EBgmScene Scene) {
    return NULL;
}

float UProjectSoundManager::GetAttenationVolumeMultiply() const {
    return 0.0f;
}

UProjectSoundManager* UProjectSoundManager::Get(const UObject* WorldContextObject) {
    return NULL;
}

void UProjectSoundManager::ForceStopENV(float FadeTime) {
}

void UProjectSoundManager::EndMapCrisisBGM() {
}

void UProjectSoundManager::EndEncountEffect() {
}

void UProjectSoundManager::DecrementDefaultAttenuationRefCnt() {
}

void UProjectSoundManager::BeginMapCrisisBGM(USoundAtomCue* InCue) {
}


