// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_FoliageTrap_Fertile_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FoliageTrap_Fertile.Buff_FoliageTrap_Fertile_C.UserConstructionScript
// ()

void ABuff_FoliageTrap_Fertile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap_Fertile.Buff_FoliageTrap_Fertile_C.UserConstructionScript");

	ABuff_FoliageTrap_Fertile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FoliageTrap_Fertile.Buff_FoliageTrap_Fertile_C.ExecuteUbergraph_Buff_FoliageTrap_Fertile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FoliageTrap_Fertile_C::ExecuteUbergraph_Buff_FoliageTrap_Fertile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_FoliageTrap_Fertile.Buff_FoliageTrap_Fertile_C.ExecuteUbergraph_Buff_FoliageTrap_Fertile");

	ABuff_FoliageTrap_Fertile_C_ExecuteUbergraph_Buff_FoliageTrap_Fertile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
