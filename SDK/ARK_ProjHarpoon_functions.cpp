// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjHarpoon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjHarpoon.ProjHarpoon_C.ReceiveBeginPlay
// ()

void AProjHarpoon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjHarpoon.ProjHarpoon_C.ReceiveBeginPlay");

	AProjHarpoon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjHarpoon.ProjHarpoon_C.ReceiveTick
// (NetRequest, Event, Static, NetMulticast, Public, Private, Protected, Delegate, HasOutParms, BlueprintCallable, Const)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjHarpoon_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjHarpoon.ProjHarpoon_C.ReceiveTick");

	AProjHarpoon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjHarpoon.ProjHarpoon_C.UserConstructionScript
// ()

void AProjHarpoon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjHarpoon.ProjHarpoon_C.UserConstructionScript");

	AProjHarpoon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjHarpoon.ProjHarpoon_C.ExecuteUbergraph_ProjHarpoon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjHarpoon_C::ExecuteUbergraph_ProjHarpoon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjHarpoon.ProjHarpoon_C.ExecuteUbergraph_ProjHarpoon");

	AProjHarpoon_C_ExecuteUbergraph_ProjHarpoon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
