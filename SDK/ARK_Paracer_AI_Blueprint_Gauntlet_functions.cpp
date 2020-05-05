// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Paracer_AI_Blueprint_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Paracer_AI_Blueprint_Gauntlet.Paracer_AI_Blueprint_Gauntlet_C.UserConstructionScript
// ()

void AParacer_AI_Blueprint_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_AI_Blueprint_Gauntlet.Paracer_AI_Blueprint_Gauntlet_C.UserConstructionScript");

	AParacer_AI_Blueprint_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Paracer_AI_Blueprint_Gauntlet.Paracer_AI_Blueprint_Gauntlet_C.ExecuteUbergraph_Paracer_AI_Blueprint_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AParacer_AI_Blueprint_Gauntlet_C::ExecuteUbergraph_Paracer_AI_Blueprint_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Paracer_AI_Blueprint_Gauntlet.Paracer_AI_Blueprint_Gauntlet_C.ExecuteUbergraph_Paracer_AI_Blueprint_Gauntlet");

	AParacer_AI_Blueprint_Gauntlet_C_ExecuteUbergraph_Paracer_AI_Blueprint_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
