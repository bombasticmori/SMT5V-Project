#include "CharaExpressionTableFactory.h"
#include "CharaExpressionTable.h"

UCharaExpressionTableFactory::UCharaExpressionTableFactory()
{
	SupportedClass = UCharaExpressionTable::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* UCharaExpressionTableFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharaExpressionTable>(InParent, Class, Name, Flags, Context);
}
