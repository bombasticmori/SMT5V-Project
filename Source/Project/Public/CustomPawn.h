#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETrailWidthMode -FallbackName=ETrailWidthMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "CustomPawnTransformUpdatedSignatureDelegate.h"
#include "EDevilVoiceType.h"
#include "MapEventReadyDelegateDelegate.h"
#include "CustomPawn.generated.h"

class UCapsuleComponent;
class UCharaParamComponent;
class UMapSymbolComponentCPP;
class UParticleSystem;
class UParticleSystemComponent;
class USkeletalMeshComponent;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class PROJECT_API ACustomPawn : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbsoluteViewRotation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomPawnTransformUpdatedSignature OnTransformUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreMovementInputByNotifyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreRootMotionRotationXY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIgnoreRootMotionTransient;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* VoiceCueSheet;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMapSymbolComponentCPP* SymbolComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsNahobino;
    
    ACustomPawn(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* SpawnTrailEmitter(UParticleSystem* EmitterTemplate, FName FirstSocketName, FName SecondSocketName, TEnumAsByte<ETrailWidthMode> WidthMode, float Width);
    
    UFUNCTION(BlueprintCallable)
    void ResetForceEnableMovementInput();
    
    UFUNCTION(BlueprintCallable)
    void PrepareMapEvent(FMapEventReadyDelegate OnReady);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrepareMapEvent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRootMotionPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceEnabledRotateInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceEnabledMovementInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCharaParamComponent* GetCharaParam();
    
    UFUNCTION(BlueprintCallable)
    void ForceEnableMovementInput(float Time, bool bMovement, bool bRotate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckPlayAnimNotifyDevilVoice(EDevilVoiceType DevilVoiceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool CheckMagatsuhiDevil() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CallMapEventOnReadyDelegate();
    
};

