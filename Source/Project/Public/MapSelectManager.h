#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "E_MAP_SELECT_STEP.h"
#include "MinimapMapSelectItem.h"
#include "MapSelectManager.generated.h"

class UMapSelectManager;

UCLASS(Blueprintable)
class PROJECT_API UMapSelectManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ParentCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ChildCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MAP_SELECT_STEP m_Step;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinimapMapSelectItem> m_ItemArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinimapMapSelectItem> m_ParentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinimapMapSelectItem> m_ChildArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinimapMapSelectItem> m_AreaInMapArray;
    
public:
    UMapSelectManager();

    UFUNCTION(BlueprintCallable)
    void ToParentStep();
    
    UFUNCTION(BlueprintCallable)
    void ToChildStep(int32 ParentIndex);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SharesParent(int32 MapIdA, int32 AreaIdA, int32 MapIdB, int32 AreaIdB) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 SearchParentIndexByMapId(int32 mapId, int32 AreaId, bool& OutFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMinimapMapSelectItem SearchItemByMapId(int32 mapId, int32 AreaId, bool& OutFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 SearchChildIndexByMapId(int32 mapId, int32 AreaId, bool& OutFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMinimapMapSelectItem GetParentItemByIndex(int32 Cursor, bool& OutFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> getMessageList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMapSelectManager* GetMapSelectManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMinimapMapSelectItem GetFirstChildItem(int32 Cursor, bool& OutFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMinimapMapSelectItem GetDataItemByIndex(int32 Cursor, bool& OutFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMinimapMapSelectItem GetChildItemByIndex(int32 Cursor, bool& OutFound) const;
    
};

