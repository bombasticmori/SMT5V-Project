#pragma once

#include "CoreMinimal.h"
#include "MMIAsset.h"
#include "Toolkits/AssetEditorToolkit.h"
/**
 * 
 */
class MMIAssetEditorToolkit : public FAssetEditorToolkit
{
public:
	void InitEditor(const TArray<UObject*>& InObjects);

	FName GetToolkitFName() const override { return "MMIAssetEditor"; }
	FText GetBaseToolkitName() const override { return INVTEXT("MMIAsset Editor"); }
	FString GetWorldCentricTabPrefix() const override { return "MMIAsset "; }
	FLinearColor GetWorldCentricTabColorScale() const override { return {}; }

private:
	UMMIAsset* MMIAsset;
};
