// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TerrorBird_Character_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TerrorBird_Character_BP_Escort.TerrorBird_Character_BP_Escort_C.UserConstructionScript
// ()

void ATerrorBird_Character_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrorBird_Character_BP_Escort.TerrorBird_Character_BP_Escort_C.UserConstructionScript");

	ATerrorBird_Character_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TerrorBird_Character_BP_Escort.TerrorBird_Character_BP_Escort_C.ExecuteUbergraph_TerrorBird_Character_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATerrorBird_Character_BP_Escort_C::ExecuteUbergraph_TerrorBird_Character_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TerrorBird_Character_BP_Escort.TerrorBird_Character_BP_Escort_C.ExecuteUbergraph_TerrorBird_Character_BP_Escort");

	ATerrorBird_Character_BP_Escort_C_ExecuteUbergraph_TerrorBird_Character_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
