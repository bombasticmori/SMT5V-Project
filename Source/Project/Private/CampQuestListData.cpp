#include "CampQuestListData.h"

FCampQuestListData::FCampQuestListData() {
    this->QuestID = 0;
    this->SortID = 0;
    this->QuestType = E_MISSION_TYPE::E_MISSION_TYPE_NONE;
    this->ProgressState = E_CAMP_QUEST_PROGRESS_STATE::IN_PROGRESS;
    this->IsNewIcon = false;
    this->IsUpdateIcon = false;
}

