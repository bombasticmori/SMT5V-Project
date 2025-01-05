#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DebugMenuItemData.h"
#include "DebugMenuItemDataParam.h"
#include "DebugMenuNameChangeObj.h"
#include "DebugMenuPageData.h"
#include "E_DEBUG_MENU_FLAG.h"
#include "E_D_MENU_NAME_CHANGE_TYPE.h"
#include "E_D_MENU_TYPE.h"
#include "Templates/SubclassOf.h"
#include "BPL_DebugMenuAdmin.generated.h"

class AActor;
class UDebugFuncBaseObj;
class UDebugMenuNameChangeBaseObj;

UCLASS(Blueprintable)
class PROJECT_API UBPL_DebugMenuAdmin : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBPL_DebugMenuAdmin();

    UFUNCTION(BlueprintCallable)
    static void UpLoadItemData(const FDebugMenuItemData ItemData);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateAlwaysFunc(TSubclassOf<UDebugFuncBaseObj> funcObj, const FName& itemPathName);
    
    UFUNCTION(BlueprintCallable)
    static void TestTestTest(TSoftObjectPtr<UDebugFuncBaseObj> Str, TSoftClassPtr<UDebugFuncBaseObj> str2);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnFuncActor(UClass* class_p);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextFromPathName(const FName pathName, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextFromName(const FName Name, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void SetTextData(const int32 ItemId, const FString& Text);
    
    UFUNCTION(BlueprintCallable)
    static void SetPullDownDataFromPathName(const FName pathName, int32 cursorIndex, TArray<FString> arr);
    
    UFUNCTION(BlueprintCallable)
    static void SetPullDownDataFromName(const FName Name, int32 cursorIndex, TArray<FString> arr);
    
    UFUNCTION(BlueprintCallable)
    static void SetPullDownData(const int32 ItemId, int32 cursorIndex, TArray<FString> arr);
    
    UFUNCTION(BlueprintCallable)
    static void SetParamDataNoLimit(const int32 ItemId, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, const bool NoLimit);
    
    UFUNCTION(BlueprintCallable)
    static void SetParamDataFromPathName(const FName pathName, const int32 Param, const int32 Min, const int32 Max, const bool limitLock);
    
    UFUNCTION(BlueprintCallable)
    static void SetParamDataFromName(const FName Name, const int32 Param, const int32 Min, const int32 Max, const bool limitLock);
    
    UFUNCTION(BlueprintCallable)
    static void SetParamData(const int32 ItemId, const int32 Param, const int32 Min, const int32 Max, const bool limitLock);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsAddItemEndDelete(const bool ret);
    
    UFUNCTION(BlueprintCallable)
    static void SetIsAddItemEndBtlDelete(const bool ret);
    
    UFUNCTION(BlueprintCallable)
    static void SetFuncClassFromName(const FName Name, TSubclassOf<UDebugFuncBaseObj> funcObj);
    
    UFUNCTION(BlueprintCallable)
    static void SetFuncClass(const int32 ItemId, TSubclassOf<UDebugFuncBaseObj> funcObj);
    
    UFUNCTION(BlueprintCallable)
    static void SetDispNameFromPathName(const FName pathName, const FString& dispName);
    
    UFUNCTION(BlueprintCallable)
    static void SetDispNameFromName(const FName Name, const FString& dispName);
    
    UFUNCTION(BlueprintCallable)
    static void SetDispName(const int32 ItemId, const FString& dispName);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMenuPageWidthFromLen(const int32 _itemID, const int32 _length, const float _space);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMenuPageWidth(const int32 _itemID, const float _width);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMenuOnOff(bool isOn);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMenuItemLockItemId(const int32 ItemId, const bool isLock);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMenuItemLock(const FString& Path, const bool isLock);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMenuFlag(E_DEBUG_MENU_FLAG flg, bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMenuActiveItemPageName(const FString& pathName);
    
    UFUNCTION(BlueprintCallable)
    static void SetCheckBoxParamFromPathName(const FName pathName, const bool isCheck);
    
    UFUNCTION(BlueprintCallable)
    static void SetCheckBoxParamFromName(const FName Name, const bool isCheck);
    
    UFUNCTION(BlueprintCallable)
    static void SetCheckBoxParam(const int32 ItemId, const bool isCheck);
    
    UFUNCTION(BlueprintCallable)
    static void ResetDebugMenuData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOpenDebugMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugMenuItemExistFromPathName_Name(const FName pathName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugMenuItemExistFromPathName(const FString& pathName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebugMenuActiveItemPage(const FString& itemPathName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCreateDebugMenuData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSPDataTypeText(const FName pathName, const FString& initParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSPDataTypePullDown(const FName pathName, const int32 initParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSPDataTypeParam(const FName pathName, const int32 initParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSPDataTypeCheckBox(const FName pathName, const bool initParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDebugMenuItemDataParam GetSPData(const FName pathName, const FDebugMenuItemDataParam initParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FDebugMenuItemData> GetMenuEndDeleteItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetDebugMenuPageWidth(const int32 _itemID, float& _width);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDebugMenuPageNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDebugMenuPageData GetDebugMenuPageFromName(const FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDebugMenuPageData GetDebugMenuPageFromItemId(const int32 parentItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDebugMenuPageData GetDebugMenuPage(const int32 pageId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDebugMenuItemNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDebugMenuItemData GetDebugMenuItemFromPathName_Name(const FName pathName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDebugMenuItemData GetDebugMenuItemFromPathName(const FString& pathName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDebugMenuItemData GetDebugMenuItemFromName(const FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDebugMenuItemData GetDebugMenuItemFromIndex(const int32 pageId, const int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDebugMenuItemData GetDebugMenuItem(const int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    static void ExecFuncAlways(TSubclassOf<UDebugFuncBaseObj> funcObj);
    
    UFUNCTION(BlueprintCallable)
    static bool ExecFunc(TSubclassOf<UDebugFuncBaseObj> funcObj, const FName& itemPathName);
    
    UFUNCTION(BlueprintCallable)
    static void DestroyFuncObj(TSubclassOf<UDebugFuncBaseObj> funcObj);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteDebugMenuPageFromPathName(const FName pathName);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteDebugMenuPageFromName(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteDebugMenuPage(const int32 pageId);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteDebugMenuItemFromPathName(const FName pathName);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteDebugMenuItemFromName(const FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteDebugMenuItem(const int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteBtlEndDeleteItemData();
    
    UFUNCTION(BlueprintCallable)
    static void DebugNameChangeObj_Init(TSubclassOf<UDebugMenuNameChangeBaseObj> nameChangeObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText DebugNameChangeObj_GetDispName(TSubclassOf<UDebugMenuNameChangeBaseObj> nameChangeObj, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    static void DebugNameChangeObj_Destroy(TSubclassOf<UDebugMenuNameChangeBaseObj> nameChangeObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DebugFuncObj_IsUpdateAlways(TSubclassOf<UDebugFuncBaseObj> funcObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DebugFuncObj_IsFuncAlways(TSubclassOf<UDebugFuncBaseObj> funcObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DebugFuncObj_IsDebugMenuKeyLock(TSubclassOf<UDebugFuncBaseObj> funcObj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckDebugMenuFlag(E_DEBUG_MENU_FLAG flg);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckAddMenu(TSubclassOf<UDebugFuncBaseObj> funcObj);
    
    UFUNCTION(BlueprintCallable)
    static void CallViewLogAllItem();
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeTextFromId(const int32 ParentID, const FName Name, const FString& dispName, const FString& Text, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeText(const FName Path, const FString& dispName, const FString& Text, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypePullDownFromId(const int32 ParentID, const FName Name, const FString& dispName, int32 cursorIndex, TArray<FString> arr, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypePullDown(const FName Path, const FString& dispName, int32 cursorIndex, TArray<FString> arr, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeParamNoLimit(const FName Path, const FString& dispName, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc, const bool NoLimit);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeParamFromId(const int32 ParentID, const FName Name, const FString& dispName, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeParam(const FName Path, const FString& dispName, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeNameChangeNoLimit(const FName Path, const FString& dispName, const E_D_MENU_NAME_CHANGE_TYPE nameChangeType, FDebugMenuNameChangeObj nameChangeObj, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc, const bool NoLimit);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeNameChangeFromId(const int32 ParentID, const FName Name, const FString& dispName, const E_D_MENU_NAME_CHANGE_TYPE nameChangeType, FDebugMenuNameChangeObj nameChangeObj, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeNameChange(const FName Path, const FString& dispName, const E_D_MENU_NAME_CHANGE_TYPE nameChangeType, FDebugMenuNameChangeObj nameChangeObj, const int32 Param, const int32 Min, const int32 Max, const bool limitLock, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeJumpPageFromId(const int32 ParentID, const FName Name, const FString& dispName);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeJumpPage(const FName Path, const FString& dispName);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeFuncObjFromId(const int32 ParentID, const FName Name, const FString& dispName, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeFuncObj(const FName Path, const FString& dispName, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeCheckBoxFromId(const int32 ParentID, const FName Name, const FString& dispName, const bool isCheck, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemTypeCheckBox(const FName Path, const FString& dispName, const bool isCheck, TSoftClassPtr<UDebugFuncBaseObj> objFunc);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItemFromId(const int32 ParentID, const FName Name, E_D_MENU_TYPE Type, FDebugMenuItemDataParam Data);
    
    UFUNCTION(BlueprintCallable)
    static int32 AddDebugMenuItem(const FName Path, E_D_MENU_TYPE typeE, FDebugMenuItemDataParam Data);
    
};

