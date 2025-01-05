#pragma once
#include "CoreMinimal.h"
#include "UIAnimationTableData.h"
#include "UIAnimationTaskData.h"
#include "UIWidgetBase.h"
#include "UIWidgetAnim.generated.h"

class UUIAnimtionCtrl;

UCLASS(Blueprintable, EditInlineNew)
class PROJECT_API UUIWidgetAnim : public UUIWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIAnimationTaskData> m_AnimTaskArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIAnimationTableData> m_AnimTableDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUIAnimtionCtrl* m_pAnimCtrl;
    
public:
    UUIWidgetAnim();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetSetAnimDataTable(uint8 animType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIAnimationTableData GetAnimTableData(uint8 tableType);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAnimCtrl();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUIAnimationTaskData CreateAnimTaskData(int32 taskIndex, TArray<uint8> animTableArray, bool isLoop, bool isRev);
    
    UFUNCTION(BlueprintCallable)
    void CreateAnimTable();
    
    UFUNCTION(BlueprintCallable)
    void CreateAnimCtrl();
    
    UFUNCTION(BlueprintCallable)
    void ClearAnimTable();
    
    UFUNCTION(BlueprintCallable)
    void CallStopAnimation(int32 taskIndex);
    
    UFUNCTION(BlueprintCallable)
    FUIAnimationTaskData CallPlayAnimation(float DeltaTime, FUIAnimationTaskData animTaskData, bool& ret);
    
    UFUNCTION(BlueprintCallable)
    void AddAnimTable(FUIAnimationTableData animTableData);
    
};

