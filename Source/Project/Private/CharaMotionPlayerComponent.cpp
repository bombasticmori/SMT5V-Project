#include "CharaMotionPlayerComponent.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimMontage.h"
#include "CharaMotionTable.h"
#include "CustomPawn.h"
//These functions were approximated with ChatGPT and Copilot and are considered 'best guess' approximations until actual reverse engineering is done.
UCharaMotionPlayerComponent::UCharaMotionPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MotionTable = NULL;
    this->MotionBlendTable = NULL;
    this->MotionBlendTable_Append = NULL;
    this->SlotName = TEXT("DefaultSlot");
    this->Montage = NULL;

}
void UCharaMotionPlayerComponent::Update(float DeltaTime, UAnimInstance* AnimInstance, TArray<E_CHARA_MOTION_ID>& OutputPlayingMotions) {
    if (AnimInstance && Montage) {
        // Example logic: Check active montages and return active motions
        if (AnimInstance->Montage_IsPlaying(Montage)) {
            // Assuming a single motion can be playing at a time for simplicity
            OutputPlayingMotions.Add(GetCurrentMotionID());
        }
    }
}

void UCharaMotionPlayerComponent::Stop() {
    if (Montage) {
        AActor* Owner = GetOwner();
        if (Owner) {
            USkeletalMeshComponent* SkeletalMeshComponent = Owner->FindComponentByClass<USkeletalMeshComponent>();
            if (SkeletalMeshComponent) {
                // Get the AnimInstance from the SkeletalMeshComponent
                UAnimInstance* AnimInstance = SkeletalMeshComponent->GetAnimInstance();
                if (AnimInstance) {
                    AnimInstance->Montage_Stop(0.2f, Montage);
                }
            }
        }
        Montage = nullptr;
    }
}

void UCharaMotionPlayerComponent::SetPlayRate(float PlayRate) {
    AActor* Owner = GetOwner();
    if (Owner) {
        USkeletalMeshComponent* SkeletalMeshComponent = Owner->FindComponentByClass<USkeletalMeshComponent>();
        if (SkeletalMeshComponent) {
            if (Montage && SkeletalMeshComponent->GetAnimInstance()) {
                SkeletalMeshComponent->GetAnimInstance()->Montage_SetPlayRate(Montage, PlayRate);
            }
        }
    }
}

void UCharaMotionPlayerComponent::PlayWithDuration(E_CHARA_MOTION_ID MotionID, float Duration, float PlayRateRough, float BlendTimeOverride, float StartOffsetTime) {
    if (MotionTable) {
        TMap<E_CHARA_MOTION_ID, FCharaMotion> MotionMap = MotionTable->Map;
        
        const FCharaMotion* Motion = MotionMap.Find(MotionID);
        if (Motion) {
            PlayExternalReferenceWithDuration(*Motion, GetPlayRate(), StartOffsetTime, Duration, PlayRateRough, BlendTimeOverride);
        }
    }
}

void UCharaMotionPlayerComponent::PlayExternalReferenceWithDuration(FCharaMotion Motion, float PlayRate, float StartOffsetTime, float Duration, float PlayRateRough, float BlendTimeOverride) {
    AActor* Owner = GetOwner();
    if (Owner) {
        USkeletalMeshComponent* SkeletalMeshComponent = Owner->FindComponentByClass<USkeletalMeshComponent>();
        if (SkeletalMeshComponent) {
            UAnimInstance* AnimInstance = SkeletalMeshComponent->GetAnimInstance();
            if (AnimInstance) {
                if (Motion.AnimationDefault) {
                    Montage = UAnimMontage::CreateSlotAnimationAsDynamicMontage(Motion.AnimationDefault, SlotName, 0.25F, 0.25F, PlayRate, 1, -1.0F, StartOffsetTime);
                    Montage->SequenceLength = Duration;
                    AnimInstance->Montage_Play(Montage, PlayRate, EMontagePlayReturnType::Duration, StartOffsetTime);
                }
                else if (Motion.AnimationLoop) {
                    Montage = UAnimMontage::CreateSlotAnimationAsDynamicMontage(Motion.AnimationLoop, SlotName, 0.25F, 0.25F, PlayRate, 1, -1.0F, StartOffsetTime);
                    Montage->SequenceLength = Duration;
                    AnimInstance->Montage_Play(Montage, PlayRate, EMontagePlayReturnType::Duration, StartOffsetTime);
                }
            }

        }
    }
}

void UCharaMotionPlayerComponent::PlayExternalReference(FCharaMotion Motion, float PlayRate, float StartOffsetTime) {
    AActor* Owner = GetOwner();
    if (Owner) {
        USkeletalMeshComponent* SkeletalMeshComponent = Owner->FindComponentByClass<USkeletalMeshComponent>();
        if (SkeletalMeshComponent) {
            UAnimInstance* AnimInstance = SkeletalMeshComponent->GetAnimInstance();
            if (AnimInstance) {
                if (Motion.AnimationDefault) {
                    Montage = UAnimMontage::CreateSlotAnimationAsDynamicMontage(Motion.AnimationDefault, SlotName, 0.0f, 0.0f, PlayRate, 1, -1.0F, StartOffsetTime);
                    AnimInstance->Montage_Play(Montage, PlayRate, EMontagePlayReturnType::MontageLength, StartOffsetTime);
                }
                else if (Motion.AnimationLoop) {
                    Montage = UAnimMontage::CreateSlotAnimationAsDynamicMontage(Motion.AnimationLoop, SlotName, 0.0f, 0.0f, PlayRate, 0, -1.0F, StartOffsetTime);
                    AnimInstance->Montage_Play(Montage, PlayRate, EMontagePlayReturnType::MontageLength, StartOffsetTime);
                }
            }
        }
    }
}

void UCharaMotionPlayerComponent::Play(E_CHARA_MOTION_ID MotionID, float PlayRate, float BlendTimeOverride, float StartOffsetTime) {
    if (MotionTable) {
        TMap<E_CHARA_MOTION_ID, FCharaMotion> MotionMap = MotionTable->Map;
        const FCharaMotion* Motion = MotionMap.Find(MotionID);
        if (Motion) {
            PlayExternalReference(*Motion, PlayRate, StartOffsetTime);
        }
    }
}

void UCharaMotionPlayerComponent::Load() {
    // Load motion data (possibly asynchronous, with event callback)
    if (MotionTableAssetID.IsValid()) {
        MotionTable = MotionTableAssetID.LoadSynchronous();
        OnCharaMotionPlayerLoadCompleted.Broadcast(true);
    }
}

bool UCharaMotionPlayerComponent::IsPlaying() const {
    AActor* Owner = GetOwner();
    if (Owner) {
        USkeletalMeshComponent* SkeletalMeshComponent = Owner->FindComponentByClass<USkeletalMeshComponent>();
        if (SkeletalMeshComponent) {
            if (Montage && SkeletalMeshComponent->GetAnimInstance()) {
                return SkeletalMeshComponent->GetAnimInstance()->Montage_IsPlaying(Montage);
            }
        }
    }
    return false;
}

void UCharaMotionPlayerComponent::InsertEvent(FCharaMotionPlayerEventSignature OnEvent) {
    // Add event handling logic here
    OnEvent.ExecuteIfBound(GetCurrentMotionID());
}

void UCharaMotionPlayerComponent::InitMotionQueue() {
    // Initialize or reset motion queue logic
}

float UCharaMotionPlayerComponent::GetPlayRate() {
    return Montage ? Montage->RateScale : 1.0f;
}

E_CHARA_MOTION_ID UCharaMotionPlayerComponent::GetCurrentMotionID()
{
    // Get the owner and ensure it's valid
    AActor* Owner = GetOwner();
    if (Owner)
    {
        UE_LOG(LogTemp, Warning, TEXT("GetCurrentMotionID: Owner is invalid."));
        return E_CHARA_MOTION_ID::NONE;
    }

    // Check if the owner is a subclass of ACustomPawn
    if (ACustomPawn* CustomPawnOwner = Cast<ACustomPawn>(Owner))
    {
        UClass* CharaBaseClass = CustomPawnOwner->GetClass();
        if (CharaBaseClass->IsChildOf(ACustomPawn::StaticClass()))
        {
            // Use reflection to find the GetNowMotionID method
            static const FName GetNowMotionIDName("GetNowMotionID");
            UFunction* GetNowMotionIDFunction = CharaBaseClass->FindFunctionByName(GetNowMotionIDName);

            if (GetNowMotionIDFunction)
            {
                // Prepare to call the function and get its return value
                E_CHARA_MOTION_ID MotionID = E_CHARA_MOTION_ID::NONE;
                CustomPawnOwner->ProcessEvent(GetNowMotionIDFunction, &MotionID);
                return MotionID;
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("GetCurrentMotionID: GetNowMotionID function not found."));
            }
        }
    }

    return E_CHARA_MOTION_ID::NONE;
}

E_CHARA_MOTION_ID UCharaMotionPlayerComponent::GetBeforeMotionID()
{
    // Get the owner and ensure it's valid
    AActor* Owner = GetOwner();
    if (Owner)
    {
        UE_LOG(LogTemp, Warning, TEXT("GetCurrentMotionID: Owner is invalid."));
        return E_CHARA_MOTION_ID::NONE;
    }

    // Check if the owner is a subclass of ACustomPawn
    if (ACustomPawn* CustomPawnOwner = Cast<ACustomPawn>(Owner))
    {
        UClass* CharaBaseClass = CustomPawnOwner->GetClass();
        if (CharaBaseClass->IsChildOf(ACustomPawn::StaticClass()))
        {
            // Use reflection to find the GetNowMotionID method
            static const FName GetPreviousMotionIDName("GetPreviousMotionID");
            UFunction* GetPreviousMotionIDFunction = CharaBaseClass->FindFunctionByName(GetPreviousMotionIDName);

            if (GetPreviousMotionIDFunction)
            {
                // Prepare to call the function and get its return value
                E_CHARA_MOTION_ID MotionID = E_CHARA_MOTION_ID::NONE;
                CustomPawnOwner->ProcessEvent(GetPreviousMotionIDFunction, &MotionID);
                return MotionID;
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("GetCurrentMotionID: GetNowMotionID function not found."));
            }
        }
    }

    return E_CHARA_MOTION_ID::NONE;
}

UAnimSequenceBase* UCharaMotionPlayerComponent::GetAnimationLoop() {
    return Montage ? Cast<UAnimSequenceBase>(Montage) : nullptr;
}

UAnimSequenceBase* UCharaMotionPlayerComponent::GetAnimationDefault() {
    return Montage ? Cast<UAnimSequenceBase>(Montage) : nullptr;
}

void UCharaMotionPlayerComponent::ForceProgressCurrentAnim() {
    AActor* Owner = GetOwner();
    if (Owner)
    {
        USkeletalMeshComponent* SkeletalMeshComponent = Owner->FindComponentByClass<USkeletalMeshComponent>();
        if (SkeletalMeshComponent) {
            if (Montage && GetOwner() != nullptr && SkeletalMeshComponent->GetAnimInstance()) {
                // Advance animation logic
            }
        }
    }
}

