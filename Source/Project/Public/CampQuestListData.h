#pragma once
#include "CoreMinimal.h"
#include "E_CAMP_QUEST_PROGRESS_STATE.h"
#include "E_MISSION_TYPE.h"
#include "CampQuestListData.generated.h"

USTRUCT(BlueprintType)
struct FCampQuestListData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_MISSION_TYPE QuestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    E_CAMP_QUEST_PROGRESS_STATE ProgressState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNewIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUpdateIcon;
    
    PROJECT_API FCampQuestListData();
};

