#include "MatParamApplierFactory.h"
#include "MaterialParameterApplier.h"

UMatParamApplierFactory::UMatParamApplierFactory()
{
	SupportedClass = UMaterialParameterApplier::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}


UObject* UMatParamApplierFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UMaterialParameterApplier>(InParent, Class, Name, Flags, Context);
}