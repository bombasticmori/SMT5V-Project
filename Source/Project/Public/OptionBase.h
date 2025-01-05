#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "E_BTN_HELP_MAPPING_KEY_TYPE.h"
#include "E_OPTION_ADDITIONAL_RESPONCE.h"
#include "E_OPTION_CONTENT_LANGUAGE_TYPE.h"
#include "E_OPTION_DLC_TYPE.h"
#include "E_OPTION_SLOT_TYPE.h"
#include "OptionBase.generated.h"

class IMessageTagInterface;
class UMessageTagInterface;
class UObject;
class UScriptMessageAsset;

UCLASS(Blueprintable)
class PROJECT_API AOptionBase : public AActor {
    GENERATED_BODY()
public:
    AOptionBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnsetSlotKeySelect(int32 category, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetSlotKeySelect(FKey Key, int32 category, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void SetItemIndex(int32 category, int32 SlotIndex, int32 newItemIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetDefaultValue(const UObject* WorldContextObject, const int32 in_Category);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ResetKeySelectList(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    E_OPTION_ADDITIONAL_RESPONCE RefrectSettingsDuringOptionControl(const UObject* WorldContextObject, const int32 category, const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RefrectDisplayBrightness(int32 Volume);
    
    UFUNCTION(BlueprintCallable)
    void RecordNowWindowsSettings(const bool NewInitialize);
    
    UFUNCTION(BlueprintCallable)
    void RecordCategoryKeySelect(int32 category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectableSlot(int32 category, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMouseOnlyKeySlot(int32 category, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainKeySlot(int32 category, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeySelectCancel(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistUnsetMainKeySelect(int32 category);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExistDLC(E_OPTION_DLC_TYPE dlcType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableKey(FKey Key, int32 category, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangedTimedItemIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangedSettingsbyExternalControl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangedKeyboardLayout();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChangedItemIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlreadyUsingKey(FKey Key, int32 category, int32 Index);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Initialize(const UObject* WorldContextObject, const uint8 UseType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_OPTION_SLOT_TYPE GetSlotType(int32 category, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetSlotSubText(TScriptInterface<IMessageTagInterface> dst, const int32 category, const int32 SlotIndex, const UScriptMessageAsset* pMsgAsset, const UScriptMessageAsset* pDifficultyMsgAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetSlotMainText(const int32 category, const int32 SlotIndex, const UScriptMessageAsset* pMsgAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotListLength(int32 category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_BTN_HELP_MAPPING_KEY_TYPE GetSlotBtnIcon(const int32 category, const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectionNum(int32 category, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_OPTION_CONTENT_LANGUAGE_TYPE GetSelectedVoiceType();
    
    UFUNCTION(BlueprintCallable)
    void GetKeySelectSlotSubText(TScriptInterface<IMessageTagInterface> dst, int32& colorType, FKey& KeyType, const int32 category, const int32 SlotIndex, const UScriptMessageAsset* pMsgAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemIndex(int32 category, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHelpMessageId(int32 category, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEtcSaveNeeds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDetailTitleID(int32 category, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDetailMainTextID(int32 category, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCategoryMax();
    
    UFUNCTION(BlueprintCallable)
    void DiscardKeySelect(int32 category);
    
    UFUNCTION(BlueprintCallable)
    void ApplyTimedItemSettings(bool Reset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ApplyChangedValue(const UObject* WorldContextObject);
    
};

