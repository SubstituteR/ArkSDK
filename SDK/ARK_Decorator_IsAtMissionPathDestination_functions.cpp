// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Decorator_IsAtMissionPathDestination_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Decorator_IsAtMissionPathDestination.Decorator_IsAtMissionPathDestination_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_IsAtMissionPathDestination_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_IsAtMissionPathDestination.Decorator_IsAtMissionPathDestination_C.ReceiveConditionCheck");

	UDecorator_IsAtMissionPathDestination_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Decorator_IsAtMissionPathDestination.Decorator_IsAtMissionPathDestination_C.ExecuteUbergraph_Decorator_IsAtMissionPathDestination
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDecorator_IsAtMissionPathDestination_C::ExecuteUbergraph_Decorator_IsAtMissionPathDestination(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Decorator_IsAtMissionPathDestination.Decorator_IsAtMissionPathDestination_C.ExecuteUbergraph_Decorator_IsAtMissionPathDestination");

	UDecorator_IsAtMissionPathDestination_C_ExecuteUbergraph_Decorator_IsAtMissionPathDestination_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
