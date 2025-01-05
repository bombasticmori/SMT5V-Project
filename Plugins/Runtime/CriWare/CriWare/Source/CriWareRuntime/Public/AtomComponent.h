#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundAttenuationSettings -FallbackName=SoundAttenuationSettings
#include "AtomAisacControlParam.h"
#include "AtomSelectorParam.h"
#include "EAtomComponentStatus.h"
#include "AtomComponent.generated.h"

class UAtomComponent;
class UAtomSoundObject;
class UGameViewportClient;
class USoundAtomCue;
class USoundAtomCueSheet;
class USoundAttenuation;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UAtomComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAudioFinished);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoDestroy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPersistAcrossLevelTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsUISound: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMultipleSoundPlayback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtomSoundObject* DefaultSoundObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultBlockIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomAisacControlParam> DefaultAisacControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtomSelectorParam> DefaultSelectorLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnly2DSound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAudioFinished OnAudioFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* PlayWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameViewportClient* GameViewport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideAttenuation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundAttenuationSettings AttenuationOverrides;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtomSoundObject* AppliedSoundObject;
    
public:
    UAtomComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundObject(UAtomSoundObject* SoundObject);
    
    UFUNCTION(BlueprintCallable)
    void SetSound(USoundAtomCue* NewSound);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectorLabel(const FString& Selector, const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchMultiplier(float NewPitchMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable)
    void SetNextBlockIndex(int32 BlockIndex);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultAttenuationEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelOffsetByName(const FString& BusName, float LevelOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelOffset(int32 BusId, float LevelOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelByName(const FString& BusName, float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevel(int32 BusId, float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetAsrRackIdArray(TArray<int32> AsrRackIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetAsrRackID(int32 asr_rack_id);
    
    UFUNCTION(BlueprintCallable)
    void SetAisacByName(const FString& ControlName, float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    void Play(float startTime);
    
    UFUNCTION(BlueprintCallable)
    void Pause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsPaused();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenEconomicTick() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTime();
    
    UFUNCTION(BlueprintCallable)
    EAtomComponentStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    float GetSequencePosition();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumQueuedSounds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDefaultAttenuationEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMaxAttenuationDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentEconomicTickMarginDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentEconomicTickFrequency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentEconomicTickBoundaryDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentCullingMarginDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentCullingBoundaryDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCueName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAtomComponentID() const;
    
    UFUNCTION(BlueprintCallable)
    static UAtomComponent* GetAtomComponentFromID(int32 TargetID);
    
    UFUNCTION(BlueprintCallable)
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
    
    UFUNCTION(BlueprintCallable)
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float startTime);
    
    UFUNCTION(BlueprintCallable)
    void EnqueueSound(USoundAtomCue* NewSound);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyComponentByID(int32 TargetID);
    
};

