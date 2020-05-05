// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MIssionTrigger_WeaponPowerup_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MIssionTrigger_WeaponPowerup.MissionTrigger_WeaponPowerup_C.UserConstructionScript
// ()

void AMissionTrigger_WeaponPowerup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MIssionTrigger_WeaponPowerup.MissionTrigger_WeaponPowerup_C.UserConstructionScript");

	AMissionTrigger_WeaponPowerup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MIssionTrigger_WeaponPowerup.MissionTrigger_WeaponPowerup_C.ExecuteUbergraph_MissionTrigger_WeaponPowerup
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionTrigger_WeaponPowerup_C::ExecuteUbergraph_MissionTrigger_WeaponPowerup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MIssionTrigger_WeaponPowerup.MissionTrigger_WeaponPowerup_C.ExecuteUbergraph_MissionTrigger_WeaponPowerup");

	AMissionTrigger_WeaponPowerup_C_ExecuteUbergraph_MissionTrigger_WeaponPowerup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
