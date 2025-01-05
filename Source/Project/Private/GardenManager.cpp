#include "GardenManager.h"
#include "Templates/SubclassOf.h"

AGardenManager::AGardenManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_NeedRespawn = false;
}

void AGardenManager::SpawnTutorialGardenDevils(const float MinimumDistance, const float DesiredDistance, FGardenTutorialSpotSettings SmallGardenTutorialSpotSettings, FGardenTutorialSpotSettings BigGardenTutorialSpotSettings, TArray<E_GARDEN_SPAWN_SIZE>& UsedCameraSpots) {
}

void AGardenManager::SpawnGardenDevils(const float MinimumDistance, const float DesiredDistance) {
}

AGardenDevil* AGardenManager::SpawnGardenDevil_Implementation(FGardenDevilSpawnInfo GardenDevilSpawnInfo, int32 DevilID) {
    return NULL;
}


void AGardenManager::SetGardenManager(const UObject* WorldContextObject, AGardenManager* NewGardenManager) {
}

void AGardenManager::SetGardenDevilIcon(const UObject* WorldContextObject, int32 NkmIndex, E_TALK_TONE_TYPE SpeechType, E_GARDEN_MSG_USE_TYPE ChatMsgType, int32 ChatMsgIndex) {
}

void AGardenManager::SetGardenChatMessageFlag(E_TALK_TONE_TYPE SpeechType, E_GARDEN_MSG_USE_TYPE ChatMsgType, int32 DevilID, int32 ChatMsgIndex) {
}

void AGardenManager::ResetRespawnFlags() {
}


void AGardenManager::Initialize() {
}

FGardenUniqueDevilMsgData AGardenManager::GetUniqueDevilMsgData(int32 DevilID) {
    return FGardenUniqueDevilMsgData{};
}

FGardenSpeechTypeMsgData AGardenManager::GetSpeechTypeMsgData(E_TALK_TONE_TYPE SpeechType) {
    return FGardenSpeechTypeMsgData{};
}

int32 AGardenManager::GetPlayerTalkRepeatableTalkNum() {
    return 0;
}

int32 AGardenManager::GetPlayerTalkPowerUpTalkNum() {
    return 0;
}

int32 AGardenManager::GetPlayerTalkPlayOnceTalkNum() {
    return 0;
}

int32 AGardenManager::GetPhaseTableNum() {
    return 0;
}

FGardenPhaseData AGardenManager::GetPhaseData(uint8 PhaseValue) {
    return FGardenPhaseData{};
}

FGardenTypeData AGardenManager::GetGardenTypeData(E_RYUKETSU_GARDEN_TYPE GardenType) {
    return FGardenTypeData{};
}

FName AGardenManager::GetGardenSystemMessageLabel(E_GARDEN_SYS_TEXT SystemID) {
    return NAME_None;
}

AGardenManager* AGardenManager::GetGardenManager(const UObject* WorldContextObject) {
    return NULL;
}

AActor* AGardenManager::GetActorOfClassFromLevel(const ULevelStreaming* levelstr, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

void AGardenManager::GardenQuestRespawn() {
}

void AGardenManager::GardenQuestDespawn(int32 DevilID, TArray<AGardenDevil*> GardenDevilArray) {
}

FGardenDevilInfo AGardenManager::FindDevilType_Implementation(int32 GardenDevilID) {
    return FGardenDevilInfo{};
}


bool AGardenManager::CheckWaterDevil(int32 DevilID) {
    return false;
}



bool AGardenManager::CheckGardenQuest(int32 DevilID, FGardenQuestInfo& GardenQuestInfo) {
    return false;
}

E_MINIMAP_POI_ICON AGardenManager::CheckGardenDevilIcon(int32 NkmIndex) {
    return E_MINIMAP_POI_ICON::E_MINIMAP_POI_ICON_NONE;
}


