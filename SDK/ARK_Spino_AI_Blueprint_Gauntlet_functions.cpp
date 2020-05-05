// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Spino_AI_Blueprint_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spino_AI_Blueprint_Gauntlet.Spino_AI_Blueprint_Gauntlet_C.UserConstructionScript
// ()

void ASpino_AI_Blueprint_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint_Gauntlet.Spino_AI_Blueprint_Gauntlet_C.UserConstructionScript");

	ASpino_AI_Blueprint_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_AI_Blueprint_Gauntlet.Spino_AI_Blueprint_Gauntlet_C.ExecuteUbergraph_Spino_AI_Blueprint_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_AI_Blueprint_Gauntlet_C::ExecuteUbergraph_Spino_AI_Blueprint_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint_Gauntlet.Spino_AI_Blueprint_Gauntlet_C.ExecuteUbergraph_Spino_AI_Blueprint_Gauntlet");

	ASpino_AI_Blueprint_Gauntlet_C_ExecuteUbergraph_Spino_AI_Blueprint_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
