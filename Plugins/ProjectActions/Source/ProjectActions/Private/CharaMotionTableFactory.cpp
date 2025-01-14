#include "CharaMotionTableFactory.h"
#include "CharaMotionTable.h"

UCharaMotionTableFactory::UCharaMotionTableFactory()
{
	SupportedClass = UCharaMotionTable::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* UCharaMotionTableFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharaMotionTable>(InParent, Class, Name, Flags, Context);
}
