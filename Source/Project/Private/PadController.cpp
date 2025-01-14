#include "PadController.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/KismetSystemLibrary.h"
APadController::APadController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClickEventKeys.AddDefaulted(1);
}

bool APadController::IsMovedMouseCursor(bool& bMoved)
{
    FVector2D CurrentMousePos;
    GetMousePosition(CurrentMousePos.X, CurrentMousePos.Y);
    static FVector2D LastMousePos = CurrentMousePos;

    bMoved = (CurrentMousePos != LastMousePos);
    LastMousePos = CurrentMousePos;
    return bMoved;
}

bool APadController::IsHold_MouseAnyButton(bool& bHold)
{
    bHold = IsInputKeyDown(EKeys::LeftMouseButton) || IsInputKeyDown(EKeys::RightMouseButton);
    return bHold;
}

bool APadController::IsHold_MouseAction(bool& bHold)
{
    bHold = IsInputKeyDown(EKeys::LeftMouseButton);
    return bHold;
}

bool APadController::IsActionPadCheckCore(TEnumAsByte<E_ACTION_MAPPING_TYPE> actionMapType, TEnumAsByte<E_INPUT_TYPE> InputType, FKey& Key)
{
    const UInputSettings* InputSettings = GetDefault<UInputSettings>();
    if (!InputSettings) return false;

    for (const FInputActionKeyMapping& Mapping : InputSettings->GetActionMappings())
    {
        if (Mapping.ActionName.ToString() == GetActionMappingName(actionMapType).ToString())
        {
            Key = Mapping.Key;
            return IsInputKeyDown(Key);
        }
    }
    return false;
}

bool APadController::GetMouseWheelAxis(float& WheelAxis)
{
    WheelAxis = GetInputAxisValue(EKeys::MouseWheelAxis.GetFName());
    return WheelAxis != 0.0f;
}

bool APadController::GetMousePos(float& X, float& Y)
{
    return GetMousePosition(X, Y);
}

void APadController::GetInputActionMappingsCore(TEnumAsByte<E_INPUT_TYPE> InputType, TArray<TEnumAsByte<E_ACTION_MAPPING_TYPE>>& ActionMappings)
{
    const UInputSettings* InputSettings = GetDefault<UInputSettings>();
    if (!InputSettings) return;

    /*for (const FInputActionKeyMapping& Mapping : InputSettings->GetActionMappings())
    {
        if (Mapping.ActionName.ToString() == E_ACTION_MAPPING_TYPE::)
        ActionMappings.Add(static_cast<E_ACTION_MAPPING_TYPE>(Mapping.ActionName.ToString().));
    }*/
}

void APadController::GetAxisPadCore(TEnumAsByte<E_AXIS_MAPPING_TYPE> axisMapType, float& Value)
{
    Value = GetInputAxisValue(GetAxisMappingName(axisMapType));
}

FName APadController::GetAxisMappingName(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping)
{
    static const TMap<E_AXIS_MAPPING_TYPE, FName> MappingNames = {
        {E_AXIS_MAPPING_MOVE_FORWARD, "MoveForward"},
        {E_AXIS_MAPPING_MOVE_RIGHT, "MoveRight"},
        {E_AXIS_MAPPING_LOOK_UP, "LookUp"},
        {E_AXIS_MAPPING_LOOK_RIGHT, "LookRight"},
        {E_AXIS_MAPPING_LOOK_UP_MOUSE, "LookUp_Mouse"},
        {E_AXIS_MAPPING_LOOK_RIGHT_MOUSE, "LookRight_Mouse"},
        {E_AXIS_MAPPING_SCROLL_UP, "ScrollUp"},
        {E_AXIS_MAPPING_SCROLL_RIGHT, "ScrollRight"},
        {E_AXIS_MAPPING_GARDEN_MOVE_UP, "Garden_MoveUp"},
        {E_AXIS_MAPPING_GARDEN_MOVE_RIGHT, "Garden_MoveRight"},
        {E_AXIS_MAPPING_AUTOMAP_ZOOM, "AutoMap_Zoom"},
        {E_AXIS_MAPPING_TOPCAMERA_MOVE_UP,"TopCamera_MoveUp"},
        {E_AXIS_MAPPING_TOPCAMERA_MOVE_RIGHT,"TopCamera_MoveRight"},
        {E_AXIS_MAPPING_TOPCAMERA_ZOOM,"TopCamera_Zoom"},
    };
    return MappingNames.Contains(AxisMapping) ? MappingNames[AxisMapping] : NAME_None;
}

FName APadController::GetActionMappingName(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping)
{
    static const TMap<E_ACTION_MAPPING_TYPE, FName> MappingNames = {
        {E_ACTION_MAPPING_ACTION, "Utl_Action"},
        {E_ACTION_MAPPING_CANCEL, "Utl_Cancel"},
        {E_ACTION_MAPPING_UP, "Utl_Up"},
        {E_ACTION_MAPPING_DOWN, "Utl_Down"},
        {E_ACTION_MAPPING_LEFT, "Utl_Left"},
        {E_ACTION_MAPPING_RIGHT, "Utl_Right"},
        {E_ACTION_MAPPING_FACE_TOP, "Utl_FaceTop"},
        {E_ACTION_MAPPING_FACE_LEFT, "Utl_FaceLeft"},
        {E_ACTION_MAPPING_SHOULDER_LEFT, "Utl_ShoulderLeft"},
        {E_ACTION_MAPPING_SHOULDER_RIGHT, "Utl_ShoulderRight"},
        {E_ACTION_MAPPING_TRIGGER_LEFT, "Utl_TriggerLeft"},
        {E_ACTION_MAPPING_TRIGGER_RIGHT, "Utl_TriggerRight"},
        {E_ACTION_MAPPING_SPECIAL_LEFT, "Utl_SpecialLeft"},
        {E_ACTION_MAPPING_SPECIAL_RIGHT, "Utl_SpecialRight"},
        {E_ACTION_MAPPING_RSTICK_UP, "Utl_RStickUp"},
        {E_ACTION_MAPPING_RSTICK_DOWN, "Utl_RStickDown"},
        {E_ACTION_MAPPING_STICKBUTTON_RIGHT, "Utl_StickButtonRight"},
        {E_ACTION_MAPPING_MOUSE_ACTION, "Utl_MouseAction"},
        {E_ACTION_MAPPING_MOUSE_CANCEL, "Utl_MouseCancel"},
        {E_ACTION_MAPPING_MOVIE_SKIP, "Utl_MovieSkip"},
        {E_ACTION_MAPPING_KEYCONFIG_DEL, "KeyConfig_Delete"},
        {E_ACTION_MAPPING_MAP_ACTION, "Map_Action"},
        {E_ACTION_MAPPING_MAP_ATTACK, "Map_Attack"},
        {E_ACTION_MAPPING_CAMPOPEN, "Map_CampOpen"},
        {E_ACTION_MAPPING_MAP_ACTION_JUMP, "Map_ActionJump"},
        {E_ACTION_MAPPING_MAP_CAMERARESET, "Map_CameraReset"},
        {E_ACTION_MAPPING_MAP_TRAPORT, "Map_Traport"},
        {E_ACTION_MAPPING_MAP_AUTO_HEAL, "Map_AutoHeal"},
        {E_ACTION_MAPPING_MAP_DASH, "Map_Dash"},
        {E_ACTION_MAPPING_MAP_DASH_R, "Map_Dash_R"},
        {E_ACTION_MAPPING_AUTO_MAP, "Map_AutoMap"},
        {E_ACTION_MAPPING_MAP_VIEW_DOWN, "Map_ViewDown"},
        {E_ACTION_MAPPING_MAP_TOGGLE_AUTORUN, "Map_ToggleAutoRun"},
        {E_ACTION_MAPPING_MAP_ESTOMA, "Map_Estoma"},
        {E_ACTION_MAPPING_MAP_SAVE, "Map_Save"},
        {E_ACTION_MAPPING_CALL_DEBUG_MENU, "Dbg_MenuCall"},
        {E_ACTION_MAPPING_MENU_UP, "Dbg_MenuUp"},
        {E_ACTION_MAPPING_MENU_DOWN, "Dbg_MenuDown"},
        {E_ACTION_MAPPING_MENU_LEFT, "Dbg_MenuLeft"},
        {E_ACTION_MAPPING_MENU_RIGHT, "Dbg_MenuRight"},
        {E_ACTION_MAPPING_CURSOR_SKIP, "Dbg_CursorSkip"},
        {E_ACTION_MAPPING_CURSOR_SKIP_LARGE, "Dbg_CursorSkipLarge"},
        {E_ACTION_MAPPING_DBG_SWITCH_GOST, "Dbg_Switch_Gost"},
        {E_ACTION_MAPPING_DEBUG_PLAYER_UP, "Dbg_PlayerUp"},
        {E_ACTION_MAPPING_DEBUG_PLAYER_DOWN, "Dbg_PlayerDown"},
        {E_ACTION_MAPPING_BTL_DBG_CENTER, "Btl_Dbg_Center"},
        {E_ACTION_MAPPING_BTL_DBG_OPTION, "Btl_Dbg_Option"},
        {E_ACTION_MAPPING_BTL_DBG_R1, "Btl_Dbg_R1"},
        {E_ACTION_MAPPING_BTL_DBG_R2, "Btl_Dbg_R2"},
        {E_ACTION_MAPPING_BTL_DBG_L1, "Btl_Dbg_L1"},
        {E_ACTION_MAPPING_BTL_DBG_L2, "Btl_Dbg_L2"},
        {E_ACTION_MAPPING_EVT_DBG_1, "Evt_Dbg_1"},
        {E_ACTION_MAPPING_EVT_DBG_2, "Evt_Dbg_2"},
        {E_ACTION_MAPPING_AUTOMAP_ZOOM_UP, "Automap_ZoomUp"},
        {E_ACTION_MAPPING_AUTOMAP_ZOOM_DOWN, "Automap_ZoomDown"}
    };
    return MappingNames.Contains(ActionMapping) ? MappingNames[ActionMapping] : NAME_None;
}

bool APadController::CheckMouseKeyboardEnable()
{
    //return UKismetSystemLibrary::IsInputKeyDown(this, EKeys::MouseX) || UKismetSystemLibrary::IsInputKeyDown(this, EKeys::KeyboardEnter);
    return true;
}

bool APadController::CheckKeyConfigLoaded()
{
    return true; // Stub, extend to check configuration loading status.
}

bool APadController::CheckGamePadUI()
{
    return false; // Stub for gamepad UI status checking.
}

bool APadController::CheckGamePadEnable()
{
    return true; // Stub, extend to check if gamepad input is enabled.
}

void APadController::CallManualAxisMapping_Core(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, float Scale)
{
    InputComponent->AxisBindings.Add(FInputAxisBinding(GetAxisMappingName(AxisMapping)));
}

void APadController::CallManualAnalogStickValue(bool IsLeftStick, bool IsX, float Value)
{
    FName AxisName = IsLeftStick ? (IsX ? TEXT("LeftStickX") : TEXT("LeftStickY")) : (IsX ? TEXT("RightStickX") : TEXT("RightStickY"));
    InputComponent->AxisBindings.Add(FInputAxisBinding(AxisName));
}
//likely need ActionPadDelegateBinding
void APadController::CallManualActionMapping_Core(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping)
{
    //InputComponent->GetActionBindings().Add(FInputActionBinding(GetActionMappingName(ActionMapping), IE_Pressed)*);
}

void APadController::CallBeforeOutputDefaultTable()
{
    // Stub for handling default table preparation.
}

TEnumAsByte<E_GAMEPAD_TYPE> APadController::GetConnectedGamepadType_ForSteam() {
    return E_GAMEPAD_OTHER;
}