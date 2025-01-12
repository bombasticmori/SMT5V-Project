#include "CharaBlinkAssetFactory.h"
#include "CharaBlink.h"
UCharaBlinkAssetFactory::UCharaBlinkAssetFactory()
{
	SupportedClass = UCharaBlink::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* UCharaBlinkAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharaBlink>(InParent, Class, Name, Flags, Context);
}
