#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "E_BTL_BOSS_FLAG.h"
#include "E_BTL_PARTY_STAT.h"
#include "E_BTL_PARTY_STAT2.h"
#include "E_BTL_SIDE.h"
#include "BPI_PTFlagInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UBPI_PTFlagInterface : public UInterface {
    GENERATED_BODY()
};

class IBPI_PTFlagInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelFlagSideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT inFlag) PURE_VIRTUAL(BI_DelFlagSideAll,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelFlagAll(E_BTL_PARTY_STAT inFlag) PURE_VIRTUAL(BI_DelFlagAll,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelFlag2SideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT2 inFlag) PURE_VIRTUAL(BI_DelFlag2SideAll,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelFlag2All(E_BTL_PARTY_STAT2 inFlag) PURE_VIRTUAL(BI_DelFlag2All,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag) PURE_VIRTUAL(BI_DelFlag2,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag) PURE_VIRTUAL(BI_DelFlag,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_DelBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag) PURE_VIRTUAL(BI_DelBossFlag,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag) PURE_VIRTUAL(BI_CheckFlag2, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag) PURE_VIRTUAL(BI_CheckFlag, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool BI_CheckBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag) PURE_VIRTUAL(BI_CheckBossFlag, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddFlagSideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT inFlag) PURE_VIRTUAL(BI_AddFlagSideAll,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddFlagAll(E_BTL_PARTY_STAT inFlag) PURE_VIRTUAL(BI_AddFlagAll,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddFlag2SideAll(E_BTL_SIDE side, E_BTL_PARTY_STAT2 inFlag) PURE_VIRTUAL(BI_AddFlag2SideAll,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddFlag2All(E_BTL_PARTY_STAT2 inFlag) PURE_VIRTUAL(BI_AddFlag2All,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddFlag2(int32 partyIndex, E_BTL_PARTY_STAT2 inFlag) PURE_VIRTUAL(BI_AddFlag2,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddFlag(int32 partyIndex, E_BTL_PARTY_STAT inFlag) PURE_VIRTUAL(BI_AddFlag,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BI_AddBossFlag(int32 partyIndex, E_BTL_BOSS_FLAG inFlag) PURE_VIRTUAL(BI_AddBossFlag,);
    
};

