#include "BPL_GameUtil.h"
#include "Templates/SubclassOf.h"
//Method details generated via ChatGPT. Such methods should be treated as a 'best guess' approximation in lieu of further reversing
UBPL_GameUtil::UBPL_GameUtil() {
}

bool UBPL_GameUtil::SetSoftClassRef(const FString& Source, TSoftClassPtr<UObject>& target)
{
    if (!Source.IsEmpty())
    {
        target = TSoftClassPtr<UObject>(FSoftObjectPath(Source));
        return true;
    }
    return false;
}

void UBPL_GameUtil::SetAnimNotifyQueueSeed(UAnimInstance* AnimInstance, FName Seed) {
}

TArray<float> UBPL_GameUtil::RetrieveNotifyTiming(UAnimSequenceBase* Anim) {
    TArray<float> NotifyTimings;
    if (Anim)
    {
        for (const FAnimNotifyEvent& Notify : Anim->Notifies)
        {
            NotifyTimings.Add(Notify.GetTime());
        }
    }
    return NotifyTimings;
}

TArray<FString> UBPL_GameUtil::RetrieveNotifyNames(UAnimSequenceBase* Anim) {
    TArray<FString> NotifyNames;
    if (Anim)
    {
        for (const FAnimNotifyEvent& Notify : Anim->Notifies)
        {
            NotifyNames.Add(Notify.NotifyName.ToString());
        }
    }
    return NotifyNames;
}

void UBPL_GameUtil::LOG_PRINT(const FString& print) {
}

float UBPL_GameUtil::LIMIT_VALUE_F(float Value, float Max) {
    return FMath::Min(Value, Max);
}

float UBPL_GameUtil::LIMIT_VALUE2_F(float Value, float Min, float Max) {
    return FMath::Clamp(Value, Min, Max);
}

int32 UBPL_GameUtil::LIMIT_VALUE2(int32 Value, int32 Min, int32 Max) {
    return FMath::Clamp(Value, Min, Max);
}

int32 UBPL_GameUtil::LIMIT_VALUE(int32 Value, int32 Max) {
    return FMath::Min(Value, Max);
}

int32 UBPL_GameUtil::LIMIT_ADD(int32 _src, int32 _v, int32 _max) {
    return FMath::Min(_src + _v, _max);
}

bool UBPL_GameUtil::IsValidSoftObjRef(const TSoftObjectPtr<UObject>& SoftObjReference) {
    return SoftObjReference.IsValid();
}

bool UBPL_GameUtil::IsValidSoftClassRef(const TSoftClassPtr<UObject>& SoftClassReference) {
    return SoftClassReference.IsValid();
}

bool UBPL_GameUtil::IsMapObjectAsset(UObject* TargetObject) {
    return TargetObject && TargetObject->IsA(UWorld::StaticClass());
}

bool UBPL_GameUtil::IsExistAssetUserData(UObject* TargetObject, TSubclassOf<UAssetUserData> AssetUserDataClass) {
    if (!TargetObject || !AssetUserDataClass)
        return false;
    IInterface_AssetUserData* UserData = Cast<IInterface_AssetUserData>(TargetObject);

    if (UserData->GetAssetUserDataOfClass(AssetUserDataClass))
    {
        return true;
    }
    return false;
}

bool UBPL_GameUtil::IsChunkInstalled(int32 ChunkId) {
    return false;
}

bool UBPL_GameUtil::IsChunkInstallComplete() {
    return false;
}

bool UBPL_GameUtil::IS_TEST_BUILD() {
#if UE_BUILD_TEST
    return true;
#else
    return false;
#endif
}

bool UBPL_GameUtil::IS_SHIPPING_BUILD() {
#if UE_BUILD_SHIPPING
    return true;
#else
    return false;
#endif
}

bool UBPL_GameUtil::IS_PREVIEW_WORLD(UObject* WorldContextObject) {
    return false;
}

bool UBPL_GameUtil::IS_EDITOR_BUILD() {
#if WITH_EDITOR
    return true;
#else
    return false;
#endif
}

FString UBPL_GameUtil::GetNickName() {
    return TEXT("");
}

float UBPL_GameUtil::GetChunkProgress(int32 ChunkId) {
    return 0.0f;
}

bool UBPL_GameUtil::CopySoftObjRef(const TSoftObjectPtr<UObject>& Source, TSoftObjectPtr<UObject>& target) {
    if (Source.IsValid())
    {
        target = Source;
        return true;
    }
    return false;
}

bool UBPL_GameUtil::CopySoftClassRef(const TSoftClassPtr<UObject>& Source, TSoftClassPtr<UObject>& target) {
    if (Source.IsValid())
    {
        target = Source;
        return true;
    }
    return false;
}

bool UBPL_GameUtil::CheckPersistentLevel(AActor* ActorOnCheckLevel) {
    return false;
}

int32 UBPL_GameUtil::BIT_SHIFT_L(uint8 Value) {
    return static_cast<int32>(Value) << 1;
}

int32 UBPL_GameUtil::BIT_DEL_INT(int32 State, int32 Value) {
    return State & ~Value;
}

int32 UBPL_GameUtil::BIT_DEL(int32 State, uint8 Value) {
    return State & ~static_cast<int32>(Value);
}

bool UBPL_GameUtil::BIT_AND_INT(int32 State, int32 Value) {
    return (State & Value) != 0;
}

bool UBPL_GameUtil::BIT_AND(int32 State, uint8 Value) {
    return (State & static_cast<int32>(Value)) != 0;
}

int32 UBPL_GameUtil::BIT_ADD_INT(int32 State, int32 Value) {
    return State | Value;
}

int32 UBPL_GameUtil::BIT_ADD(int32 State, uint8 Value) {
    return State | static_cast<int32>(Value);
}

void UBPL_GameUtil::ASSERT(bool Value, const FString& print) {
    if (!Value)
    {
        UE_LOG(LogTemp, Error, TEXT("ASSERT FAILED: %s"), *print);
        ensureMsgf(Value, TEXT("ASSERT FAILED: %s"), *print);
    }
}

void UBPL_GameUtil::ApplyMaterialParameterCollection(UObject* WorldContext, UMaterialParameterCollection* MPC, UMaterialParameterApplier* Param) {
}

void UBPL_GameUtil::ApplyMaterialParameter(TArray<UMaterialInstanceDynamic*> MIDs, UMaterialParameterApplier* Param) {
}

void UBPL_GameUtil::AI_PRINT(const FString& print) {
}


