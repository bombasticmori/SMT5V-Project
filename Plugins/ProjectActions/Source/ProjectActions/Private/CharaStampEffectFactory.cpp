#include "CharaStampEffectFactory.h"
#include "CharaStampEffectTable.h"

UCharaStampEffectFactory::UCharaStampEffectFactory()
{
	SupportedClass = UCharaStampEffectTable::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* UCharaStampEffectFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharaStampEffectTable>(InParent, Class, Name, Flags, Context);
}
