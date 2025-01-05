#include "PadController.h"

APadController::APadController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

bool APadController::IsMovedMouseCursor(bool& bMoved) {
    return false;
}

bool APadController::IsHold_MouseAnyButton(bool& bHold) {
    return false;
}

bool APadController::IsHold_MouseAction(bool& bHold) {
    return false;
}

bool APadController::IsActionPadCheckCore(TEnumAsByte<E_ACTION_MAPPING_TYPE> actionMapType, TEnumAsByte<E_INPUT_TYPE> InputType, FKey& Key) {
    return false;
}

bool APadController::GetMouseWheelAxis(float& WheelAxis) {
    return false;
}

bool APadController::GetMousePos(float& X, float& Y) {
    return false;
}

void APadController::GetInputActionMappingsCore(TEnumAsByte<E_INPUT_TYPE> InputType, TArray<TEnumAsByte<E_ACTION_MAPPING_TYPE>>& ActionMappings) {
}

TEnumAsByte<E_GAMEPAD_TYPE> APadController::GetConnectedGamepadType_ForSteam() {
    return E_GAMEPAD_OTHER;
}

void APadController::GetAxisPadCore(TEnumAsByte<E_AXIS_MAPPING_TYPE> axisMapType, float& Value) {
}

FName APadController::GetAxisMappingName(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping) {
    return NAME_None;
}

FName APadController::GetActionMappingName(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping) {
    return NAME_None;
}

bool APadController::CheckMouseKeyboardEnable() {
    return false;
}

bool APadController::CheckKeyConfigLoaded() {
    return false;
}

bool APadController::CheckGamePadUI() {
    return false;
}

bool APadController::CheckGamePadEnable() {
    return false;
}

void APadController::CallManualAxisMapping_Core(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, float Scale) {
}

void APadController::CallManualAnalogStickValue(bool IsLeftStick, bool IsX, float Value) {
}

void APadController::CallManualActionMapping_Core(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping) {
}

void APadController::CallBeforeOutputDefaultTable() {
}


