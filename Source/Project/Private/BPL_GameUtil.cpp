#include "BPL_GameUtil.h"
#include "Templates/SubclassOf.h"

UBPL_GameUtil::UBPL_GameUtil() {
}

bool UBPL_GameUtil::SetSoftClassRef(const FString& Source, TSoftClassPtr<UObject>& target) {
    return false;
}

void UBPL_GameUtil::SetAnimNotifyQueueSeed(UAnimInstance* AnimInstance, FName Seed) {
}

TArray<float> UBPL_GameUtil::RetrieveNotifyTiming(UAnimSequenceBase* Anim) {
    return TArray<float>();
}

TArray<FString> UBPL_GameUtil::RetrieveNotifyNames(UAnimSequenceBase* Anim) {
    return TArray<FString>();
}

void UBPL_GameUtil::LOG_PRINT(const FString& print) {
}

float UBPL_GameUtil::LIMIT_VALUE_F(float Value, float Max) {
    return 0.0f;
}

float UBPL_GameUtil::LIMIT_VALUE2_F(float Value, float Min, float Max) {
    return 0.0f;
}

int32 UBPL_GameUtil::LIMIT_VALUE2(int32 Value, int32 Min, int32 Max) {
    return 0;
}

int32 UBPL_GameUtil::LIMIT_VALUE(int32 Value, int32 Max) {
    return 0;
}

int32 UBPL_GameUtil::LIMIT_ADD(int32 _src, int32 _v, int32 _max) {
    return 0;
}

bool UBPL_GameUtil::IsValidSoftObjRef(const TSoftObjectPtr<UObject>& SoftObjReference) {
    return false;
}

bool UBPL_GameUtil::IsValidSoftClassRef(const TSoftClassPtr<UObject>& SoftClassReference) {
    return false;
}

bool UBPL_GameUtil::IsMapObjectAsset(UObject* TargetObject) {
    return false;
}

bool UBPL_GameUtil::IsExistAssetUserData(UObject* TargetObject, TSubclassOf<UAssetUserData> AssetUserDataClass) {
    return false;
}

bool UBPL_GameUtil::IsChunkInstalled(int32 ChunkId) {
    return false;
}

bool UBPL_GameUtil::IsChunkInstallComplete() {
    return false;
}

bool UBPL_GameUtil::IS_TEST_BUILD() {
    return false;
}

bool UBPL_GameUtil::IS_SHIPPING_BUILD() {
    return false;
}

bool UBPL_GameUtil::IS_PREVIEW_WORLD(UObject* WorldContextObject) {
    return false;
}

bool UBPL_GameUtil::IS_EDITOR_BUILD() {
    return false;
}

FString UBPL_GameUtil::GetNickName() {
    return TEXT("");
}

float UBPL_GameUtil::GetChunkProgress(int32 ChunkId) {
    return 0.0f;
}

bool UBPL_GameUtil::CopySoftObjRef(const TSoftObjectPtr<UObject>& Source, TSoftObjectPtr<UObject>& target) {
    return false;
}

bool UBPL_GameUtil::CopySoftClassRef(const TSoftClassPtr<UObject>& Source, TSoftClassPtr<UObject>& target) {
    return false;
}

bool UBPL_GameUtil::CheckPersistentLevel(AActor* ActorOnCheckLevel) {
    return false;
}

int32 UBPL_GameUtil::BIT_SHIFT_L(uint8 Value) {
    return 0;
}

int32 UBPL_GameUtil::BIT_DEL_INT(int32 State, int32 Value) {
    return 0;
}

int32 UBPL_GameUtil::BIT_DEL(int32 State, uint8 Value) {
    return 0;
}

bool UBPL_GameUtil::BIT_AND_INT(int32 State, int32 Value) {
    return false;
}

bool UBPL_GameUtil::BIT_AND(int32 State, uint8 Value) {
    return false;
}

int32 UBPL_GameUtil::BIT_ADD_INT(int32 State, int32 Value) {
    return 0;
}

int32 UBPL_GameUtil::BIT_ADD(int32 State, uint8 Value) {
    return 0;
}

void UBPL_GameUtil::ASSERT(bool Value, const FString& print) {
}

void UBPL_GameUtil::ApplyMaterialParameterCollection(UObject* WorldContext, UMaterialParameterCollection* MPC, UMaterialParameterApplier* Param) {
}

void UBPL_GameUtil::ApplyMaterialParameter(TArray<UMaterialInstanceDynamic*> MIDs, UMaterialParameterApplier* Param) {
}

void UBPL_GameUtil::AI_PRINT(const FString& print) {
}


