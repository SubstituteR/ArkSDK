// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LanternPug_Character_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternPug_Character_BP_Gauntlet.LanternPug_Character_BP_Gauntlet_C.CreateChargeManager
// ()

void ALanternPug_Character_BP_Gauntlet_C::CreateChargeManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPug_Character_BP_Gauntlet.LanternPug_Character_BP_Gauntlet_C.CreateChargeManager");

	ALanternPug_Character_BP_Gauntlet_C_CreateChargeManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPug_Character_BP_Gauntlet.LanternPug_Character_BP_Gauntlet_C.UserConstructionScript
// ()

void ALanternPug_Character_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPug_Character_BP_Gauntlet.LanternPug_Character_BP_Gauntlet_C.UserConstructionScript");

	ALanternPug_Character_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPug_Character_BP_Gauntlet.LanternPug_Character_BP_Gauntlet_C.ExecuteUbergraph_LanternPug_Character_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPug_Character_BP_Gauntlet_C::ExecuteUbergraph_LanternPug_Character_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPug_Character_BP_Gauntlet.LanternPug_Character_BP_Gauntlet_C.ExecuteUbergraph_LanternPug_Character_BP_Gauntlet");

	ALanternPug_Character_BP_Gauntlet_C_ExecuteUbergraph_LanternPug_Character_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
