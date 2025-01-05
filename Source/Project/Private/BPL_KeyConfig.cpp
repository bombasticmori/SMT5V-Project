#include "BPL_KeyConfig.h"

UBPL_KeyConfig::UBPL_KeyConfig() {
}

bool UBPL_KeyConfig::SetSubKey_FromAxisMapping(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey Key) {
    return false;
}

bool UBPL_KeyConfig::SetSubKey_FromActionMapping(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey Key) {
    return false;
}

void UBPL_KeyConfig::SetStickSensitivity(int32 Volume) {
}

bool UBPL_KeyConfig::SetMainKey_FromAxisMapping(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey Key) {
    return false;
}

bool UBPL_KeyConfig::SetMainKey_FromActionMapping(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey Key) {
    return false;
}

void UBPL_KeyConfig::SaveActionAxisMapping(const UObject* WorldContextObject, bool SystemSave) {
}

void UBPL_KeyConfig::RewriteActionMapping_MovieSkip(const UObject* WorldContextObject, bool reverse) {
}

void UBPL_KeyConfig::RewriteActionMapping_FieldR3(TEnumAsByte<E_StickButtonAction> StickButtonAction) {
}

void UBPL_KeyConfig::RewriteActionMapping_FieldL3(TEnumAsByte<E_StickButtonAction> StickButtonAction) {
}

void UBPL_KeyConfig::RewriteActionMapping_ActionAndCancel(const UObject* WorldContextObject, bool reverse) {
}

void UBPL_KeyConfig::ResetAxisMappingToDefault(const UObject* WorldContextObject, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey) {
}

void UBPL_KeyConfig::ResetActionMappingToDefault(const UObject* WorldContextObject, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey) {
}

void UBPL_KeyConfig::RemoveAxisMappingKey(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, FKey Key) {
}

void UBPL_KeyConfig::RemoveActionMappingKey(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey Key) {
}

void UBPL_KeyConfig::LoadActionAxisMapping(const UObject* WorldContextObject, bool systemSaveLoad) {
}

bool UBPL_KeyConfig::GetSubKey_FromAxisMapping(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey& Key, bool Gamepad) {
    return false;
}

bool UBPL_KeyConfig::GetSubKey_FromActionMapping(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key, bool Gamepad) {
    return false;
}

float UBPL_KeyConfig::GetStickSensitivityScale(const UObject* WorldContextObject) {
    return 0.0f;
}

bool UBPL_KeyConfig::GetSafetyKey_FromAxisMapping(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey& Key) {
    return false;
}

bool UBPL_KeyConfig::GetSafetyKey_FromActionMapping(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key) {
    return false;
}

bool UBPL_KeyConfig::GetMainKey_FromAxisMapping(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey& Key, bool Gamepad) {
    return false;
}

bool UBPL_KeyConfig::GetMainKey_FromActionMapping(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key, bool Gamepad) {
    return false;
}

bool UBPL_KeyConfig::GetDefaultSubKey_FromAxisMapping(const UObject* WorldContextObject, TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey& Key, bool Gamepad) {
    return false;
}

bool UBPL_KeyConfig::GetDefaultSubKey_FromActionMapping(const UObject* WorldContextObject, TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key, bool Gamepad) {
    return false;
}

bool UBPL_KeyConfig::GetDefaultMainKey_FromAxisMapping(const UObject* WorldContextObject, TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey& Key, bool Gamepad) {
    return false;
}

bool UBPL_KeyConfig::GetDefaultMainKey_FromActionMapping(const UObject* WorldContextObject, TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key, bool Gamepad) {
    return false;
}

TArray<FActionMappingInfoRow> UBPL_KeyConfig::GetDefaultActionMappingRows(const UObject* WorldContextObject) {
    return TArray<FActionMappingInfoRow>();
}

bool UBPL_KeyConfig::GetAxisMappingKeys_ForHelp(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, TArray<FKey>& Keys) {
    return false;
}

void UBPL_KeyConfig::GetAxisMappingKeys(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, TArray<FKey>& Keys, TArray<float>& Scales, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey) {
}

void UBPL_KeyConfig::GetAxisMapping_FromKey(FKey Key, TArray<TEnumAsByte<E_AXIS_MAPPING_TYPE>>& AxisMappings) {
}

void UBPL_KeyConfig::GetActionMappingKeys(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, TArray<FKey>& Keys, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey) {
}

bool UBPL_KeyConfig::GetActionMappingKey_ForHelp(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key) {
    return false;
}

void UBPL_KeyConfig::GetActionMapping_FromKey(FKey Key, TArray<TEnumAsByte<E_ACTION_MAPPING_TYPE>>& ActionMappings) {
}

void UBPL_KeyConfig::ConvertKeys_ForController(TArray<FKey> InKeys, TArray<FKey>& outKeys, bool Gamepad, bool Keyboard, bool Mouse, bool OtherKey) {
}

void UBPL_KeyConfig::ClearAxisMappingKey(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey) {
}

void UBPL_KeyConfig::ClearActionMappingKey(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey) {
}

void UBPL_KeyConfig::AddAxisMappingKey(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, FKey Key, float Scale) {
}

void UBPL_KeyConfig::AddActionMappingKey(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey Key) {
}


