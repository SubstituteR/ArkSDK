// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ocean_Megalodon_Character_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ocean_Megalodon_Character_BP_Escort.Ocean_Megalodon_Character_BP_Escort_C.UserConstructionScript
// ()

void AOcean_Megalodon_Character_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Megalodon_Character_BP_Escort.Ocean_Megalodon_Character_BP_Escort_C.UserConstructionScript");

	AOcean_Megalodon_Character_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ocean_Megalodon_Character_BP_Escort.Ocean_Megalodon_Character_BP_Escort_C.ExecuteUbergraph_Ocean_Megalodon_Character_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOcean_Megalodon_Character_BP_Escort_C::ExecuteUbergraph_Ocean_Megalodon_Character_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Megalodon_Character_BP_Escort.Ocean_Megalodon_Character_BP_Escort_C.ExecuteUbergraph_Ocean_Megalodon_Character_BP_Escort");

	AOcean_Megalodon_Character_BP_Escort_C_ExecuteUbergraph_Ocean_Megalodon_Character_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
