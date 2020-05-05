// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Mosa_AIController_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mosa_AIController_BP_Hunt.Mosa_AIController_BP_Hunt_C.UserConstructionScript
// ()

void AMosa_AIController_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_AIController_BP_Hunt.Mosa_AIController_BP_Hunt_C.UserConstructionScript");

	AMosa_AIController_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mosa_AIController_BP_Hunt.Mosa_AIController_BP_Hunt_C.ExecuteUbergraph_Mosa_AIController_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMosa_AIController_BP_Hunt_C::ExecuteUbergraph_Mosa_AIController_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mosa_AIController_BP_Hunt.Mosa_AIController_BP_Hunt_C.ExecuteUbergraph_Mosa_AIController_BP_Hunt");

	AMosa_AIController_BP_Hunt_C_ExecuteUbergraph_Mosa_AIController_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
