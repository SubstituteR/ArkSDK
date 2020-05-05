// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Scorpion_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Scorpion_Character_BP_Hunt.Scorpion_Character_BP_Hunt_C.UserConstructionScript
// ()

void AScorpion_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scorpion_Character_BP_Hunt.Scorpion_Character_BP_Hunt_C.UserConstructionScript");

	AScorpion_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scorpion_Character_BP_Hunt.Scorpion_Character_BP_Hunt_C.ExecuteUbergraph_Scorpion_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AScorpion_Character_BP_Hunt_C::ExecuteUbergraph_Scorpion_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scorpion_Character_BP_Hunt.Scorpion_Character_BP_Hunt_C.ExecuteUbergraph_Scorpion_Character_BP_Hunt");

	AScorpion_Character_BP_Hunt_C_ExecuteUbergraph_Scorpion_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
