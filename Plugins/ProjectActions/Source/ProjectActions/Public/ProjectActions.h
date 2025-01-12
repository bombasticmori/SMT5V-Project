#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "MatParamApplierAssetTypeActions.h"
#include "MMIAssetTypeActions.h"
#include "CharaBlinkAssetTypeActions.h"
#include "CharaExpressionTableAssetActions.h"
#include "CharaMotionOverrideTableActions.h"
#include "CharaStampEffectAssetActions.h"

class FProjectActionsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
private:
	TSharedPtr<FMatParamApplierAssetTypeActions> MatParamApplierAssetTypeActions;
	TSharedPtr<FMMIAssetActions> MMIAssetActions;
	TSharedPtr<FCharaBlinkAssetTypeActions> CharaBlinkActions;
	TSharedPtr<FCharaExpressionTableAssetActions> CharaExpressionTableActions;
	TSharedPtr<FCharaMotionOverrideTableActions> CharaMotionOverrideTableActions;
	TSharedPtr<FCharaStampEffectAssetActions> CharaStampEffectAssetActions;

};
