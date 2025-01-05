#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "BGMRequest.h"
#include "EBgmScene.h"
#include "EFadeType.h"
#include "EFadeoutType.h"
#include "EGameVolumeCategory.h"
#include "EOptionVolumeCategory.h"
#include "EReverbType.h"
#include "ESystemSE.h"
#include "OnBGMSceneChangedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "ProjectSoundManager.generated.h"

class AActor;
class UAtomComponent;
class UDevilVoiceAssetMap;
class UProjectSoundManager;
class USoundAtomCue;

UCLASS(Blueprintable)
class PROJECT_API UProjectSoundManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CursorSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* DecideSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CancelSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* ErrorSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* ActionWindowOpenSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* ActionWindowCloseSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* ActionWindowDecideSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* MessageSkipSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* BattleCursorSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* BattleCursor2SE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* BattleDecideSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* BattleDecide2SE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* BattleCancelSE;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* CursorSEComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* DecideSEComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* CancelSEComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* ErrorSEComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* ActionWindowOpenComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* ActionWindowCloseComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* ActionWindowDecideComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* MessageSkipComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* BattleCursorSEComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* BattleCursor2SEComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* BattleDecideSEComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* BattleDecide2SEComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* BattleCancelSEComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDevilVoiceAssetMap> DevilVoiceAssetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBGMSceneChangedSignature OnBGMSceneChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CurrentBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* NextBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EBgmScene, USoundAtomCue*> SceneBGMMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBGMRequest BGMRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* MapCrisisBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* QuestMapBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CoasterBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CurrentMainENV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* CurrentSubENV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* NotPriorityMainENV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundAtomCue* NotPrioritySubENV;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapUniqueFuncCounter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* ListenerActor;
    
public:
    UProjectSoundManager();

    UFUNCTION(BlueprintCallable)
    void StopPriorityENV(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void StopPriorityBGM(EFadeType FadeType, float FadeTime, bool bForceReplay);
    
    UFUNCTION(BlueprintCallable)
    void StopCategory(EGameVolumeCategory InCategory);
    
    UFUNCTION(BlueprintCallable)
    void StopBGM(EBgmScene Scene, EFadeoutType FadeType);
    
    UFUNCTION(BlueprintCallable)
    void StopBattleSubSound();
    
    UFUNCTION(BlueprintCallable)
    void StopAllSkillSE();
    
    UFUNCTION(BlueprintCallable)
    void StartEncountEffect();
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceStop_BattleSub1(bool bStop);
    
    UFUNCTION(BlueprintCallable)
    void SetSubENVRate(float InRate);
    
    UFUNCTION(BlueprintCallable)
    void SetSubENV(USoundAtomCue* Cue);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestMapBGM(USoundAtomCue* Cue);
    
    UFUNCTION(BlueprintCallable)
    void SetOptionVolume(EOptionVolumeCategory category, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetOnCategoryAisac(FName InCategory, FName InAisac);
    
    UFUNCTION(BlueprintCallable)
    void SetOffCategoryAisac(FName InCategory, FName InAisac, bool bIgnoreWarning);
    
    UFUNCTION(BlueprintCallable)
    void SetMasterVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetMapTopCameraMode(bool bin);
    
    UFUNCTION(BlueprintCallable)
    void SetMainENV(USoundAtomCue* Cue);
    
    UFUNCTION(BlueprintCallable)
    void SetListenerActor(AActor* InListenerActor);
    
    UFUNCTION(BlueprintCallable)
    void SetGardenMode(bool bin);
    
    UFUNCTION(BlueprintCallable)
    void SetGameVolume(EGameVolumeCategory category, float Volume, float FadeValuePerSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldBGMVolume(float Volume, float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCoasterBGM(USoundAtomCue* Cue);
    
    UFUNCTION(BlueprintCallable)
    void SetBGMSelectorLabel(EBgmScene Scene, const FString& Selector, const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    void SetBGMScene(EBgmScene Scene, EFadeType FadeType, bool bForceReplay);
    
    UFUNCTION(BlueprintCallable)
    void SetBGMRequestPosition(float InStartPositionSeconds);
    
    UFUNCTION(BlueprintCallable)
    void SetBGM(EBgmScene Scene, USoundAtomCue* Cue, EFadeType FadeType, bool bForceReplay);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSubMute(bool bMute, bool bFade);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSub3Mute(bool bMute, bool bFade);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSub2Mute(bool bMute, bool bFade);
    
    UFUNCTION(BlueprintCallable)
    void ResumeENV();
    
    UFUNCTION(BlueprintCallable)
    void ResumeBGM();
    
    UFUNCTION(BlueprintCallable)
    void ResetPerGame();
    
    UFUNCTION(BlueprintCallable)
    void ResetGameVolume(bool bImmediately);
    
    UFUNCTION(BlueprintCallable)
    void ResetBGMSelectorLabel(EBgmScene Scene);
    
    UFUNCTION(BlueprintCallable)
    static void PrintSoundVerbose(const FString& inString, bool bVeryVerbose);
    
    UFUNCTION(BlueprintCallable)
    void PreTerminateBattleScene();
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemSE(ESystemSE SE);
    
    UFUNCTION(BlueprintCallable)
    void PlayPriorityENV(USoundAtomCue* Cue, float FadeTime, bool bForceReplay);
    
    UFUNCTION(BlueprintCallable)
    void PlayPriorityBGM(USoundAtomCue* Cue, EFadeType FadeType, float FadeTime, bool bForceReplay);
    
    UFUNCTION(BlueprintCallable)
    void PlayerPawnOperational();
    
    UFUNCTION(BlueprintCallable)
    void PauseENV();
    
    UFUNCTION(BlueprintCallable)
    void PauseBGM();
    
    UFUNCTION(BlueprintCallable)
    void OutReverbArea(EReverbType ReverbType, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void OnEndPlay();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingPriorityENV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingPriorityBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingMapCrisisBGM() const;
    
    UFUNCTION(BlueprintCallable)
    void InReverbArea(EReverbType ReverbType, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    void IncrementDefaultAttenuationRefCnt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundAtomCue* GetQuestMapBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOptionVolumeDefault(EOptionVolumeCategory category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOptionVolume(EOptionVolumeCategory category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMasterVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetListenerLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameVolume(EGameVolumeCategory category) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDevilVoiceAssetMap* GetDevilVoiceAssetMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundAtomCue* GetCurrentSubENV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundAtomCue* GetCurrentMainENV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundAtomCue* GetCurrentBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBgmScene GetBGMScene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAtomComponent* GetBGMComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundAtomCue* GetBGM(EBgmScene Scene);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttenationVolumeMultiply() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UProjectSoundManager* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void ForceStopENV(float FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void EndMapCrisisBGM();
    
    UFUNCTION(BlueprintCallable)
    void EndEncountEffect();
    
    UFUNCTION(BlueprintCallable)
    void DecrementDefaultAttenuationRefCnt();
    
    UFUNCTION(BlueprintCallable)
    void BeginMapCrisisBGM(USoundAtomCue* InCue);
    
};

