// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SpaceWhale_AIController_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceWhale_AIController_BP_Hunt.SpaceWhale_AIController_BP_Hunt_C.BPOnFleeEvent
// ()

void ASpaceWhale_AIController_BP_Hunt_C::BPOnFleeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_AIController_BP_Hunt.SpaceWhale_AIController_BP_Hunt_C.BPOnFleeEvent");

	ASpaceWhale_AIController_BP_Hunt_C_BPOnFleeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_AIController_BP_Hunt.SpaceWhale_AIController_BP_Hunt_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_AIController_BP_Hunt_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_AIController_BP_Hunt.SpaceWhale_AIController_BP_Hunt_C.ReceiveTick");

	ASpaceWhale_AIController_BP_Hunt_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_AIController_BP_Hunt.SpaceWhale_AIController_BP_Hunt_C.UserConstructionScript
// ()

void ASpaceWhale_AIController_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_AIController_BP_Hunt.SpaceWhale_AIController_BP_Hunt_C.UserConstructionScript");

	ASpaceWhale_AIController_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_AIController_BP_Hunt.SpaceWhale_AIController_BP_Hunt_C.ExecuteUbergraph_SpaceWhale_AIController_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_AIController_BP_Hunt_C::ExecuteUbergraph_SpaceWhale_AIController_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_AIController_BP_Hunt.SpaceWhale_AIController_BP_Hunt_C.ExecuteUbergraph_SpaceWhale_AIController_BP_Hunt");

	ASpaceWhale_AIController_BP_Hunt_C_ExecuteUbergraph_SpaceWhale_AIController_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
