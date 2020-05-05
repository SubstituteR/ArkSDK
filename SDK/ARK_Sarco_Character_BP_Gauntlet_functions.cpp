// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Sarco_Character_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sarco_Character_BP_Gauntlet.Sarco_Character_BP_Gauntlet_C.UserConstructionScript
// ()

void ASarco_Character_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP_Gauntlet.Sarco_Character_BP_Gauntlet_C.UserConstructionScript");

	ASarco_Character_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sarco_Character_BP_Gauntlet.Sarco_Character_BP_Gauntlet_C.ExecuteUbergraph_Sarco_Character_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASarco_Character_BP_Gauntlet_C::ExecuteUbergraph_Sarco_Character_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sarco_Character_BP_Gauntlet.Sarco_Character_BP_Gauntlet_C.ExecuteUbergraph_Sarco_Character_BP_Gauntlet");

	ASarco_Character_BP_Gauntlet_C_ExecuteUbergraph_Sarco_Character_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
