// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Volcano_Ankylo_Character_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Volcano_Ankylo_Character_BP_Gauntlet.Volcano_Ankylo_Character_BP_Gauntlet_C.UserConstructionScript
// ()

void AVolcano_Ankylo_Character_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Ankylo_Character_BP_Gauntlet.Volcano_Ankylo_Character_BP_Gauntlet_C.UserConstructionScript");

	AVolcano_Ankylo_Character_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Volcano_Ankylo_Character_BP_Gauntlet.Volcano_Ankylo_Character_BP_Gauntlet_C.ExecuteUbergraph_Volcano_Ankylo_Character_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVolcano_Ankylo_Character_BP_Gauntlet_C::ExecuteUbergraph_Volcano_Ankylo_Character_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Volcano_Ankylo_Character_BP_Gauntlet.Volcano_Ankylo_Character_BP_Gauntlet_C.ExecuteUbergraph_Volcano_Ankylo_Character_BP_Gauntlet");

	AVolcano_Ankylo_Character_BP_Gauntlet_C_ExecuteUbergraph_Volcano_Ankylo_Character_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
