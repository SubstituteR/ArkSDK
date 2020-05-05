// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_BloodDrain_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BloodDrain.Buff_BloodDrain_C.UserConstructionScript
// ()

void ABuff_BloodDrain_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodDrain.Buff_BloodDrain_C.UserConstructionScript");

	ABuff_BloodDrain_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BloodDrain.Buff_BloodDrain_C.ExecuteUbergraph_Buff_BloodDrain
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BloodDrain_C::ExecuteUbergraph_Buff_BloodDrain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BloodDrain.Buff_BloodDrain_C.ExecuteUbergraph_Buff_BloodDrain");

	ABuff_BloodDrain_C_ExecuteUbergraph_Buff_BloodDrain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
