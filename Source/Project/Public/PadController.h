#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "E_ACTION_MAPPING_TYPE.h"
#include "E_AXIS_MAPPING_TYPE.h"
#include "E_GAMEPAD_TYPE.h"
#include "E_INPUT_TYPE.h"
#include "PadController.generated.h"

UCLASS(Blueprintable)
class PROJECT_API APadController : public APlayerController {
    GENERATED_BODY()
public:
    APadController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovedMouseCursor(bool& bMoved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHold_MouseAnyButton(bool& bHold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHold_MouseAction(bool& bHold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionPadCheckCore(TEnumAsByte<E_ACTION_MAPPING_TYPE> actionMapType, TEnumAsByte<E_INPUT_TYPE> InputType, FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMouseWheelAxis(float& WheelAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMousePos(float& X, float& Y);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetInputActionMappingsCore(TEnumAsByte<E_INPUT_TYPE> InputType, TArray<TEnumAsByte<E_ACTION_MAPPING_TYPE>>& ActionMappings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<E_GAMEPAD_TYPE> GetConnectedGamepadType_ForSteam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAxisPadCore(TEnumAsByte<E_AXIS_MAPPING_TYPE> axisMapType, float& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetAxisMappingName(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetActionMappingName(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckMouseKeyboardEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckKeyConfigLoaded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGamePadUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGamePadEnable();
    
    UFUNCTION(BlueprintCallable)
    void CallManualAxisMapping_Core(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void CallManualAnalogStickValue(bool IsLeftStick, bool IsX, float Value);
    
    UFUNCTION(BlueprintCallable)
    void CallManualActionMapping_Core(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping);
    
    UFUNCTION(BlueprintCallable)
    static void CallBeforeOutputDefaultTable();
    
};

