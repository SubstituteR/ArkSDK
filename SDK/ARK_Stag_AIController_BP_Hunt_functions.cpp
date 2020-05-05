// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Stag_AIController_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stag_AIController_BP_Hunt.Stag_AIController_BP_Hunt_C.SetFemaleAttackDestinationOffset
// ()

void AStag_AIController_BP_Hunt_C::SetFemaleAttackDestinationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stag_AIController_BP_Hunt.Stag_AIController_BP_Hunt_C.SetFemaleAttackDestinationOffset");

	AStag_AIController_BP_Hunt_C_SetFemaleAttackDestinationOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stag_AIController_BP_Hunt.Stag_AIController_BP_Hunt_C.ReceiveBeginPlay
// ()

void AStag_AIController_BP_Hunt_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stag_AIController_BP_Hunt.Stag_AIController_BP_Hunt_C.ReceiveBeginPlay");

	AStag_AIController_BP_Hunt_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stag_AIController_BP_Hunt.Stag_AIController_BP_Hunt_C.UserConstructionScript
// ()

void AStag_AIController_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stag_AIController_BP_Hunt.Stag_AIController_BP_Hunt_C.UserConstructionScript");

	AStag_AIController_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stag_AIController_BP_Hunt.Stag_AIController_BP_Hunt_C.ExecuteUbergraph_Stag_AIController_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStag_AIController_BP_Hunt_C::ExecuteUbergraph_Stag_AIController_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stag_AIController_BP_Hunt.Stag_AIController_BP_Hunt_C.ExecuteUbergraph_Stag_AIController_BP_Hunt");

	AStag_AIController_BP_Hunt_C_ExecuteUbergraph_Stag_AIController_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
