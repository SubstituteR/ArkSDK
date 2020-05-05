// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Iguanodon_AI_Controller_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Iguanodon_AI_Controller_Gauntlet.Iguanodon_AI_Controller_Gauntlet_C.UserConstructionScript
// ()

void AIguanodon_AI_Controller_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_AI_Controller_Gauntlet.Iguanodon_AI_Controller_Gauntlet_C.UserConstructionScript");

	AIguanodon_AI_Controller_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Iguanodon_AI_Controller_Gauntlet.Iguanodon_AI_Controller_Gauntlet_C.ExecuteUbergraph_Iguanodon_AI_Controller_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIguanodon_AI_Controller_Gauntlet_C::ExecuteUbergraph_Iguanodon_AI_Controller_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Iguanodon_AI_Controller_Gauntlet.Iguanodon_AI_Controller_Gauntlet_C.ExecuteUbergraph_Iguanodon_AI_Controller_Gauntlet");

	AIguanodon_AI_Controller_Gauntlet_C_ExecuteUbergraph_Iguanodon_AI_Controller_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
