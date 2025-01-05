#include "ProjectGameInstanceBase.h"

UProjectGameInstanceBase::UProjectGameInstanceBase() {
    this->GCManager = NULL;
    this->GCManagerClass = NULL;
    this->SoundManager = NULL;
    this->GardenTalkPointManager = NULL;
    this->GardenManager = NULL;
    this->SoundManagerClass = NULL;
    this->UIManager = NULL;
    this->UIManagerClass = NULL;
    this->AchievementManager = NULL;
    this->ActivityManager = NULL;
    this->MinimapManager = NULL;
    this->FrameRateManager = NULL;
    this->ActionMappingNameDataTable = NULL;
    this->AxisMappingNameDataTable = NULL;
    this->DefaultActionMappingDataTable = NULL;
    this->DefaultAxisMappingDataTable = NULL;
    this->m_pDebugMenuDataInst = NULL;
    this->ProjectDebugManager = NULL;
    this->DebugCameraManager = NULL;
}

void UProjectGameInstanceBase::SetGardenManager(AGardenManager* NewGardenManager) {
}

void UProjectGameInstanceBase::SetBoost(bool bEnabled) {
}

void UProjectGameInstanceBase::MakeUpUniqueSymbolDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpTutorialWindowTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpTalkBaseTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpTakaraDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpStaffRollTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpSortWindowTable(UMMIAsset* pAsset, UScriptMessageAsset* pText) {
}

void UProjectGameInstanceBase::MakeUpSkillTargetNameDataTable(UScriptMessageAsset* pName) {
}

void UProjectGameInstanceBase::MakeUpSkillDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pSkillName, UScriptMessageAsset* pSkillHelp, UScriptMessageAsset* pSkillMasterHelp, UMMIAsset* pInfoMesAsset, UScriptMessageAsset* pInfoMes, UScriptMessageAsset* pMasterInfoMes) {
}

void UProjectGameInstanceBase::MakeUpShinseiDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpRyuketsuDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpRelicDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpPurposeTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpPlatformTermsTable(UScriptMessageAsset* pName) {
}

void UProjectGameInstanceBase::MakeUpPieceDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpOptionTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpNaviDevilDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpMissionDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pName) {
}

void UProjectGameInstanceBase::MakeUpMimanRewardSetNameDataTable(UScriptMessageAsset* pName) {
}

void UProjectGameInstanceBase::MakeUpMimanDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpMapEventDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpMapAreaNameDataTable(UScriptMessageAsset* pName) {
}

void UProjectGameInstanceBase::MakeUpItemDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pItemName, UScriptMessageAsset* pHelpMess) {
}

void UProjectGameInstanceBase::MakeUpGrowEventTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpGodParameterDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pName, UScriptMessageAsset* pHelp) {
}

void UProjectGameInstanceBase::MakeUpGardenTable(UMMIAsset* pGardenMessageTable, UMMIAsset* pGardenSystemTable, UMMIAsset* pGardenItemTable, UMMIAsset* pGardenPlayerTalkTable, UScriptMessageAsset* pText, UDataTable* GardenQuestDevilTable) {
}

void UProjectGameInstanceBase::MakeUpFacilityShopTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpEventFlagDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpEventEncountDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpEncountDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpDevilUIGraphicsDataTable(UMMIAsset* pAsset, UDataTable* LocalizedNameSortIdTable) {
}

void UProjectGameInstanceBase::MakeUpDevilDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pDevilName, UScriptMessageAsset* pRaceName) {
}

void UProjectGameInstanceBase::MakeUpDBaseDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpCoasterDataTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpCharGrowDataTable(UMMIAsset* pAsset, UMMIAsset* pPartnerAsset) {
}

void UProjectGameInstanceBase::MakeUpCharaNameDataTable(UScriptMessageAsset* pName) {
}

void UProjectGameInstanceBase::MakeUpCameraSettingsTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpButtonHelpTable(UMMIAsset* pAsset, UScriptMessageAsset* pText) {
}

void UProjectGameInstanceBase::MakeUpBossFlagTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpBattleEventTable(UMMIAsset* pAsset) {
}

void UProjectGameInstanceBase::MakeUpBattleDataTable(UMMIAsset* pAsset, UScriptMessageAsset* pCommonMes) {
}

void UProjectGameInstanceBase::MakeUpAttrNameDataTable(UScriptMessageAsset* pName) {
}

void UProjectGameInstanceBase::MakeUpAogamiDebrisDataTable(UMMIAsset* pAsset) {
}

UProjectUIManager* UProjectGameInstanceBase::GetUIManager() {
    return NULL;
}


FTalkBaseTable UProjectGameInstanceBase::GetTalkBaseTable() const {
    return FTalkBaseTable{};
}


UProjectSoundManager* UProjectGameInstanceBase::GetSoundManager() {
    return NULL;
}


UProjectDebugManager* UProjectGameInstanceBase::GetProjectDebugManager() {
    return NULL;
}

UMinimapManager* UProjectGameInstanceBase::GetMinimapManager() {
    return NULL;
}

UProjectGCManager* UProjectGameInstanceBase::GetGCManager() {
    return NULL;
}

UGardenTalkPointManager* UProjectGameInstanceBase::GetGardenTalkPointManager() {
    return NULL;
}

AGardenManager* UProjectGameInstanceBase::GetGardenManager() {
    return NULL;
}

UFrameRateManager* UProjectGameInstanceBase::GetFrameRateManager() {
    return NULL;
}





UDataTable* UProjectGameInstanceBase::GetDefaultAxisMappingDataTable() {
    return NULL;
}

UDataTable* UProjectGameInstanceBase::GetDefaultActionMappingDataTable() {
    return NULL;
}

UDebugCameraManager* UProjectGameInstanceBase::GetDebugCameraManager() {
    return NULL;
}


UDataTable* UProjectGameInstanceBase::GetAxisMappingNameDataTable() {
    return NULL;
}

UActivityManager* UProjectGameInstanceBase::GetActivityManager() {
    return NULL;
}

UDataTable* UProjectGameInstanceBase::GetActionMappingNameDataTable() {
    return NULL;
}

UAchievementManager* UProjectGameInstanceBase::GetAchievementManager() {
    return NULL;
}


void UProjectGameInstanceBase::CreateGameData() {
}

void UProjectGameInstanceBase::CreateDebugMenuData(bool isOverWrite) {
}


