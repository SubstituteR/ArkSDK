// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBattle_CodeKeyTumbler_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.UserConstructionScript
// ()

void AVRBattle_CodeKeyTumbler_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.UserConstructionScript");

	AVRBattle_CodeKeyTumbler_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.SetTargetPercentage
// ()
// Parameters:
// float                          Percentage                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRBattle_CodeKeyTumbler_C::SetTargetPercentage(float Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.SetTargetPercentage");

	AVRBattle_CodeKeyTumbler_C_SetTargetPercentage_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AVRBattle_CodeKeyTumbler_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.ReceiveTick");

	AVRBattle_CodeKeyTumbler_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.Multicast_PlayDepositFX
// ()

void AVRBattle_CodeKeyTumbler_C::Multicast_PlayDepositFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.Multicast_PlayDepositFX");

	AVRBattle_CodeKeyTumbler_C_Multicast_PlayDepositFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.Activate
// ()

void AVRBattle_CodeKeyTumbler_C::Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.Activate");

	AVRBattle_CodeKeyTumbler_C_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.Deactivate
// ()

void AVRBattle_CodeKeyTumbler_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.Deactivate");

	AVRBattle_CodeKeyTumbler_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.FireBeam
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AVRBattle_CodeKeyTumbler_C::FireBeam(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.FireBeam");

	AVRBattle_CodeKeyTumbler_C_FireBeam_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.ExecuteUbergraph_VRBattle_CodeKeyTumbler
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRBattle_CodeKeyTumbler_C::ExecuteUbergraph_VRBattle_CodeKeyTumbler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBattle_CodeKeyTumbler.VRBattle_CodeKeyTumbler_C.ExecuteUbergraph_VRBattle_CodeKeyTumbler");

	AVRBattle_CodeKeyTumbler_C_ExecuteUbergraph_VRBattle_CodeKeyTumbler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
