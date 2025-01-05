#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "DlcMountCompleteDispatherDelegate.h"
#include "DlcTableDataDispatherDelegate.h"
#include "DlcTableData_One.h"
#include "DlcTableData.generated.h"

UCLASS(Blueprintable)
class PROJECT_API UDlcTableData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDlcTableDataDispather OnContentEnable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDlcTableDataDispather OnContentDisable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDlcMountCompleteDispather MountComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDlcTableData_One> DataArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    bool bMountCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDlcTableData_One DLC_DummyData;
    
public:
    UDlcTableData();

    UFUNCTION(BlueprintCallable)
    void UpdateDLCFlag();
    
    UFUNCTION(BlueprintCallable)
    void SetDLCFlag(FName NameTag, bool isOn);
    
    UFUNCTION(BlueprintCallable)
    void MountCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckDLCFlag(FName NameTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDLCSaveId(FName NameTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetDlcNameTagList();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllDlcSystemSaveFlag(bool InClearMountFlag, bool InClearSystemFlag);
    
};

