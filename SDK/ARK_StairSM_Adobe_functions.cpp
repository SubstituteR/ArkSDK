// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_StairSM_Adobe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StairSM_Adobe.StairSM_Adobe_C.UserConstructionScript
// ()

void AStairSM_Adobe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Adobe.StairSM_Adobe_C.UserConstructionScript");

	AStairSM_Adobe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StairSM_Adobe.StairSM_Adobe_C.ExecuteUbergraph_StairSM_Adobe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStairSM_Adobe_C::ExecuteUbergraph_StairSM_Adobe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StairSM_Adobe.StairSM_Adobe_C.ExecuteUbergraph_StairSM_Adobe");

	AStairSM_Adobe_C_ExecuteUbergraph_StairSM_Adobe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
