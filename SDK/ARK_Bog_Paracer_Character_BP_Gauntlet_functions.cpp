// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Bog_Paracer_Character_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bog_Paracer_Character_BP_Gauntlet.Bog_Paracer_Character_BP_Gauntlet_C.UserConstructionScript
// ()

void ABog_Paracer_Character_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bog_Paracer_Character_BP_Gauntlet.Bog_Paracer_Character_BP_Gauntlet_C.UserConstructionScript");

	ABog_Paracer_Character_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bog_Paracer_Character_BP_Gauntlet.Bog_Paracer_Character_BP_Gauntlet_C.ExecuteUbergraph_Bog_Paracer_Character_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABog_Paracer_Character_BP_Gauntlet_C::ExecuteUbergraph_Bog_Paracer_Character_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bog_Paracer_Character_BP_Gauntlet.Bog_Paracer_Character_BP_Gauntlet_C.ExecuteUbergraph_Bog_Paracer_Character_BP_Gauntlet");

	ABog_Paracer_Character_BP_Gauntlet_C_ExecuteUbergraph_Bog_Paracer_Character_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
