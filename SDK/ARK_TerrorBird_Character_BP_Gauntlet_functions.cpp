// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TerrorBird_Character_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TerrorBird_Character_BP_Gauntlet.TerrorBird_Character_BP_Gauntlet_C.UserConstructionScript
// ()

void ATerrorBird_Character_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrorBird_Character_BP_Gauntlet.TerrorBird_Character_BP_Gauntlet_C.UserConstructionScript");

	ATerrorBird_Character_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrorBird_Character_BP_Gauntlet.TerrorBird_Character_BP_Gauntlet_C.ExecuteUbergraph_TerrorBird_Character_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATerrorBird_Character_BP_Gauntlet_C::ExecuteUbergraph_TerrorBird_Character_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrorBird_Character_BP_Gauntlet.TerrorBird_Character_BP_Gauntlet_C.ExecuteUbergraph_TerrorBird_Character_BP_Gauntlet");

	ATerrorBird_Character_BP_Gauntlet_C_ExecuteUbergraph_TerrorBird_Character_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
