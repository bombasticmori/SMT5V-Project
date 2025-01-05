#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "E_BTN_HELP_DIR.h"
#include "E_BTN_HELP_MAPPING_KEY_TYPE.h"
#include "E_BTN_HELP_MOUSE_ICON_TYPE.h"
#include "E_BTN_HELP_MSG_TYPE.h"
#include "E_BTN_ICON_SIZE.h"
#include "E_OPTION_CONTENT_BUTTON_ICON_TYPE.h"
#include "BPL_ButtonHelpData.generated.h"

class UObject;

UCLASS(Blueprintable)
class PROJECT_API UBPL_ButtonHelpData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_ButtonHelpData();

    UFUNCTION(BlueprintCallable)
    static bool OnClickedBtnHelpFunc(E_BTN_HELP_MAPPING_KEY_TYPE InMappingType, int32 InIconIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsKeyboardIconDraw_ByRichTextTag(const FString& InTagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsExternalFontKey(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAxisMapping_ByMappingEnum(E_BTN_HELP_MAPPING_KEY_TYPE InMappingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPadBtnTexturePath_ByOptionSetting(E_OPTION_CONTENT_BUTTON_ICON_TYPE InIconType, E_BTN_ICON_SIZE InIconSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetPadBtnTexture_ByOptionSetting(E_OPTION_CONTENT_BUTTON_ICON_TYPE InIconType, E_BTN_ICON_SIZE InIconSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_BTN_HELP_MOUSE_ICON_TYPE GetMouseIconType_ByRichTextTag(const FString& InTagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_BTN_HELP_MOUSE_ICON_TYPE GetMouseIconType_ByFKey(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetKeyboardIconTexUV(E_BTN_ICON_SIZE InIconSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateFontInfo GetKeyboardIconTextFont(int32 InIconSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetKeyboardIconDispNum_ByRichTextTag(const FString& InTagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetKeyboardHelpText_ByRichTextTag(const FString& InTagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetKeyboardHelpText_ByMappingEnum(E_BTN_HELP_MAPPING_KEY_TYPE InMappingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetKeyboardHelpSsPlayerFrame(const FString& InTagName, int32 InIconSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor GetExternalFontTexUV_ByMappingEnum(FKey InKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetButtonHelpMessage(E_BTN_HELP_MSG_TYPE InMsgtype);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetBtnIconWidgetSize_ByRichTextTag(const FString& InTagName, bool IsGamePad, int32 InIconSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetBtnHelpTexUV_ByMappingEnum(E_BTN_HELP_MAPPING_KEY_TYPE InMappingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBtnHelpSortOrder_ByMappingEnum(E_BTN_HELP_DIR InDirection, E_BTN_HELP_MAPPING_KEY_TYPE InMappingType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBtnHelpMaxNum(E_BTN_HELP_DIR InDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FKey> GetBtnHelpKeyList_ByMappingEnum(E_BTN_HELP_MAPPING_KEY_TYPE InMappingType, bool IsGamePad);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static E_BTN_HELP_MAPPING_KEY_TYPE GetActionMappingIconType_ByRichTextTag(const FString& InTagName);
    
};

