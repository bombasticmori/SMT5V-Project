#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "UMG.h"
#include "E_SYS_INFO_ANIM.h"
#include "OnEventDispatherEndViewDelegate.h"
#include "UIAnimationTableData.h"
#include "UIAnimationTaskData.h"
#include "UISystemInfoBase.generated.h"

class UUIAnimtionCtrl;

UCLASS(Blueprintable)
class PROJECT_API UUISystemInfoBase : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventDispatherEndView OnEventDispather_EndView;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString m_InfoName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIAnimationTaskData> m_AnimTaskArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUIAnimationTaskData m_AnimViewTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUIAnimationTableData> m_AnimTableDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUIAnimtionCtrl* m_pAnimCtrl;
    
public:
    UUISystemInfoBase();

    UFUNCTION(BlueprintCallable)
    void StopAnim(E_SYS_INFO_ANIM animType);
    
    UFUNCTION(BlueprintCallable)
    void StartViewAnim(E_SYS_INFO_ANIM animType, float waitTime);
    
    UFUNCTION(BlueprintCallable)
    void StartAnim(E_SYS_INFO_ANIM animType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetInfoName();
    
    UFUNCTION(BlueprintCallable)
    void ChangeView();
    
};

