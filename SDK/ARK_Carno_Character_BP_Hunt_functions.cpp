// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Carno_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carno_Character_BP_Hunt.Carno_Character_BP_Hunt_C.UserConstructionScript
// ()

void ACarno_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_Character_BP_Hunt.Carno_Character_BP_Hunt_C.UserConstructionScript");

	ACarno_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Carno_Character_BP_Hunt.Carno_Character_BP_Hunt_C.ExecuteUbergraph_Carno_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACarno_Character_BP_Hunt_C::ExecuteUbergraph_Carno_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_Character_BP_Hunt.Carno_Character_BP_Hunt_C.ExecuteUbergraph_Carno_Character_BP_Hunt");

	ACarno_Character_BP_Hunt_C_ExecuteUbergraph_Carno_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
