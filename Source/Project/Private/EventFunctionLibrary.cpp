#include "EventFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UEventFunctionLibrary::UEventFunctionLibrary() {
}

void UEventFunctionLibrary::UseEventTemplate(const AActor* Actor) {
}

void UEventFunctionLibrary::TargetBinding(ALevelSequenceActor* Sequence, const FString& Name, AActor* Actor) {
}

void UEventFunctionLibrary::StartPlay(ALevelSequenceActor* Sequence) {
}

bool UEventFunctionLibrary::ShiseijyoTaoNoLeaveFlagProc(int32 DevilID) {
    return false;
}

void UEventFunctionLibrary::SetPlayTime(ALevelSequenceActor* Sequence, float Time) {
}

void UEventFunctionLibrary::SetPlayerDevilBaseParam(UPlayerMovementComponent* Comp, float velMin, float velMax, float fallen, float rotSpeed, float rotSpeedOnSpot, float Acceleration, float Deceleration, float stepupHeight) {
}

void UEventFunctionLibrary::SetNameEntry(const FString& first, const FString& second, bool bSwitch) {
}

void UEventFunctionLibrary::SetLightingChannels(UPrimitiveComponent* inComponent, bool bChannel0, bool bChannel1, bool bChannel2) {
}

void UEventFunctionLibrary::SetGameStartMode(E_GAME_START_MODE startMode) {
}

void UEventFunctionLibrary::SetEventMaxFrameTime(const AActor* Actor, float FrameTime) {
}

void UEventFunctionLibrary::SetEffectLOD(UParticleSystemComponent* obj, int32 LODSetting) {
}

void UEventFunctionLibrary::SetClearAlignment(E_ALIGNMENT Alignment) {
}

void UEventFunctionLibrary::SetAutoRead(bool AutoRead) {
}

void UEventFunctionLibrary::SetAllViewportRealtime(bool realtime) {
}

void UEventFunctionLibrary::SetAllActorHidden(ULevelStreaming* levelstr, bool hidden) {
}

UAnimSequence* UEventFunctionLibrary::SearchAnimSequence(const FString& InName) {
    return NULL;
}

void UEventFunctionLibrary::RestoreAllSequenceActor(const AActor* EventBase) {
}

void UEventFunctionLibrary::PlayFromAtomComponent(UAtomComponent* AtomComponent, float startTime) {
}

void UEventFunctionLibrary::PickUpKeyTime(ALevelSequenceActor* Sequence) {
}

void UEventFunctionLibrary::OpenSequenceWindow(ALevelSequenceActor* Sequence) {
}

void UEventFunctionLibrary::LevelUpWhenCreateEntryNkm(const int32 NkmIndex) {
}

void UEventFunctionLibrary::LevelTick(AActor* Actor) {
}

bool UEventFunctionLibrary::IsPlayerHaveSkill(int32 ID) {
    return false;
}

bool UEventFunctionLibrary::IsOriginalMovieResolution() {
    return false;
}

bool UEventFunctionLibrary::IsJpEdition() {
    return false;
}

bool UEventFunctionLibrary::IsCreationMode() {
    return false;
}

bool UEventFunctionLibrary::IsCompareClearAlignment(uint8 clearAlignment, E_ALIGNMENT Alignment) {
    return false;
}

bool UEventFunctionLibrary::IsClearAlignment(E_ALIGNMENT Alignment) {
    return false;
}

bool UEventFunctionLibrary::IsAlreadyHaveAogamiUtsusemi(int32 Amount) {
    return false;
}

bool UEventFunctionLibrary::IsAlreadyClearBossRushAll_OriginalMode(const TArray<int32>& encountIDs) {
    return false;
}

bool UEventFunctionLibrary::IsAlreadyClearBossRushAll_ChallengeMode(const TArray<FName>& clearFlags) {
    return false;
}

bool UEventFunctionLibrary::IsAlreadyClearBossRush(const int32& encountID) {
    return false;
}

bool UEventFunctionLibrary::IsActionCancelTrigger() {
    return false;
}

float UEventFunctionLibrary::GetVoiceAutoTime(const int32 StrLen) {
    return 0.0f;
}

TArray<FString> UEventFunctionLibrary::GetVoiceAssetNames(const FString& Filter) {
    return TArray<FString>();
}

int32 UEventFunctionLibrary::GetStrLenEvtDebug(const FString& checkStr) {
    return 0;
}

float UEventFunctionLibrary::GetSoundDuration(const USoundAtomCue* Cue) {
    return 0.0f;
}

USoundAtomCue* UEventFunctionLibrary::GetSoundData(const ALevelSequenceActor* Sequence, const FString& CueName) {
    return NULL;
}

bool UEventFunctionLibrary::GetShippingBuild() {
    return false;
}

FPostProcessSettings UEventFunctionLibrary::GetPostProcessSetting(FPostProcessSettings Setting, UCineCameraComponent* Camera) {
    return FPostProcessSettings{};
}

float UEventFunctionLibrary::GetPlayTime(ALevelSequenceActor* Sequence) {
    return 0.0f;
}

E_ALIGNMENT UEventFunctionLibrary::GetNowAlignment_NewRouteForce() {
    return E_ALIGNMENT::E_ALIGNMENT_NEUTRAL;
}

E_ALIGNMENT UEventFunctionLibrary::GetNowAlignment() {
    return E_ALIGNMENT::E_ALIGNMENT_NEUTRAL;
}

float UEventFunctionLibrary::GetMaxFPS() {
    return 0.0f;
}

float UEventFunctionLibrary::GetLinearLoop(float DeltaTime, bool Init, float LoopSeconds) {
    return 0.0f;
}

float UEventFunctionLibrary::GetLinear(float DeltaTime, bool Init, float EndSeconds) {
    return 0.0f;
}

TArray<FString> UEventFunctionLibrary::GetLevelVisible(bool IsVisible) {
    return TArray<FString>();
}

TArray<bool> UEventFunctionLibrary::GetInitCursorPositionIndex(const TArray<int32>& history, const int32 selIndex1, const int32 selIndex2, const int32 selIndex3, int32& Position, bool& Finish) {
    return TArray<bool>();
}

TArray<bool> UEventFunctionLibrary::GetInitCursorPositionEx(const TArray<FName>& history, const TArray<FName> select, int32& Position, bool& Finish) {
    return TArray<bool>();
}

TArray<bool> UEventFunctionLibrary::GetInitCursorPosition(const TArray<FName>& history, const FName select1, const FName select2, const FName select3, int32& Position, bool& Finish) {
    return TArray<bool>();
}

E_GAME_START_MODE UEventFunctionLibrary::GetGameStartMode() {
    return E_GAME_START_MODE::E_GAME_START_MODE_NEW_GAME;
}

FString UEventFunctionLibrary::GetEventVoice(const UScriptMessageAsset* Asset, int32 ID) {
    return TEXT("");
}

FText UEventFunctionLibrary::GetEventText(const UScriptMessageAsset* Asset, int32 ID, int32& line) {
    return FText::GetEmpty();
}

float UEventFunctionLibrary::GetEventMaxFrameTime(const AActor* Actor) {
    return 0.0f;
}

FString UEventFunctionLibrary::GetEventLevelName() {
    return TEXT("");
}

AActor* UEventFunctionLibrary::GetEventCtrl(const ULevelStreaming* levelstr) {
    return NULL;
}

AActor* UEventFunctionLibrary::GetEventBase(const ULevelStreaming* levelstr) {
    return NULL;
}

AActor* UEventFunctionLibrary::GetECSActorsThisLevel(const AActor* Actor) {
    return NULL;
}

int32 UEventFunctionLibrary::GetDebugAlignmentFlagPoint(bool isLaw) {
    return 0;
}

float UEventFunctionLibrary::GetCurveLoop(float DeltaTime, bool Init, float LoopSeconds) {
    return 0.0f;
}

float UEventFunctionLibrary::GetCurve(float DeltaTime, bool Init, float EndSeconds) {
    return 0.0f;
}

uint8 UEventFunctionLibrary::GetClearRound() {
    return 0;
}

FMovieSceneObjectBindingID UEventFunctionLibrary::GetBindingID(const ALevelSequenceActor* Sequence, const FString& Name) {
    return FMovieSceneObjectBindingID{};
}

bool UEventFunctionLibrary::GetAutoRead() {
    return false;
}

UAnimSequenceBase* UEventFunctionLibrary::GetAnimSequence(const ALevelSequenceActor* Sequence, const FString& Tag) {
    return NULL;
}

UAnimSequenceBase* UEventFunctionLibrary::GetAnimConv(const ALevelSequenceActor* Sequence, const FString& Tag, const FString& animName) {
    return NULL;
}

E_ALIGNMENT UEventFunctionLibrary::GetAlignmentBias_Old() {
    return E_ALIGNMENT::E_ALIGNMENT_NEUTRAL;
}

E_ALIGNMENT UEventFunctionLibrary::GetAlignmentBias_New() {
    return E_ALIGNMENT::E_ALIGNMENT_NEUTRAL;
}

E_ALIGNMENT UEventFunctionLibrary::GetAlignmentBias() {
    return E_ALIGNMENT::E_ALIGNMENT_NEUTRAL;
}

TArray<AActor*> UEventFunctionLibrary::GetActorsThisLevel(const AActor* Actor) {
    return TArray<AActor*>();
}

TArray<AActor*> UEventFunctionLibrary::GetActorsFromLevel(const ULevelStreaming* levelstr) {
    return TArray<AActor*>();
}

void UEventFunctionLibrary::EventScreenshot(const FString& Directory, const int32 fileIndex) {
}

void UEventFunctionLibrary::EventCameraStopShake(ACustomPlayerController* Controller, UMatineeCameraShake* inst, bool bImmediately) {
}

UMatineeCameraShake* UEventFunctionLibrary::EventCameraPlayShake(ACustomPlayerController* Controller, TSubclassOf<UMatineeCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot) {
    return NULL;
}

void UEventFunctionLibrary::EntryNkmForceParty(const TArray<int32>& devilIDs) {
}

void UEventFunctionLibrary::EntryNkmForce(const int32 DevilID) {
}

bool UEventFunctionLibrary::EntryBibleShiseijoTao() {
    return false;
}

void UEventFunctionLibrary::EndPlay(ALevelSequenceActor* Sequence) {
}

int32 UEventFunctionLibrary::CountAlreadyClearBossRush_OriginalMode(const TArray<int32>& encountIDs) {
    return 0;
}

int32 UEventFunctionLibrary::CountAlreadyClearBossRush_ChallengeMode(const TArray<FName>& clearFlags) {
    return 0;
}

void UEventFunctionLibrary::CheckPostProcessSettings(const FPostProcessSettings Setting) {
}

bool UEventFunctionLibrary::CheckNoTap_E0170(float nowX, float nowY, float defX, float defY) {
    return false;
}

bool UEventFunctionLibrary::CheckEventScope_E0170(FVector2D Pos, FVector2D Min, FVector2D Max) {
    return false;
}

float UEventFunctionLibrary::CheckEventEmitterRate(const float rate) {
    return 0.0f;
}

bool UEventFunctionLibrary::CheckEventActive_E0170(FVector2D Pos) {
    return false;
}

bool UEventFunctionLibrary::CheckClass(const AActor* Actor, TSubclassOf<AActor> ActorClass) {
    return false;
}

void UEventFunctionLibrary::CheckAogamiUtsusemiTalkIcon() {
}

bool UEventFunctionLibrary::CheckAllSequenceActorLoaded(const AActor* EventBase) {
    return false;
}

bool UEventFunctionLibrary::CheckActorBegunPlay(const AActor* Actor) {
    return false;
}

void UEventFunctionLibrary::ChangeAtomOnly2DSound(UAtomComponent* AtomComponent, bool bOnly2DSound) {
}

void UEventFunctionLibrary::AllBinding(const FString& Name, AActor* Actor) {
}

void UEventFunctionLibrary::AddEventTrack_PlaySE(ALevelSequenceActor* Sequence) {
}

void UEventFunctionLibrary::AddClearRound() {
}


