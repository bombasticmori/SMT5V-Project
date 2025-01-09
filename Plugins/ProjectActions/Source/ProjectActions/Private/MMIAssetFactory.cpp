#include "MMIAssetFactory.h"
#include "MMIAsset.h"
UMMIAssetFactory::UMMIAssetFactory()
{
	SupportedClass = UMMIAsset::StaticClass();
	bCreateNew = true;
}

UObject* UMMIAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UMMIAsset>(InParent, Class, Name, Flags, Context);
}
