// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPClientHandleNetExecCommand
// ()
// Parameters:
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen_AreaBuff_Base_C::BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPClientHandleNetExecCommand");

	AGen_AreaBuff_Base_C_BPClientHandleNetExecCommand_Params params;
	params.CommandName = CommandName;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.UpdateLocalTransform
// ()

void AGen_AreaBuff_Base_C::UpdateLocalTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.UpdateLocalTransform");

	AGen_AreaBuff_Base_C_UpdateLocalTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AGen_AreaBuff_Base_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPGetHUDElements");

	AGen_AreaBuff_Base_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.SwitchAudioWaterAndCave
// ()

void AGen_AreaBuff_Base_C::SwitchAudioWaterAndCave()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.SwitchAudioWaterAndCave");

	AGen_AreaBuff_Base_C_SwitchAudioWaterAndCave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BuffTickServer
// (NetReliable, NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Base_C::STATIC_BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BuffTickServer");

	AGen_AreaBuff_Base_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Base_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BuffTickClient");

	AGen_AreaBuff_Base_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.SetParticleVis
// ()

void AGen_AreaBuff_Base_C::SetParticleVis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.SetParticleVis");

	AGen_AreaBuff_Base_C_SetParticleVis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.LocalEffects
// ()

void AGen_AreaBuff_Base_C::LocalEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.LocalEffects");

	AGen_AreaBuff_Base_C_LocalEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPPreventRunning
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen_AreaBuff_Base_C::BPPreventRunning()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPPreventRunning");

	AGen_AreaBuff_Base_C_BPPreventRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGen_AreaBuff_Base_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPCustomAllowAddBuff");

	AGen_AreaBuff_Base_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.UserConstructionScript
// ()

void AGen_AreaBuff_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.UserConstructionScript");

	AGen_AreaBuff_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.ReceiveBeginPlay
// ()

void AGen_AreaBuff_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.ReceiveBeginPlay");

	AGen_AreaBuff_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.OnPlayerStatusUpdate
// ()
// Parameters:
// bool                           IsInCave                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsUnderwater                   (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Base_C::OnPlayerStatusUpdate(bool IsInCave, bool IsUnderwater)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.OnPlayerStatusUpdate");

	AGen_AreaBuff_Base_C_OnPlayerStatusUpdate_Params params;
	params.IsInCave = IsInCave;
	params.IsUnderwater = IsUnderwater;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Base_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPDeactivated");

	AGen_AreaBuff_Base_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Base_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.BPSetupForInstigator");

	AGen_AreaBuff_Base_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.ExecuteUbergraph_Gen_AreaBuff_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGen_AreaBuff_Base_C::ExecuteUbergraph_Gen_AreaBuff_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen_AreaBuff_Base.Gen_AreaBuff_Base_C.ExecuteUbergraph_Gen_AreaBuff_Base");

	AGen_AreaBuff_Base_C_ExecuteUbergraph_Gen_AreaBuff_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
