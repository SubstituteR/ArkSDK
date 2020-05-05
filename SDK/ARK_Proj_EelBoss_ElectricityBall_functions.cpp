// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Proj_EelBoss_ElectricityBall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.BPPostInitializeComponents
// ()

void AProj_EelBoss_ElectricityBall_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.BPPostInitializeComponents");

	AProj_EelBoss_ElectricityBall_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.UpdateBeam
// ()
// Parameters:
// TArray<class AActor*>          actors                         (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AProj_EelBoss_ElectricityBall_C::UpdateBeam(TArray<class AActor*>* actors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.UpdateBeam");

	AProj_EelBoss_ElectricityBall_C_UpdateBeam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (actors != nullptr)
		*actors = params.actors;
}


// Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProj_EelBoss_ElectricityBall_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.ReceiveTick");

	AProj_EelBoss_ElectricityBall_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.UserConstructionScript
// ()

void AProj_EelBoss_ElectricityBall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.UserConstructionScript");

	AProj_EelBoss_ElectricityBall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.ReceiveBeginPlay
// ()

void AProj_EelBoss_ElectricityBall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.ReceiveBeginPlay");

	AProj_EelBoss_ElectricityBall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.ExecuteUbergraph_Proj_EelBoss_ElectricityBall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProj_EelBoss_ElectricityBall_C::ExecuteUbergraph_Proj_EelBoss_ElectricityBall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelBoss_ElectricityBall.Proj_EelBoss_ElectricityBall_C.ExecuteUbergraph_Proj_EelBoss_ElectricityBall");

	AProj_EelBoss_ElectricityBall_C_ExecuteUbergraph_Proj_EelBoss_ElectricityBall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
