// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basilosaurus_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basilosaurus_Character_BP_Hunt.Basilosaurus_Character_BP_Hunt_C.UserConstructionScript
// ()

void ABasilosaurus_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP_Hunt.Basilosaurus_Character_BP_Hunt_C.UserConstructionScript");

	ABasilosaurus_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilosaurus_Character_BP_Hunt.Basilosaurus_Character_BP_Hunt_C.ExecuteUbergraph_Basilosaurus_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABasilosaurus_Character_BP_Hunt_C::ExecuteUbergraph_Basilosaurus_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilosaurus_Character_BP_Hunt.Basilosaurus_Character_BP_Hunt_C.ExecuteUbergraph_Basilosaurus_Character_BP_Hunt");

	ABasilosaurus_Character_BP_Hunt_C_ExecuteUbergraph_Basilosaurus_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
