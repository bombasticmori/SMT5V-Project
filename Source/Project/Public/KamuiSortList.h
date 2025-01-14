#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "E_KAMUI_SORT_TYPE.h"
#include "KamuiSortList.generated.h"
//Note: 'Kamui' seems to refer to Miracles
UCLASS(Blueprintable)
class PROJECT_API UKamuiSortList : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_KamuiIDList;
    
public:
    UKamuiSortList();

    UFUNCTION(BlueprintCallable)
    void SortKamuiList(E_KAMUI_SORT_TYPE Type, bool bDescending);
    
    UFUNCTION(BlueprintCallable)
    void ResetKamuiList();
    
    UFUNCTION(BlueprintCallable)
    void RemoveKamuiList(const int32& SkillId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAtKamuiList(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistNewIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDataIndex(const int32& SkillId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetData(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void EmptyKamuiList();
    
    UFUNCTION(BlueprintCallable)
    void AddKamuiList(const int32& SkillId);
    
};

