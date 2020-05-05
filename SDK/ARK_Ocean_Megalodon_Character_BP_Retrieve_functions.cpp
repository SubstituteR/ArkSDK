// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ocean_Megalodon_Character_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ocean_Megalodon_Character_BP_Retrieve.Ocean_Megalodon_Character_BP_Retrieve_C.UserConstructionScript
// ()

void AOcean_Megalodon_Character_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Megalodon_Character_BP_Retrieve.Ocean_Megalodon_Character_BP_Retrieve_C.UserConstructionScript");

	AOcean_Megalodon_Character_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ocean_Megalodon_Character_BP_Retrieve.Ocean_Megalodon_Character_BP_Retrieve_C.ExecuteUbergraph_Ocean_Megalodon_Character_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOcean_Megalodon_Character_BP_Retrieve_C::ExecuteUbergraph_Ocean_Megalodon_Character_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Megalodon_Character_BP_Retrieve.Ocean_Megalodon_Character_BP_Retrieve_C.ExecuteUbergraph_Ocean_Megalodon_Character_BP_Retrieve");

	AOcean_Megalodon_Character_BP_Retrieve_C_ExecuteUbergraph_Ocean_Megalodon_Character_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
