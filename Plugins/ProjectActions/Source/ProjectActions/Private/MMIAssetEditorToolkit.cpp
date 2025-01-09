#include "MMIAssetEditorToolkit.h"
#include "Widgets/Docking/SDockTab.h"
#include "SMMIAssetEditor.h"
#include "Modules/ModuleManager.h"	
void MMIAssetEditorToolkit::InitEditor(const TArray<UObject*>& InObjects)
{
	MMIAsset = Cast<UMMIAsset>(InObjects[0]);

	/*const TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout("Standalone_MMIAssetEditor_Layout")
		->AddArea
		(
			FTabManager::NewPrimaryArea()
			->SetOrientation(Orient_Vertical)
			->Split
			(
				FTabManager::NewStack()
				->AddTab(GetToolbarTabId(), ETabState::OpenedTab)
			)
			->Split
			(
				FTabManager::NewSplitter()
				->SetOrientation(Orient_Horizontal)
				->Split
				(
					FTabManager::NewStack()
					->AddTab("MMIAssetEditor", ETabState::OpenedTab)
				)
			)
		);
	FAssetEditorToolkit::InitAssetEditor(
		EToolkitMode::Standalone,
		{},
		GetToolkitFName(),
		StandaloneDefaultLayout,
		true,
		true,
		InObjects
	);*/
}




