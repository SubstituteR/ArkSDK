// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_VRBattle_TeleportTamedDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.BPOverrideTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_VRBattle_TeleportTamedDino_C::BPOverrideTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.BPOverrideTargetingDesire");

	ABuff_VRBattle_TeleportTamedDino_C_BPOverrideTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.BPInstigatorDied
// ()

void ABuff_VRBattle_TeleportTamedDino_C::BPInstigatorDied()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.BPInstigatorDied");

	ABuff_VRBattle_TeleportTamedDino_C_BPInstigatorDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.UserConstructionScript
// ()

void ABuff_VRBattle_TeleportTamedDino_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.UserConstructionScript");

	ABuff_VRBattle_TeleportTamedDino_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.TeleportOut
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)
// class AMissionTrigger_VRBattleTeleporter_C* Teleporter                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_TeleportTamedDino_C::TeleportOut(float Delay, class AMissionTrigger_VRBattleTeleporter_C* Teleporter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.TeleportOut");

	ABuff_VRBattle_TeleportTamedDino_C_TeleportOut_Params params;
	params.Delay = Delay;
	params.Teleporter = Teleporter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.LandingLocationFound_Event
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_TeleportTamedDino_C::LandingLocationFound_Event(class APrimalCharacter* Character, const struct FVector& Location, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.LandingLocationFound_Event");

	ABuff_VRBattle_TeleportTamedDino_C_LandingLocationFound_Event_Params params;
	params.Character = Character;
	params.Location = Location;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.TeleportIn
// ()

void ABuff_VRBattle_TeleportTamedDino_C::TeleportIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.TeleportIn");

	ABuff_VRBattle_TeleportTamedDino_C_TeleportIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.ExecuteUbergraph_Buff_VRBattle_TeleportTamedDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_VRBattle_TeleportTamedDino_C::ExecuteUbergraph_Buff_VRBattle_TeleportTamedDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_VRBattle_TeleportTamedDino.Buff_VRBattle_TeleportTamedDino_C.ExecuteUbergraph_Buff_VRBattle_TeleportTamedDino");

	ABuff_VRBattle_TeleportTamedDino_C_ExecuteUbergraph_Buff_VRBattle_TeleportTamedDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
