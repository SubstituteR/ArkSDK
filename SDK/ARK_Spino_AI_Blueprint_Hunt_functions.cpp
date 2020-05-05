// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Spino_AI_Blueprint_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Spino_AI_Blueprint_Hunt.Spino_AI_Blueprint_Hunt_C.UserConstructionScript
// ()

void ASpino_AI_Blueprint_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint_Hunt.Spino_AI_Blueprint_Hunt_C.UserConstructionScript");

	ASpino_AI_Blueprint_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Spino_AI_Blueprint_Hunt.Spino_AI_Blueprint_Hunt_C.ExecuteUbergraph_Spino_AI_Blueprint_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpino_AI_Blueprint_Hunt_C::ExecuteUbergraph_Spino_AI_Blueprint_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Spino_AI_Blueprint_Hunt.Spino_AI_Blueprint_Hunt_C.ExecuteUbergraph_Spino_AI_Blueprint_Hunt");

	ASpino_AI_Blueprint_Hunt_C_ExecuteUbergraph_Spino_AI_Blueprint_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
