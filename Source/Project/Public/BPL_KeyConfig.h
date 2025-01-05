#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "ActionMappingInfoRow.h"
#include "E_ACTION_MAPPING_TYPE.h"
#include "E_AXIS_MAPPING_TYPE.h"
#include "E_StickButtonAction.h"
#include "BPL_KeyConfig.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_KeyConfig : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_KeyConfig();

    UFUNCTION(BlueprintCallable)
    static bool SetSubKey_FromAxisMapping(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static bool SetSubKey_FromActionMapping(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static void SetStickSensitivity(int32 Volume);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMainKey_FromAxisMapping(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static bool SetMainKey_FromActionMapping(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveActionAxisMapping(const UObject* WorldContextObject, bool SystemSave);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RewriteActionMapping_MovieSkip(const UObject* WorldContextObject, bool reverse);
    
    UFUNCTION(BlueprintCallable)
    static void RewriteActionMapping_FieldR3(TEnumAsByte<E_StickButtonAction> StickButtonAction);
    
    UFUNCTION(BlueprintCallable)
    static void RewriteActionMapping_FieldL3(TEnumAsByte<E_StickButtonAction> StickButtonAction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RewriteActionMapping_ActionAndCancel(const UObject* WorldContextObject, bool reverse);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetAxisMappingToDefault(const UObject* WorldContextObject, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetActionMappingToDefault(const UObject* WorldContextObject, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAxisMappingKey(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, FKey Key);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveActionMappingKey(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadActionAxisMapping(const UObject* WorldContextObject, bool systemSaveLoad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSubKey_FromAxisMapping(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey& Key, bool Gamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSubKey_FromActionMapping(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key, bool Gamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetStickSensitivityScale(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSafetyKey_FromAxisMapping(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSafetyKey_FromActionMapping(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMainKey_FromAxisMapping(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey& Key, bool Gamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetMainKey_FromActionMapping(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key, bool Gamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetDefaultSubKey_FromAxisMapping(const UObject* WorldContextObject, TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey& Key, bool Gamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetDefaultSubKey_FromActionMapping(const UObject* WorldContextObject, TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key, bool Gamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetDefaultMainKey_FromAxisMapping(const UObject* WorldContextObject, TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Plus, FKey& Key, bool Gamepad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetDefaultMainKey_FromActionMapping(const UObject* WorldContextObject, TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key, bool Gamepad);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<FActionMappingInfoRow> GetDefaultActionMappingRows(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAxisMappingKeys_ForHelp(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, TArray<FKey>& Keys);
    
    UFUNCTION(BlueprintCallable)
    static void GetAxisMappingKeys(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, TArray<FKey>& Keys, TArray<float>& Scales, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey);
    
    UFUNCTION(BlueprintCallable)
    static void GetAxisMapping_FromKey(FKey Key, TArray<TEnumAsByte<E_AXIS_MAPPING_TYPE>>& AxisMappings);
    
    UFUNCTION(BlueprintCallable)
    static void GetActionMappingKeys(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, TArray<FKey>& Keys, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey);
    
    UFUNCTION(BlueprintCallable)
    static bool GetActionMappingKey_ForHelp(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey& Key);
    
    UFUNCTION(BlueprintCallable)
    static void GetActionMapping_FromKey(FKey Key, TArray<TEnumAsByte<E_ACTION_MAPPING_TYPE>>& ActionMappings);
    
    UFUNCTION(BlueprintCallable)
    static void ConvertKeys_ForController(TArray<FKey> InKeys, TArray<FKey>& outKeys, bool Gamepad, bool Keyboard, bool Mouse, bool OtherKey);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAxisMappingKey(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey);
    
    UFUNCTION(BlueprintCallable)
    static void ClearActionMappingKey(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, bool Gamepad, bool Keyboard, bool MouseButton, bool OtherKey);
    
    UFUNCTION(BlueprintCallable)
    static void AddAxisMappingKey(TEnumAsByte<E_AXIS_MAPPING_TYPE> AxisMapping, FKey Key, float Scale);
    
    UFUNCTION(BlueprintCallable)
    static void AddActionMappingKey(TEnumAsByte<E_ACTION_MAPPING_TYPE> ActionMapping, FKey Key);
    
};

