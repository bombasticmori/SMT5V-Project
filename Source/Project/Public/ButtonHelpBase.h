#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "BtnHelpInfo.h"
#include "E_BTN_HELP_DIR.h"
#include "E_BTN_HELP_SET.h"
#include "ButtonHelpBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API AButtonHelpBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtnHelpInfo> m_BtnHelpInfo_Horizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBtnHelpInfo> m_BtnHelpInfo_Vertical;
    
public:
    AButtonHelpBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SortHelpInfo(E_BTN_HELP_DIR InDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetHelpInfo_Preset(E_BTN_HELP_DIR InDirection, TEnumAsByte<E_BTN_HELP_SET> InPattern, bool IsSort);
    
    UFUNCTION(BlueprintCallable)
    void SetHelpInfo_Manual(E_BTN_HELP_DIR InDirection, UPARAM(Ref) TArray<FBtnHelpInfo>& InHelpInfo, bool IsSort);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBtnHelpInfo> GetHelpInfo(E_BTN_HELP_DIR InDirection);
    
};

