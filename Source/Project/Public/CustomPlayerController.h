#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EViewTargetBlendFunction -FallbackName=EViewTargetBlendFunction
#include "EInputIgnoreReason.h"
#include "E_AXIS_MAPPING_TYPE.h"
#include "PadController.h"
#include "CustomPlayerController.generated.h"

class AActor;
class UCurveFloat;

UCLASS(Blueprintable)
class PROJECT_API ACustomPlayerController : public APadController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_SwitchPlayerCameraInputCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ConstCameraSpeedLR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ConstCameraSpeedUD;
    
public:
    ACustomPlayerController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetViewTargetWithBlendQuartanion(AActor* NewViewTarget, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp, bool bLockOutgoing, bool bForceOverwrite);
    
    UFUNCTION(BlueprintCallable)
    void SetViewTargetWithBlendCurve(AActor* NewViewTarget, float BlendTime, const UCurveFloat* BlendCurve, bool bForceOverwrite);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectIgnoreMoveInput(bool bNewIgnoreInput, EInputIgnoreReason InReason);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectIgnoreMasterInput(bool bNewIgnoreInput);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectIgnoreLookInput(bool bNewIgnoreInput, EInputIgnoreReason InReason);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectIgnoreAllInput(bool bNewIgnoreInput, EInputIgnoreReason InReason);
    
    UFUNCTION(BlueprintCallable)
    void SetProjectIgnoreActionInput(bool bNewIgnoreInput, EInputIgnoreReason InReason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeIgnoreMoveInput(bool bNewIgnoreInput);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeIgnoreLookInput(bool bNewIgnoreInput);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeIgnoreActionInput(bool bNewIgnoreInput);
    
public:
    UFUNCTION(BlueprintCallable)
    void LookUpCamera(float InputSpeed, bool IsMouseInput);
    
    UFUNCTION(BlueprintCallable)
    void LookRightCamera(float InputSpeed, bool IsMouseInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProjectMoveInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProjectLookInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProjectActionInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ClampCameraInputSpeed(float InputSpeed, bool IsMouseInput);
    
    UFUNCTION(BlueprintCallable)
    float CalulateCameraSpeed(TEnumAsByte<E_AXIS_MAPPING_TYPE> CameraAxis, float InputSpeed, bool IsMouseInput);
    
};

