#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BtlAttack.h"
#include "BtlParty.h"
#include "E_ATTRIBUTE_TYPE.h"
#include "E_SKILL_TEKISEI_CATEGORY.h"
#include "E_SKILL_TEKISEI_EFT_TYPE.h"
#include "BPL_BattleAttack.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UBPL_BattleAttack : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_BattleAttack();

    UFUNCTION(BlueprintCallable)
    static FBtlAttack MakeUpBattleAttackData(FBtlParty Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BtlAttackIsSummon(FBtlAttack pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BtlAttackIsRecoverySkill(FBtlAttack pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BtlAttackIsRecome(FBtlAttack pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BtlAttackIsPhysicalAttack(FBtlAttack pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BtlAttackIsMasicalAttack(FBtlAttack pData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BtlAttackIsHaveAtrAttr(FBtlAttack pData, E_ATTRIBUTE_TYPE inAttr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BtlAttackGetTekiseiValue(FBtlParty Player, FBtlAttack pData, E_SKILL_TEKISEI_EFT_TYPE checkType, int32& retValue, E_SKILL_TEKISEI_CATEGORY& retCateg);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BtlAttackCheckAttr(FBtlAttack pData, E_ATTRIBUTE_TYPE checkAttr);
    
};

