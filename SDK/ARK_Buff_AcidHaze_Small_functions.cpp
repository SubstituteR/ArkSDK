// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_AcidHaze_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_AcidHaze_Small.Buff_AcidHaze_Small_C.UserConstructionScript
// ()

void ABuff_AcidHaze_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AcidHaze_Small.Buff_AcidHaze_Small_C.UserConstructionScript");

	ABuff_AcidHaze_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_AcidHaze_Small.Buff_AcidHaze_Small_C.ExecuteUbergraph_Buff_AcidHaze_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_AcidHaze_Small_C::ExecuteUbergraph_Buff_AcidHaze_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_AcidHaze_Small.Buff_AcidHaze_Small_C.ExecuteUbergraph_Buff_AcidHaze_Small");

	ABuff_AcidHaze_Small_C_ExecuteUbergraph_Buff_AcidHaze_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
