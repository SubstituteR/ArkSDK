// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Wyvern_Character_BP_Fire_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wyvern_Character_BP_Fire_Gauntlet.Wyvern_Character_BP_Fire_Gauntlet_C.UserConstructionScript
// ()

void AWyvern_Character_BP_Fire_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Gauntlet.Wyvern_Character_BP_Fire_Gauntlet_C.UserConstructionScript");

	AWyvern_Character_BP_Fire_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_Fire_Gauntlet.Wyvern_Character_BP_Fire_Gauntlet_C.ExecuteUbergraph_Wyvern_Character_BP_Fire_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_Fire_Gauntlet_C::ExecuteUbergraph_Wyvern_Character_BP_Fire_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_Fire_Gauntlet.Wyvern_Character_BP_Fire_Gauntlet_C.ExecuteUbergraph_Wyvern_Character_BP_Fire_Gauntlet");

	AWyvern_Character_BP_Fire_Gauntlet_C_ExecuteUbergraph_Wyvern_Character_BP_Fire_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
