#pragma once
#include "CoreMinimal.h"
#include "E_UI_STATUS_CTRL_TYPE.h"
#include "E_UI_STATUS_UNITE_SOURCE.h"
#include "UIStatusCtrlDataObjBase.h"
#include "UIStatusCtrlDataObjUnite.generated.h"

class AUniteCtrl;

UCLASS(Blueprintable)
class UUIStatusCtrlDataObjUnite : public UUIStatusCtrlDataObjBase {
    GENERATED_BODY()
public:
    UUIStatusCtrlDataObjUnite();

    UFUNCTION(BlueprintCallable)
    void UpdateSkillInherit(int32 parentCursor, int32 ChildCursorIndex, bool& Moved);
    
    UFUNCTION(BlueprintCallable)
    void SetUtsusemiStatusFromDevilID(int32 DevilID);
    
    UFUNCTION(BlueprintCallable)
    void SetUniteCtrl(AUniteCtrl* UniteCtrlActor);
    
    UFUNCTION(BlueprintCallable)
    void SetSimpleData_Fusion(E_UI_STATUS_UNITE_SOURCE Type, int32 DataIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetElemStatusLinkList(int32 UIindex, E_UI_STATUS_UNITE_SOURCE Type, int32 DataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUtsusemiInherit();
    
    UFUNCTION(BlueprintCallable)
    void InitSkillInherit(const bool returnFromResult);
    
    UFUNCTION(BlueprintCallable)
    void InitResistancesInheritData();
    
    UFUNCTION(BlueprintCallable)
    void InitInheritResult();
    
    UFUNCTION(BlueprintCallable)
    void InitInhelitTestData(int32 parentSkillNum, int32 DevilID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetReturnCursorPosition(const int32& beforeOffset, int32& retOffset, int32& retCursorPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_UI_STATUS_CTRL_TYPE GetCtrlType();
    
    UFUNCTION(BlueprintCallable)
    void ClearStatusList();
    
};

