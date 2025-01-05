#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CampQuestListData.h"
#include "E_CAMP_QUEST_INPUT_TYPE.h"
#include "E_CAMP_QUEST_USE_KEY.h"
#include "E_MISSION_MAJOR_TYPE.h"
#include "CampQuestWindowCtrlBase.generated.h"

UCLASS(Blueprintable)
class PROJECT_API ACampQuestWindowCtrlBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_CAMP_QUEST_INPUT_TYPE m_CampQuestInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_CAMP_QUEST_USE_KEY m_CampQuestInputKey;
    
public:
    ACampQuestWindowCtrlBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateInputInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateIconState(E_MISSION_MAJOR_TYPE InQuestCategory, int32 InListIdx, bool IsVisibleIcon);
    
    UFUNCTION(BlueprintCallable)
    void SetNewIconState(E_MISSION_MAJOR_TYPE InQuestCategory, int32 InListIdx, bool IsVisibleIcon);
    
    UFUNCTION(BlueprintCallable)
    void LoadQuestList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistNewQuest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCampQuestListData> GetDataList_InRange(E_MISSION_MAJOR_TYPE InQuestCategory, int32 StartIdx, int32 EndIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCampQuestListData> GetDataList(E_MISSION_MAJOR_TYPE InQuestCategory);
    
};

