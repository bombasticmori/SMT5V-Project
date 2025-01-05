#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraShakePlaySpace -FallbackName=ECameraShakePlaySpace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovieScene.h"
#include "E_ALIGNMENT.h"
#include "E_GAME_START_MODE.h"
#include "Templates/SubclassOf.h"
#include "EventFunctionLibrary.generated.h"

class AActor;
class ACustomPlayerController;
class ALevelSequenceActor;
class UAnimSequence;
class UAnimSequenceBase;
class UAtomComponent;
class UCineCameraComponent;
class ULevelStreaming;
class UMatineeCameraShake;
class UParticleSystemComponent;
class UPlayerMovementComponent;
class UPrimitiveComponent;
class UScriptMessageAsset;
class USoundAtomCue;

UCLASS(Blueprintable)
class PROJECT_API UEventFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEventFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UseEventTemplate(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void TargetBinding(ALevelSequenceActor* Sequence, const FString& Name, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void StartPlay(ALevelSequenceActor* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static bool ShiseijyoTaoNoLeaveFlagProc(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayTime(ALevelSequenceActor* Sequence, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerDevilBaseParam(UPlayerMovementComponent* Comp, float velMin, float velMax, float fallen, float rotSpeed, float rotSpeedOnSpot, float Acceleration, float Deceleration, float stepupHeight);
    
    UFUNCTION(BlueprintCallable)
    static void SetNameEntry(const FString& first, const FString& second, bool bSwitch);
    
    UFUNCTION(BlueprintCallable)
    static void SetLightingChannels(UPrimitiveComponent* inComponent, bool bChannel0, bool bChannel1, bool bChannel2);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameStartMode(E_GAME_START_MODE startMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetEventMaxFrameTime(const AActor* Actor, float FrameTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetEffectLOD(UParticleSystemComponent* obj, int32 LODSetting);
    
    UFUNCTION(BlueprintCallable)
    static void SetClearAlignment(E_ALIGNMENT Alignment);
    
    UFUNCTION(BlueprintCallable)
    static void SetAutoRead(bool AutoRead);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllViewportRealtime(bool realtime);
    
    UFUNCTION(BlueprintCallable)
    static void SetAllActorHidden(ULevelStreaming* levelstr, bool hidden);
    
    UFUNCTION(BlueprintCallable)
    static UAnimSequence* SearchAnimSequence(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreAllSequenceActor(const AActor* EventBase);
    
    UFUNCTION(BlueprintCallable)
    static void PlayFromAtomComponent(UAtomComponent* AtomComponent, float startTime);
    
    UFUNCTION(BlueprintCallable)
    static void PickUpKeyTime(ALevelSequenceActor* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static void OpenSequenceWindow(ALevelSequenceActor* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static void LevelUpWhenCreateEntryNkm(const int32 NkmIndex);
    
    UFUNCTION(BlueprintCallable)
    static void LevelTick(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayerHaveSkill(int32 ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOriginalMovieResolution();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsJpEdition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCreationMode();
    
    UFUNCTION(BlueprintCallable)
    static bool IsCompareClearAlignment(uint8 clearAlignment, E_ALIGNMENT Alignment);
    
    UFUNCTION(BlueprintCallable)
    static bool IsClearAlignment(E_ALIGNMENT Alignment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAlreadyHaveAogamiUtsusemi(int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAlreadyClearBossRushAll_OriginalMode(const TArray<int32>& encountIDs);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAlreadyClearBossRushAll_ChallengeMode(const TArray<FName>& clearFlags);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAlreadyClearBossRush(const int32& encountID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActionCancelTrigger();
    
    UFUNCTION(BlueprintCallable)
    static float GetVoiceAutoTime(const int32 StrLen);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetVoiceAssetNames(const FString& Filter);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStrLenEvtDebug(const FString& checkStr);
    
    UFUNCTION(BlueprintCallable)
    static float GetSoundDuration(const USoundAtomCue* Cue);
    
    UFUNCTION(BlueprintCallable)
    static USoundAtomCue* GetSoundData(const ALevelSequenceActor* Sequence, const FString& CueName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetShippingBuild();
    
    UFUNCTION(BlueprintCallable)
    static FPostProcessSettings GetPostProcessSetting(FPostProcessSettings Setting, UCineCameraComponent* Camera);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPlayTime(ALevelSequenceActor* Sequence);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_ALIGNMENT GetNowAlignment_NewRouteForce();
    
    UFUNCTION(BlueprintCallable)
    static E_ALIGNMENT GetNowAlignment();
    
    UFUNCTION(BlueprintCallable)
    static float GetMaxFPS();
    
    UFUNCTION(BlueprintCallable)
    static float GetLinearLoop(float DeltaTime, bool Init, float LoopSeconds);
    
    UFUNCTION(BlueprintCallable)
    static float GetLinear(float DeltaTime, bool Init, float EndSeconds);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetLevelVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    static TArray<bool> GetInitCursorPositionIndex(const TArray<int32>& history, const int32 selIndex1, const int32 selIndex2, const int32 selIndex3, int32& Position, bool& Finish);
    
    UFUNCTION(BlueprintCallable)
    static TArray<bool> GetInitCursorPositionEx(const TArray<FName>& history, const TArray<FName> select, int32& Position, bool& Finish);
    
    UFUNCTION(BlueprintCallable)
    static TArray<bool> GetInitCursorPosition(const TArray<FName>& history, const FName select1, const FName select2, const FName select3, int32& Position, bool& Finish);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_GAME_START_MODE GetGameStartMode();
    
    UFUNCTION(BlueprintCallable)
    static FString GetEventVoice(const UScriptMessageAsset* Asset, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static FText GetEventText(const UScriptMessageAsset* Asset, int32 ID, int32& line);
    
    UFUNCTION(BlueprintCallable)
    static float GetEventMaxFrameTime(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FString GetEventLevelName();
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetEventCtrl(const ULevelStreaming* levelstr);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetEventBase(const ULevelStreaming* levelstr);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetECSActorsThisLevel(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDebugAlignmentFlagPoint(bool isLaw);
    
    UFUNCTION(BlueprintCallable)
    static float GetCurveLoop(float DeltaTime, bool Init, float LoopSeconds);
    
    UFUNCTION(BlueprintCallable)
    static float GetCurve(float DeltaTime, bool Init, float EndSeconds);
    
    UFUNCTION(BlueprintCallable)
    static uint8 GetClearRound();
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneObjectBindingID GetBindingID(const ALevelSequenceActor* Sequence, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAutoRead();
    
    UFUNCTION(BlueprintCallable)
    static UAnimSequenceBase* GetAnimSequence(const ALevelSequenceActor* Sequence, const FString& Tag);
    
    UFUNCTION(BlueprintCallable)
    static UAnimSequenceBase* GetAnimConv(const ALevelSequenceActor* Sequence, const FString& Tag, const FString& animName);
    
    UFUNCTION(BlueprintCallable)
    static E_ALIGNMENT GetAlignmentBias_Old();
    
    UFUNCTION(BlueprintCallable)
    static E_ALIGNMENT GetAlignmentBias_New();
    
    UFUNCTION(BlueprintCallable)
    static E_ALIGNMENT GetAlignmentBias();
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetActorsThisLevel(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetActorsFromLevel(const ULevelStreaming* levelstr);
    
    UFUNCTION(BlueprintCallable)
    static void EventScreenshot(const FString& Directory, const int32 fileIndex);
    
    UFUNCTION(BlueprintCallable)
    static void EventCameraStopShake(ACustomPlayerController* Controller, UMatineeCameraShake* inst, bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    static UMatineeCameraShake* EventCameraPlayShake(ACustomPlayerController* Controller, TSubclassOf<UMatineeCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot);
    
    UFUNCTION(BlueprintCallable)
    static void EntryNkmForceParty(const TArray<int32>& devilIDs);
    
    UFUNCTION(BlueprintCallable)
    static void EntryNkmForce(const int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    static bool EntryBibleShiseijoTao();
    
    UFUNCTION(BlueprintCallable)
    static void EndPlay(ALevelSequenceActor* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static int32 CountAlreadyClearBossRush_OriginalMode(const TArray<int32>& encountIDs);
    
    UFUNCTION(BlueprintCallable)
    static int32 CountAlreadyClearBossRush_ChallengeMode(const TArray<FName>& clearFlags);
    
    UFUNCTION(BlueprintCallable)
    static void CheckPostProcessSettings(const FPostProcessSettings Setting);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckNoTap_E0170(float nowX, float nowY, float defX, float defY);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckEventScope_E0170(FVector2D Pos, FVector2D Min, FVector2D Max);
    
    UFUNCTION(BlueprintCallable)
    static float CheckEventEmitterRate(const float rate);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckEventActive_E0170(FVector2D Pos);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckClass(const AActor* Actor, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    static void CheckAogamiUtsusemiTalkIcon();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAllSequenceActorLoaded(const AActor* EventBase);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckActorBegunPlay(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeAtomOnly2DSound(UAtomComponent* AtomComponent, bool bOnly2DSound);
    
    UFUNCTION(BlueprintCallable)
    static void AllBinding(const FString& Name, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void AddEventTrack_PlaySE(ALevelSequenceActor* Sequence);
    
    UFUNCTION(BlueprintCallable)
    static void AddClearRound();
    
};

