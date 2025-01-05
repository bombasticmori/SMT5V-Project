#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "E_DEFENCE_RESISTANCE.h"
#include "E_UI_STATUS_SLOT.h"
#include "UIStatusSlotItemData.h"
#include "BPL_CharaStatusObject.generated.h"

class ACustomPawn;
class UScriptMessageAsset;
class UTextBlock;
class UUIStatusCtrlDataObjBase;

UCLASS(Blueprintable)
class UBPL_CharaStatusObject : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_CharaStatusObject();

    UFUNCTION(BlueprintCallable)
    static void Test_LogStatus(UUIStatusCtrlDataObjBase* dataObj);
    
    UFUNCTION(BlueprintCallable)
    static void SetBiographyText(TArray<UTextBlock*> textArr, int32 DevilID, const UScriptMessageAsset* StatusMessage, const UScriptMessageAsset* DevilProfile, int32 Offset, int32& newOffset, float& scrollBarRate, int32& rowMax);
    
    UFUNCTION(BlueprintCallable)
    static void ReleaseResidentStreamingTexture(UPARAM(Ref) ACustomPawn*& CustomPawn);
    
    UFUNCTION(BlueprintCallable)
    static void PreStreamStatusModelTexture(UPARAM(Ref) ACustomPawn*& CustomPawn, float second);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSlotTitle(E_UI_STATUS_SLOT Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSlotItem(E_UI_STATUS_SLOT Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSlotAnimSimpleType(E_UI_STATUS_SLOT Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMagatsuhiSkillSlot(const FUIStatusSlotItemData& slotData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCompleteLoadTexture(UPARAM(Ref) ACustomPawn*& CustomPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSpawnEarlyDelayForCharaChanger2DBase(int32 stepNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSpawnDelayForCharaChanger2DBase(int32 stepNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSkillNameText(const int32& SkillId, const int32& addNum, const UScriptMessageAsset* systemMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetResistancesBadText(E_DEFENCE_RESISTANCE Type, bool IsLast, const UScriptMessageAsset* StatusMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetResistancesBadIconID(int32 resistancesBadIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlayerProfile(const UScriptMessageAsset* profile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlayerName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetPlayerFullName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDevilSpawnAreaText(int32 DevilID, const bool isTop, const UScriptMessageAsset* mapAreaMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDevilProfile(int32 DevilID, const UScriptMessageAsset* StatusMessage, const UScriptMessageAsset* DevilProfile);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetConditionText(const UScriptMessageAsset* conditionMessage, int32 textID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertResistancesBadIndex2Index(int32 resistancesBadIndex);
    
    UFUNCTION(BlueprintCallable)
    static void AddViewSlaveLocationBP(const FVector& SlaveLocation, float BoostFactor, bool bOverrideLocation, float Duration);
    
};

