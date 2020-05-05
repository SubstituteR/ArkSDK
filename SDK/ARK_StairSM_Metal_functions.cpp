// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StairSM_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StairSM_Metal.StairSM_Metal_C.UserConstructionScript
// ()

void AStairSM_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Metal.StairSM_Metal_C.UserConstructionScript");

	AStairSM_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StairSM_Metal.StairSM_Metal_C.ExecuteUbergraph_StairSM_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStairSM_Metal_C::ExecuteUbergraph_StairSM_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Metal.StairSM_Metal_C.ExecuteUbergraph_StairSM_Metal");

	AStairSM_Metal_C_ExecuteUbergraph_StairSM_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
