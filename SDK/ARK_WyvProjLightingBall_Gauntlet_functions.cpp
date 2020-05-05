// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WyvProjLightingBall_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvProjLightingBall_Gauntlet.WyvProjLightingBall_Gauntlet_C.UserConstructionScript
// ()

void AWyvProjLightingBall_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjLightingBall_Gauntlet.WyvProjLightingBall_Gauntlet_C.UserConstructionScript");

	AWyvProjLightingBall_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvProjLightingBall_Gauntlet.WyvProjLightingBall_Gauntlet_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWyvProjLightingBall_Gauntlet_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjLightingBall_Gauntlet.WyvProjLightingBall_Gauntlet_C.ReceiveTick");

	AWyvProjLightingBall_Gauntlet_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvProjLightingBall_Gauntlet.WyvProjLightingBall_Gauntlet_C.ReceiveBeginPlay
// ()

void AWyvProjLightingBall_Gauntlet_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjLightingBall_Gauntlet.WyvProjLightingBall_Gauntlet_C.ReceiveBeginPlay");

	AWyvProjLightingBall_Gauntlet_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvProjLightingBall_Gauntlet.WyvProjLightingBall_Gauntlet_C.ExecuteUbergraph_WyvProjLightingBall_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvProjLightingBall_Gauntlet_C::ExecuteUbergraph_WyvProjLightingBall_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjLightingBall_Gauntlet.WyvProjLightingBall_Gauntlet_C.ExecuteUbergraph_WyvProjLightingBall_Gauntlet");

	AWyvProjLightingBall_Gauntlet_C_ExecuteUbergraph_WyvProjLightingBall_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
