#include "CharaMotionOverrideTableFactory.h"
#include "CharaMotionOverrideBlendTimeTable.h"
UCharaMotionOverrideTableFactory::UCharaMotionOverrideTableFactory()
{
	SupportedClass = UCharaMotionOverrideBlendTimeTable::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* UCharaMotionOverrideTableFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharaMotionOverrideBlendTimeTable>(InParent, Class, Name, Flags, Context);
}
