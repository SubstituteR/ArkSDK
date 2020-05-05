// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ocean_Megalodon_Character_BP_RetrieveNonTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ocean_Megalodon_Character_BP_RetrieveNonTarget.Ocean_Megalodon_Character_BP_RetrieveNonTarget_C.UserConstructionScript
// ()

void AOcean_Megalodon_Character_BP_RetrieveNonTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Megalodon_Character_BP_RetrieveNonTarget.Ocean_Megalodon_Character_BP_RetrieveNonTarget_C.UserConstructionScript");

	AOcean_Megalodon_Character_BP_RetrieveNonTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ocean_Megalodon_Character_BP_RetrieveNonTarget.Ocean_Megalodon_Character_BP_RetrieveNonTarget_C.ExecuteUbergraph_Ocean_Megalodon_Character_BP_RetrieveNonTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOcean_Megalodon_Character_BP_RetrieveNonTarget_C::ExecuteUbergraph_Ocean_Megalodon_Character_BP_RetrieveNonTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Megalodon_Character_BP_RetrieveNonTarget.Ocean_Megalodon_Character_BP_RetrieveNonTarget_C.ExecuteUbergraph_Ocean_Megalodon_Character_BP_RetrieveNonTarget");

	AOcean_Megalodon_Character_BP_RetrieveNonTarget_C_ExecuteUbergraph_Ocean_Megalodon_Character_BP_RetrieveNonTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
