// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectActions.h"
#include "MatParamApplierAssetTypeActions.h"
#include "MMIAssetTypeActions.h"
#include "CharaBlinkAssetTypeActions.h"
#include "CharaExpressionTableAssetActions.h"
#include "CharaMotionOverrideTableActions.h"
#include "CharaStampEffectAssetActions.h"
#define LOCTEXT_NAMESPACE "FProjectActionsModule"

void FProjectActionsModule::StartupModule()
{
	MMIAssetActions = MakeShared<FMMIAssetActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(MMIAssetActions.ToSharedRef());

	MatParamApplierAssetTypeActions = MakeShared<FMatParamApplierAssetTypeActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(MatParamApplierAssetTypeActions.ToSharedRef());

	CharaBlinkActions = MakeShared<FCharaBlinkAssetTypeActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(CharaBlinkActions.ToSharedRef());

	CharaExpressionTableActions = MakeShared<FCharaExpressionTableAssetActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(CharaExpressionTableActions.ToSharedRef());

	CharaMotionOverrideTableActions = MakeShared < FCharaMotionOverrideTableActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(CharaMotionOverrideTableActions.ToSharedRef());

	CharaStampEffectAssetActions = MakeShared < FCharaStampEffectAssetActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(CharaStampEffectAssetActions.ToSharedRef());

	CharaMotionTableAssetActions = MakeShared < FCharaMotionTableAssetActions>();
	FAssetToolsModule::GetModule().Get().RegisterAssetTypeActions(CharaMotionTableAssetActions.ToSharedRef());
}

void FProjectActionsModule::ShutdownModule()
{
	if (!FModuleManager::Get().IsModuleLoaded("AssetTools")) return;
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(MMIAssetActions.ToSharedRef());
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(MatParamApplierAssetTypeActions.ToSharedRef());
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(CharaBlinkActions.ToSharedRef());
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(CharaExpressionTableActions.ToSharedRef());
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(CharaMotionOverrideTableActions.ToSharedRef());
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(CharaStampEffectAssetActions.ToSharedRef());
	FAssetToolsModule::GetModule().Get().UnregisterAssetTypeActions(CharaMotionTableAssetActions.ToSharedRef());
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FProjectActionsModule, ProjectActions)