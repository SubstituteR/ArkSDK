// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Pachyrhino_Character_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pachyrhino_Character_BP_Gauntlet.Pachyrhino_Character_BP_Gauntlet_C.UserConstructionScript
// ()

void APachyrhino_Character_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_Character_BP_Gauntlet.Pachyrhino_Character_BP_Gauntlet_C.UserConstructionScript");

	APachyrhino_Character_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pachyrhino_Character_BP_Gauntlet.Pachyrhino_Character_BP_Gauntlet_C.ExecuteUbergraph_Pachyrhino_Character_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APachyrhino_Character_BP_Gauntlet_C::ExecuteUbergraph_Pachyrhino_Character_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_Character_BP_Gauntlet.Pachyrhino_Character_BP_Gauntlet_C.ExecuteUbergraph_Pachyrhino_Character_BP_Gauntlet");

	APachyrhino_Character_BP_Gauntlet_C_ExecuteUbergraph_Pachyrhino_Character_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
