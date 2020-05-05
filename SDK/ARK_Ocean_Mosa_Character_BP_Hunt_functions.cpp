// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ocean_Mosa_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ocean_Mosa_Character_BP_Hunt.Ocean_Mosa_Character_BP_Hunt_C.UserConstructionScript
// ()

void AOcean_Mosa_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Mosa_Character_BP_Hunt.Ocean_Mosa_Character_BP_Hunt_C.UserConstructionScript");

	AOcean_Mosa_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ocean_Mosa_Character_BP_Hunt.Ocean_Mosa_Character_BP_Hunt_C.ExecuteUbergraph_Ocean_Mosa_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOcean_Mosa_Character_BP_Hunt_C::ExecuteUbergraph_Ocean_Mosa_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Mosa_Character_BP_Hunt.Ocean_Mosa_Character_BP_Hunt_C.ExecuteUbergraph_Ocean_Mosa_Character_BP_Hunt");

	AOcean_Mosa_Character_BP_Hunt_C_ExecuteUbergraph_Ocean_Mosa_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
