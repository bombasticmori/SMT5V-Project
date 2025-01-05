#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "BtlCommandUIData.h"
#include "BtlParty.h"
#include "E_ACTION_MAPPING_TYPE.h"
#include "E_BTL_COMM_ANIM_TABLE.h"
#include "E_BTL_COMM_ANIM_TYPE.h"
#include "E_BTL_UI_COMMAND.h"
#include "UIAnimationTableData.h"
#include "UIAnimationTaskData.h"
#include "UIWidgetBase.h"
#include "BtlCommandWidgetBase.generated.h"

class UUIAnimtionCtrl;

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UBtlCommandWidgetBase : public UUIWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBtlParty m_PartyData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float const_HoldOnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_IsHold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<E_ACTION_MAPPING_TYPE> m_HoldActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    E_BTL_UI_COMMAND m_HoldCommandType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIAnimationTaskData> m_AnimTaskArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIAnimationTableData> m_AnimTableDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUIAnimtionCtrl* m_pAnimCtrl;
    
public:
    UBtlCommandWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpDataHoldBarUI(E_BTL_UI_COMMAND commandType, float Time, float maxTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool StartAnimation(E_BTL_COMM_ANIM_TYPE animType, bool isReverse, bool isCheckPlaySame);
    
    UFUNCTION(BlueprintCallable)
    bool PlayUIAnimation(float DeltaTime, bool& isPlayEnd);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimation_UnitFormBlinking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimation_Clear();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayUIAnimation(E_BTL_COMM_ANIM_TYPE animType);
    
    UFUNCTION(BlueprintCallable)
    bool InputCheckOne(FBtlCommandUIData commandData, bool& isInput, E_BTL_UI_COMMAND& inputCommand);
    
    UFUNCTION(BlueprintCallable)
    bool Input(bool& isInput, E_BTL_UI_COMMAND& inputCommand);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init_BP();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSetAnimDataTableTypes(E_BTL_COMM_ANIM_TYPE Type, TArray<E_BTL_COMM_ANIM_TABLE>& tblTypes, bool& isLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyData_PartyIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPartyData_NkmIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsHold();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIAnimationTableData GetAnimTableData(E_BTL_COMM_ANIM_TABLE tableType);
    
    UFUNCTION(BlueprintCallable)
    FUIAnimationTaskData GetAnimationTask(E_BTL_COMM_ANIM_TYPE animType);
    
    UFUNCTION(BlueprintCallable)
    void EndAnimation(E_BTL_COMM_ANIM_TYPE animType);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAnimCtrl();
    
    UFUNCTION(BlueprintCallable)
    void CreateAnimCtrl();
    
    UFUNCTION(BlueprintCallable)
    void ClearHold();
    
    UFUNCTION(BlueprintCallable)
    void ClearAnimTable(FUIAnimationTableData animTableData);
    
private:
    UFUNCTION(BlueprintCallable)
    FVector2D CalcHoldBarSize(FVector2D barSize, float Time, float maxTime);
    
    UFUNCTION(BlueprintCallable)
    void AddHoldTime(float addTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAnimTable(FUIAnimationTableData animTableData);
    
    UFUNCTION(BlueprintCallable)
    void AddAnimationTask(E_BTL_COMM_ANIM_TYPE animType, bool isReverse);
    
};

