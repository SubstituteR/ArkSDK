// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRMainBoss_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.GetEyebeamTarget
// ()
// Parameters:
// class AActor*                  BeamTarget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::GetEyebeamTarget(class AActor** BeamTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.GetEyebeamTarget");

	AVRMainBoss_AIController_BP_C_GetEyebeamTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeamTarget != nullptr)
		*BeamTarget = params.BeamTarget;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Get Is Vulnerable?
// ()
// Parameters:
// bool                           IsVulnerable                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::Get_Is_Vulnerable_(bool* IsVulnerable)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Get Is Vulnerable?");

	AVRMainBoss_AIController_BP_C_Get_Is_Vulnerable__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsVulnerable != nullptr)
		*IsVulnerable = params.IsVulnerable;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.GetPercentageOfAggroEntriesInFOV
// ()
// Parameters:
// float                          Percentage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::GetPercentageOfAggroEntriesInFOV(float* Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.GetPercentageOfAggroEntriesInFOV");

	AVRMainBoss_AIController_BP_C_GetPercentageOfAggroEntriesInFOV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Percentage != nullptr)
		*Percentage = params.Percentage;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.SelectBeamAttack
// ()
// Parameters:
// TEnumAsByte<EVRMainBossBeamType> BeamType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::SelectBeamAttack(TEnumAsByte<EVRMainBossBeamType>* BeamType)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.SelectBeamAttack");

	AVRMainBoss_AIController_BP_C_SelectBeamAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BeamType != nullptr)
		*BeamType = params.BeamType;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.StartBeamCooldown
// ()

void AVRMainBoss_AIController_BP_C::StartBeamCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.StartBeamCooldown");

	AVRMainBoss_AIController_BP_C_StartBeamCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Fire Beam at a Target
// ()
// Parameters:
// bool                           Succeeded_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::Fire_Beam_at_a_Target(bool* Succeeded_)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Fire Beam at a Target");

	AVRMainBoss_AIController_BP_C_Fire_Beam_at_a_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded_ != nullptr)
		*Succeeded_ = params.Succeeded_;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Fire Rotating Beams
// ()
// Parameters:
// bool                           Succeeded_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::Fire_Rotating_Beams(bool* Succeeded_)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Fire Rotating Beams");

	AVRMainBoss_AIController_BP_C_Fire_Rotating_Beams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded_ != nullptr)
		*Succeeded_ = params.Succeeded_;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Fire Eye Beams
// ()
// Parameters:
// bool                           Succeeded_                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::Fire_Eye_Beams(bool* Succeeded_)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Fire Eye Beams");

	AVRMainBoss_AIController_BP_C_Fire_Eye_Beams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded_ != nullptr)
		*Succeeded_ = params.Succeeded_;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Get Current Attack Cooldown
// ()
// Parameters:
// float                          Cooldown                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::Get_Current_Attack_Cooldown(float* Cooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Get Current Attack Cooldown");

	AVRMainBoss_AIController_BP_C_Get_Current_Attack_Cooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cooldown != nullptr)
		*Cooldown = params.Cooldown;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Is Firing Eye Beams?
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::Is_Firing_Eye_Beams_(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Is Firing Eye Beams?");

	AVRMainBoss_AIController_BP_C_Is_Firing_Eye_Beams__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Is Firing Rotating Beams?
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::Is_Firing_Rotating_Beams_(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Is Firing Rotating Beams?");

	AVRMainBoss_AIController_BP_C_Is_Firing_Rotating_Beams__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.UserConstructionScript
// ()

void AVRMainBoss_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.UserConstructionScript");

	AVRMainBoss_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.SetVulnerability
// ()
// Parameters:
// bool                           IsVulnerable_                  (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::SetVulnerability(bool IsVulnerable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.SetVulnerability");

	AVRMainBoss_AIController_BP_C_SetVulnerability_Params params;
	params.IsVulnerable_ = IsVulnerable_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.SetCanFireBeam
// ()
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::SetCanFireBeam(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.SetCanFireBeam");

	AVRMainBoss_AIController_BP_C_SetCanFireBeam_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.ReceiveBeginPlay
// ()

void AVRMainBoss_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.ReceiveBeginPlay");

	AVRMainBoss_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.OnPossess
// ()
// Parameters:
// class APawn**                  PossessedPawn                  (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.OnPossess");

	AVRMainBoss_AIController_BP_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.ExecuteUbergraph_VRMainBoss_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVRMainBoss_AIController_BP_C::ExecuteUbergraph_VRMainBoss_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.ExecuteUbergraph_VRMainBoss_AIController_BP");

	AVRMainBoss_AIController_BP_C_ExecuteUbergraph_VRMainBoss_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
