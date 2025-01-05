#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/TimelineComponent.h"
#include "CharaLidTable.h"
#include "CharaLipTable.h"
#include "E_CHARA_LID_ID.h"
#include "E_CHARA_LIP_ID.h"
#include "CharaFaceComponent.generated.h"

class UAnimInstance;
class UCharaBlink;
class UCharaExpressionTable;
class UCharaLipSync;
class UCustomPoseWeightTable;
class UTexture;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROJECT_API UCharaFaceComponent : public UTimelineComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharaExpressionTable* ExpressionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharaLidTable> LidTableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharaLipTable> LipTableList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UCharaFaceComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool UseExpressionEx(FName ExpressionID);
    
    UFUNCTION(BlueprintCallable)
    void Update(float DeltaTime, UAnimInstance* AnimInstance, UCustomPoseWeightTable* PoseWeightTable);
    
    UFUNCTION(BlueprintCallable)
    void StopLipSync();
    
    UFUNCTION(BlueprintCallable)
    void StopBlink(bool Reset, float Duration, float BlendInTime, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayLipSync(const UCharaLipSync* LipSync, bool Loop, float BlendInTime, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void PlayBlink(const UCharaBlink* Blink, bool Loop, float BlendInTime, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLipExpressionAttenuate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLidExpressionAttenuate() const;
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UTexture> GetExpressionEx(FName ExpressionID, int32 Type, float& OpacityL, float& OpacityR);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_CHARA_LIP_ID GetCurrentLipID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_CHARA_LID_ID GetCurrentLidID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentExpressionID() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearLip();
    
    UFUNCTION(BlueprintCallable)
    void ClearLid();
    
    UFUNCTION(BlueprintCallable)
    void ClearExpression();
    
    UFUNCTION(BlueprintCallable)
    void ChangeLip(E_CHARA_LIP_ID LipID, float Duration, float BlendInTime, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void ChangeLid(E_CHARA_LID_ID LidID, float Duration, float BlendInTime, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    void ChangeExpression(FName ExpressionID, float BlendTimeOverride);
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	virtual void Activate(bool bReset = false) override;
	virtual void Deactivate() override;
	virtual bool IsReadyForOwnerToAutoDestroy() const override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual bool IsPostLoadThreadSafe() const override;
    
};

