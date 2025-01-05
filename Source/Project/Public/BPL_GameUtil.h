#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "BPL_GameUtil.generated.h"

class AActor;
class UAnimInstance;
class UAnimSequenceBase;
class UAssetUserData;
class UMaterialInstanceDynamic;
class UMaterialParameterApplier;
class UMaterialParameterCollection;
class UObject;

UCLASS(Blueprintable)
class UBPL_GameUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_GameUtil();

    UFUNCTION(BlueprintCallable)
    static bool SetSoftClassRef(const FString& Source, UPARAM(Ref) TSoftClassPtr<UObject>& target);
    
    UFUNCTION(BlueprintCallable)
    static void SetAnimNotifyQueueSeed(UAnimInstance* AnimInstance, FName Seed);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> RetrieveNotifyTiming(UAnimSequenceBase* Anim);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> RetrieveNotifyNames(UAnimSequenceBase* Anim);
    
    UFUNCTION(BlueprintCallable)
    static void LOG_PRINT(const FString& print);
    
    UFUNCTION(BlueprintCallable)
    static float LIMIT_VALUE_F(float Value, float Max);
    
    UFUNCTION(BlueprintCallable)
    static float LIMIT_VALUE2_F(float Value, float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    static int32 LIMIT_VALUE2(int32 Value, int32 Min, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static int32 LIMIT_VALUE(int32 Value, int32 Max);
    
    UFUNCTION(BlueprintCallable)
    static int32 LIMIT_ADD(int32 _src, int32 _v, int32 _max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidSoftObjRef(const TSoftObjectPtr<UObject>& SoftObjReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidSoftClassRef(const TSoftClassPtr<UObject>& SoftClassReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMapObjectAsset(UObject* TargetObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExistAssetUserData(UObject* TargetObject, TSubclassOf<UAssetUserData> AssetUserDataClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChunkInstalled(int32 ChunkId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChunkInstallComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IS_TEST_BUILD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IS_SHIPPING_BUILD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IS_PREVIEW_WORLD(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IS_EDITOR_BUILD();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetNickName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetChunkProgress(int32 ChunkId);
    
    UFUNCTION(BlueprintCallable)
    static bool CopySoftObjRef(const TSoftObjectPtr<UObject>& Source, UPARAM(Ref) TSoftObjectPtr<UObject>& target);
    
    UFUNCTION(BlueprintCallable)
    static bool CopySoftClassRef(const TSoftClassPtr<UObject>& Source, UPARAM(Ref) TSoftClassPtr<UObject>& target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckPersistentLevel(AActor* ActorOnCheckLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BIT_SHIFT_L(uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 BIT_DEL_INT(int32 State, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 BIT_DEL(int32 State, uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BIT_AND_INT(int32 State, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BIT_AND(int32 State, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 BIT_ADD_INT(int32 State, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 BIT_ADD(int32 State, uint8 Value);
    
    UFUNCTION(BlueprintCallable)
    static void ASSERT(bool Value, const FString& print);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ApplyMaterialParameterCollection(UObject* WorldContext, UMaterialParameterCollection* MPC, UMaterialParameterApplier* Param);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyMaterialParameter(TArray<UMaterialInstanceDynamic*> MIDs, UMaterialParameterApplier* Param);
    
    UFUNCTION(BlueprintCallable)
    static void AI_PRINT(const FString& print);
    
};

