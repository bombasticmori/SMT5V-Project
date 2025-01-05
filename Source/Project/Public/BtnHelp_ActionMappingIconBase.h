#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "Blueprint/UserWidget.h"
#include "Fonts/SlateFontInfo.h"
#include "E_BTN_HELP_MAPPING_KEY_TYPE.h"
#include "E_BTN_ICON_SIZE.h"
#include "BtnHelp_ActionMappingIconBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UBtnHelp_ActionMappingIconBase : public UUserWidget {
    GENERATED_BODY()
public:
    UBtnHelp_ActionMappingIconBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconTranslation(FVector2D InTranslation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconSize(E_BTN_ICON_SIZE InIconSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconInfo(E_BTN_HELP_MAPPING_KEY_TYPE InIconMappingType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconDispMode(bool IsGamePad);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconColor_ByActiveState(bool IsActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIconColor(FLinearColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<FString> GetKeyboardIconText();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    TArray<int32> GetKeyboardIconSsPlayerFrame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    FSlateFontInfo GetKeyboardIconFont();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    int32 GetKeyboardIconDispNum();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool GetIconDispMode();
    
};

