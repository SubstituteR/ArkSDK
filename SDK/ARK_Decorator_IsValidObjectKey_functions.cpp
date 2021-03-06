// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Decorator_IsValidObjectKey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_IsValidObjectKey.Decorator_IsValidObjectKey_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_IsValidObjectKey_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_IsValidObjectKey.Decorator_IsValidObjectKey_C.ReceiveConditionCheck");

	UDecorator_IsValidObjectKey_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Decorator_IsValidObjectKey.Decorator_IsValidObjectKey_C.ExecuteUbergraph_Decorator_IsValidObjectKey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_IsValidObjectKey_C::ExecuteUbergraph_Decorator_IsValidObjectKey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_IsValidObjectKey.Decorator_IsValidObjectKey_C.ExecuteUbergraph_Decorator_IsValidObjectKey");

	UDecorator_IsValidObjectKey_C_ExecuteUbergraph_Decorator_IsValidObjectKey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
