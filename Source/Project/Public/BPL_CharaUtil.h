#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DevilAssetTable_Raw.h"
#include "E_BAD_STATUS.h"
#include "BPL_CharaUtil.generated.h"

class UAnimInstance;
class UDataTable;
class USkinnedMeshComponent;

UCLASS(Blueprintable)
class UBPL_CharaUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_CharaUtil();

private:
    UFUNCTION(BlueprintCallable)
    static int32 SetUpState_inner(TArray<E_BAD_STATUS> BadStatus);
    
    UFUNCTION(BlueprintCallable)
    static void PickUpSurfaceStatus_inner(int32 State, E_BAD_STATUS BeforeStatus, E_BAD_STATUS& ret, bool& IsNeedResetMaterial);
    
    UFUNCTION(BlueprintCallable)
    static TArray<E_BAD_STATUS> PickUpStatus_inner(int32 State);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadDevilAssetTableRawData(UDataTable* DataTable, UPARAM(Ref) TMap<int32, FDevilAssetTable_Raw>& OutMap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSyncGroupPosition(const UAnimInstance* AnimInstance, const FName& GroupName, FName& OutPreviousMarkerName, FName& OutNextMarkerName, float& OutPositionBetweenMarkers);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLODLevel(USkinnedMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCalcIKLevel(USkinnedMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindOriginalDevilIByRawMap(int32 DevilID, const TMap<int32, FDevilAssetTable_Raw>& RawMap);
    
};

