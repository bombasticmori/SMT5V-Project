#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "CharaMotion.h"
#include "CharaMotionPlayerEventSignatureDelegate.h"
#include "CharaMotionPlayerLoadCompletedSignatureDelegate.h"
#include "E_CHARA_MOTION_ID.h"
#include "CharaMotionPlayerComponent.generated.h"

class UAnimInstance;
class UAnimMontage;
class UAnimSequenceBase;
class UCharaMotionOverrideBlendTimeTable;
class UCharaMotionTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UCharaMotionPlayerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharaMotionTable* MotionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharaMotionOverrideBlendTimeTable* MotionBlendTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharaMotionOverrideBlendTimeTable* MotionBlendTable_Append;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCharaMotionTable> MotionTableAssetID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharaMotionPlayerLoadCompletedSignature OnCharaMotionPlayerLoadCompleted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
public:
    UCharaMotionPlayerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime, UAnimInstance* AnimInstance, TArray<E_CHARA_MOTION_ID>& OutputPlayingMotions);
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PlayWithDuration(E_CHARA_MOTION_ID MotionID, float Duration, float PlayRateRough, float BlendTimeOverride, float StartOffsetTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayExternalReferenceWithDuration(FCharaMotion Motion, float PlayRate, float StartOffsetTime, float Duration, float PlayRateRough, float BlendTimeOverride);
    
    UFUNCTION(BlueprintCallable)
    void PlayExternalReference(FCharaMotion Motion, float PlayRate, float StartOffsetTime);
    
    UFUNCTION(BlueprintCallable)
    void Play(E_CHARA_MOTION_ID MotionID, float PlayRate, float BlendTimeOverride, float StartOffsetTime);
    
    UFUNCTION(BlueprintCallable)
    void Load();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    void InsertEvent(FCharaMotionPlayerEventSignature OnEvent);
    
    UFUNCTION(BlueprintCallable)
    void InitMotionQueue();
    
    UFUNCTION(BlueprintCallable)
    float GetPlayRate();
    
    UFUNCTION(BlueprintCallable)
    E_CHARA_MOTION_ID GetCurrentMotionID();
    
    UFUNCTION(BlueprintCallable)
    E_CHARA_MOTION_ID GetBeforeMotionID();
    
    UFUNCTION(BlueprintCallable)
    UAnimSequenceBase* GetAnimationLoop();
    
    UFUNCTION(BlueprintCallable)
    UAnimSequenceBase* GetAnimationDefault();
    
    UFUNCTION(BlueprintCallable)
    void ForceProgressCurrentAnim();
    
};

