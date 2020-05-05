// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Shapeshifter_Large_AIController_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Shapeshifter_Large_AIController_BP_Hunt.Shapeshifter_Large_AIController_BP_Hunt_C.UserConstructionScript
// ()

void AShapeshifter_Large_AIController_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP_Hunt.Shapeshifter_Large_AIController_BP_Hunt_C.UserConstructionScript");

	AShapeshifter_Large_AIController_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shapeshifter_Large_AIController_BP_Hunt.Shapeshifter_Large_AIController_BP_Hunt_C.ExecuteUbergraph_Shapeshifter_Large_AIController_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShapeshifter_Large_AIController_BP_Hunt_C::ExecuteUbergraph_Shapeshifter_Large_AIController_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shapeshifter_Large_AIController_BP_Hunt.Shapeshifter_Large_AIController_BP_Hunt_C.ExecuteUbergraph_Shapeshifter_Large_AIController_BP_Hunt");

	AShapeshifter_Large_AIController_BP_Hunt_C_ExecuteUbergraph_Shapeshifter_Large_AIController_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
