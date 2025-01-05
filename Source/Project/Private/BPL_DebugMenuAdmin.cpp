#include "BPL_DebugMenuAdmin.h"
#include "Templates/SubclassOf.h"

UBPL_DebugMenuAdmin::UBPL_DebugMenuAdmin() {
}

void UBPL_DebugMenuAdmin::UpLoadItemData(const FDebugMenuItemData ItemData) {
}

void UBPL_DebugMenuAdmin::UpdateAlwaysFunc(TSubclassOf<UDebugFuncBaseObj> funcObj, const FName& itemPathName) {
}

void UBPL_DebugMenuAdmin::TestTestTest(TSoftObjectPtr<UDebugFuncBaseObj> Str, TSoftClassPtr<UDebugFuncBaseObj> str2) {
}

AActor* UBPL_DebugMenuAdmin::SpawnFuncActor(UClass* class_p) {
    return NULL;
}

void UBPL_DebugMenuAdmin::SetTextFromPathName(const FName pathName, const FString& Text) {
}

void UBPL_DebugMenuAdmin::SetTextFromName(const FName Name, const FString& Text) {
}

void UBPL_DebugMenuAdmin::SetTextData(const int32 ItemId, const FString& Text) {
}

void UBPL_DebugMenuAdmin::SetPullDownDataFromPathName(const FName pathName, int32 cursorIndex, TArray<FString> arr) {
}

void UBPL_DebugMenuAdmin::SetPullDownDataFromName(const FName Name, int32 cursorIndex, TArray<FString> arr) {
}

void UBPL_DebugMenuAdmin::SetPullDownData(const int32 ItemId, int32 cursorIndex, TArray<FString> arr) {
}

void UBPL_DebugMenuAdmin::SetParamDataNoLimit(const int32 ItemId, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, const bool NoLimit) {
}

void UBPL_DebugMenuAdmin::SetParamDataFromPathName(const FName pathName, const int32 Param, const int32 Min, const int32 Max, const bool limitLock) {
}

void UBPL_DebugMenuAdmin::SetParamDataFromName(const FName Name, const int32 Param, const int32 Min, const int32 Max, const bool limitLock) {
}

void UBPL_DebugMenuAdmin::SetParamData(const int32 ItemId, const int32 Param, const int32 Min, const int32 Max, const bool limitLock) {
}

void UBPL_DebugMenuAdmin::SetIsAddItemEndDelete(const bool ret) {
}

void UBPL_DebugMenuAdmin::SetIsAddItemEndBtlDelete(const bool ret) {
}

void UBPL_DebugMenuAdmin::SetFuncClassFromName(const FName Name, TSubclassOf<UDebugFuncBaseObj> funcObj) {
}

void UBPL_DebugMenuAdmin::SetFuncClass(const int32 ItemId, TSubclassOf<UDebugFuncBaseObj> funcObj) {
}

void UBPL_DebugMenuAdmin::SetDispNameFromPathName(const FName pathName, const FString& dispName) {
}

void UBPL_DebugMenuAdmin::SetDispNameFromName(const FName Name, const FString& dispName) {
}

void UBPL_DebugMenuAdmin::SetDispName(const int32 ItemId, const FString& dispName) {
}

void UBPL_DebugMenuAdmin::SetDebugMenuPageWidthFromLen(const int32 _itemID, const int32 _length, const float _space) {
}

void UBPL_DebugMenuAdmin::SetDebugMenuPageWidth(const int32 _itemID, const float _width) {
}

void UBPL_DebugMenuAdmin::SetDebugMenuOnOff(bool isOn) {
}

void UBPL_DebugMenuAdmin::SetDebugMenuItemLockItemId(const int32 ItemId, const bool isLock) {
}

void UBPL_DebugMenuAdmin::SetDebugMenuItemLock(const FString& Path, const bool isLock) {
}

void UBPL_DebugMenuAdmin::SetDebugMenuFlag(E_DEBUG_MENU_FLAG flg, bool sw) {
}

void UBPL_DebugMenuAdmin::SetDebugMenuActiveItemPageName(const FString& pathName) {
}

void UBPL_DebugMenuAdmin::SetCheckBoxParamFromPathName(const FName pathName, const bool isCheck) {
}

void UBPL_DebugMenuAdmin::SetCheckBoxParamFromName(const FName Name, const bool isCheck) {
}

void UBPL_DebugMenuAdmin::SetCheckBoxParam(const int32 ItemId, const bool isCheck) {
}

void UBPL_DebugMenuAdmin::ResetDebugMenuData() {
}

bool UBPL_DebugMenuAdmin::IsOpenDebugMenu() {
    return false;
}

bool UBPL_DebugMenuAdmin::IsDebugMenuItemExistFromPathName_Name(const FName pathName) {
    return false;
}

bool UBPL_DebugMenuAdmin::IsDebugMenuItemExistFromPathName(const FString& pathName) {
    return false;
}

bool UBPL_DebugMenuAdmin::IsDebugMenuActiveItemPage(const FString& itemPathName) {
    return false;
}

bool UBPL_DebugMenuAdmin::IsCreateDebugMenuData() {
    return false;
}

FString UBPL_DebugMenuAdmin::GetSPDataTypeText(const FName pathName, const FString& initParam) {
    return TEXT("");
}

int32 UBPL_DebugMenuAdmin::GetSPDataTypePullDown(const FName pathName, const int32 initParam) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::GetSPDataTypeParam(const FName pathName, const int32 initParam) {
    return 0;
}

bool UBPL_DebugMenuAdmin::GetSPDataTypeCheckBox(const FName pathName, const bool initParam) {
    return false;
}

FDebugMenuItemDataParam UBPL_DebugMenuAdmin::GetSPData(const FName pathName, const FDebugMenuItemDataParam initParam) {
    return FDebugMenuItemDataParam{};
}

TArray<FDebugMenuItemData> UBPL_DebugMenuAdmin::GetMenuEndDeleteItem() {
    return TArray<FDebugMenuItemData>();
}

bool UBPL_DebugMenuAdmin::GetDebugMenuPageWidth(const int32 _itemID, float& _width) {
    return false;
}

int32 UBPL_DebugMenuAdmin::GetDebugMenuPageNum() {
    return 0;
}

FDebugMenuPageData UBPL_DebugMenuAdmin::GetDebugMenuPageFromName(const FName Name) {
    return FDebugMenuPageData{};
}

FDebugMenuPageData UBPL_DebugMenuAdmin::GetDebugMenuPageFromItemId(const int32 parentItemId) {
    return FDebugMenuPageData{};
}

FDebugMenuPageData UBPL_DebugMenuAdmin::GetDebugMenuPage(const int32 pageId) {
    return FDebugMenuPageData{};
}

int32 UBPL_DebugMenuAdmin::GetDebugMenuItemNum() {
    return 0;
}

FDebugMenuItemData UBPL_DebugMenuAdmin::GetDebugMenuItemFromPathName_Name(const FName pathName) {
    return FDebugMenuItemData{};
}

FDebugMenuItemData UBPL_DebugMenuAdmin::GetDebugMenuItemFromPathName(const FString& pathName) {
    return FDebugMenuItemData{};
}

FDebugMenuItemData UBPL_DebugMenuAdmin::GetDebugMenuItemFromName(const FName Name) {
    return FDebugMenuItemData{};
}

FDebugMenuItemData UBPL_DebugMenuAdmin::GetDebugMenuItemFromIndex(const int32 pageId, const int32 Index) {
    return FDebugMenuItemData{};
}

FDebugMenuItemData UBPL_DebugMenuAdmin::GetDebugMenuItem(const int32 ItemId) {
    return FDebugMenuItemData{};
}

void UBPL_DebugMenuAdmin::ExecFuncAlways(TSubclassOf<UDebugFuncBaseObj> funcObj) {
}

bool UBPL_DebugMenuAdmin::ExecFunc(TSubclassOf<UDebugFuncBaseObj> funcObj, const FName& itemPathName) {
    return false;
}

void UBPL_DebugMenuAdmin::DestroyFuncObj(TSubclassOf<UDebugFuncBaseObj> funcObj) {
}

void UBPL_DebugMenuAdmin::DeleteDebugMenuPageFromPathName(const FName pathName) {
}

void UBPL_DebugMenuAdmin::DeleteDebugMenuPageFromName(const FName Name) {
}

void UBPL_DebugMenuAdmin::DeleteDebugMenuPage(const int32 pageId) {
}

void UBPL_DebugMenuAdmin::DeleteDebugMenuItemFromPathName(const FName pathName) {
}

void UBPL_DebugMenuAdmin::DeleteDebugMenuItemFromName(const FName Name) {
}

void UBPL_DebugMenuAdmin::DeleteDebugMenuItem(const int32 ItemId) {
}

void UBPL_DebugMenuAdmin::DeleteBtlEndDeleteItemData() {
}

void UBPL_DebugMenuAdmin::DebugNameChangeObj_Init(TSubclassOf<UDebugMenuNameChangeBaseObj> nameChangeObj) {
}

FText UBPL_DebugMenuAdmin::DebugNameChangeObj_GetDispName(TSubclassOf<UDebugMenuNameChangeBaseObj> nameChangeObj, int32 Param) {
    return FText::GetEmpty();
}

void UBPL_DebugMenuAdmin::DebugNameChangeObj_Destroy(TSubclassOf<UDebugMenuNameChangeBaseObj> nameChangeObj) {
}

bool UBPL_DebugMenuAdmin::DebugFuncObj_IsUpdateAlways(TSubclassOf<UDebugFuncBaseObj> funcObj) {
    return false;
}

bool UBPL_DebugMenuAdmin::DebugFuncObj_IsFuncAlways(TSubclassOf<UDebugFuncBaseObj> funcObj) {
    return false;
}

bool UBPL_DebugMenuAdmin::DebugFuncObj_IsDebugMenuKeyLock(TSubclassOf<UDebugFuncBaseObj> funcObj) {
    return false;
}

bool UBPL_DebugMenuAdmin::CheckDebugMenuFlag(E_DEBUG_MENU_FLAG flg) {
    return false;
}

bool UBPL_DebugMenuAdmin::CheckAddMenu(TSubclassOf<UDebugFuncBaseObj> funcObj) {
    return false;
}

void UBPL_DebugMenuAdmin::CallViewLogAllItem() {
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeTextFromId(const int32 ParentID, const FName Name, const FString& dispName, const FString& Text, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeText(const FName Path, const FString& dispName, const FString& Text, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypePullDownFromId(const int32 ParentID, const FName Name, const FString& dispName, int32 cursorIndex, TArray<FString> arr, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypePullDown(const FName Path, const FString& dispName, int32 cursorIndex, TArray<FString> arr, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeParamNoLimit(const FName Path, const FString& dispName, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc, const bool NoLimit) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeParamFromId(const int32 ParentID, const FName Name, const FString& dispName, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeParam(const FName Path, const FString& dispName, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeNameChangeNoLimit(const FName Path, const FString& dispName, const E_D_MENU_NAME_CHANGE_TYPE nameChangeType, FDebugMenuNameChangeObj nameChangeObj, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc, const bool NoLimit) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeNameChangeFromId(const int32 ParentID, const FName Name, const FString& dispName, const E_D_MENU_NAME_CHANGE_TYPE nameChangeType, FDebugMenuNameChangeObj nameChangeObj, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeNameChange(const FName Path, const FString& dispName, const E_D_MENU_NAME_CHANGE_TYPE nameChangeType, FDebugMenuNameChangeObj nameChangeObj, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeJumpPageFromId(const int32 ParentID, const FName Name, const FString& dispName) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeJumpPage(const FName Path, const FString& dispName) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeFuncObjFromId(const int32 ParentID, const FName Name, const FString& dispName, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeFuncObj(const FName Path, const FString& dispName, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeCheckBoxFromId(const int32 ParentID, const FName Name, const FString& dispName, const bool isCheck, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemTypeCheckBox(const FName Path, const FString& dispName, const bool isCheck, TSoftClassPtr<UDebugFuncBaseObj> objFunc) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItemFromId(const int32 ParentID, const FName Name, E_D_MENU_TYPE Type, FDebugMenuItemDataParam Data) {
    return 0;
}

int32 UBPL_DebugMenuAdmin::AddDebugMenuItem(const FName Path, E_D_MENU_TYPE typeE, FDebugMenuItemDataParam Data) {
    return 0;
}


