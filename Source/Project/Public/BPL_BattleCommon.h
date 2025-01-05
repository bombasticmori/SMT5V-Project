#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextureFilter -FallbackName=TextureFilter
#include "E_BTL_CHAR_TYPE.h"
#include "BPL_BattleCommon.generated.h"

class UDataTable;
class UTextureRenderTarget2D;
class UUserWidget;

UCLASS(Blueprintable)
class PROJECT_API UBPL_BattleCommon : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BattleCommon();

    UFUNCTION(BlueprintCallable)
    static void TalkQuizNotCountAdd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> RetrieveCameraNameInner(const UDataTable* CameraTable, const FString& CoreName, int32 FB, int32 LR, bool IsNoWildCard);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUpliftingGaugeMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetUpliftingGaugeConsumptionValue();
    
    UFUNCTION(BlueprintCallable)
    static void BattleUIDrawWidgetToTarget(UTextureRenderTarget2D* target, UUserWidget* WidgetToRender, FVector2D DrawSize, bool UseGamma, TEnumAsByte<TextureFilter> Filter, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    static void BattleCommonSetCurrentHeroType(uint8 Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BattleCommonGetPreFirstActor(int32 encountID, bool isEvent, E_BTL_CHAR_TYPE& Type, int32& DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BattleCommonGetInochigoiCnt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 BattleCommonGetCurrentHeroType();
    
    UFUNCTION(BlueprintCallable)
    static void BattleCommonDelInochigoiCnt(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void BattleCommonClearInochigoiCnt();
    
};

