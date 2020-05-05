#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRMainBoss_AIController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.GetEyebeamTarget
struct AVRMainBoss_AIController_BP_C_GetEyebeamTarget_Params
{
	class AActor*                                      BeamTarget;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Get Is Vulnerable?
struct AVRMainBoss_AIController_BP_C_Get_Is_Vulnerable__Params
{
	bool                                               IsVulnerable;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.GetPercentageOfAggroEntriesInFOV
struct AVRMainBoss_AIController_BP_C_GetPercentageOfAggroEntriesInFOV_Params
{
	float                                              Percentage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.SelectBeamAttack
struct AVRMainBoss_AIController_BP_C_SelectBeamAttack_Params
{
	TEnumAsByte<EVRMainBossBeamType>                   BeamType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.StartBeamCooldown
struct AVRMainBoss_AIController_BP_C_StartBeamCooldown_Params
{
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Fire Beam at a Target
struct AVRMainBoss_AIController_BP_C_Fire_Beam_at_a_Target_Params
{
	bool                                               Succeeded_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Fire Rotating Beams
struct AVRMainBoss_AIController_BP_C_Fire_Rotating_Beams_Params
{
	bool                                               Succeeded_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Fire Eye Beams
struct AVRMainBoss_AIController_BP_C_Fire_Eye_Beams_Params
{
	bool                                               Succeeded_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Get Current Attack Cooldown
struct AVRMainBoss_AIController_BP_C_Get_Current_Attack_Cooldown_Params
{
	float                                              Cooldown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Is Firing Eye Beams?
struct AVRMainBoss_AIController_BP_C_Is_Firing_Eye_Beams__Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.Is Firing Rotating Beams?
struct AVRMainBoss_AIController_BP_C_Is_Firing_Rotating_Beams__Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.UserConstructionScript
struct AVRMainBoss_AIController_BP_C_UserConstructionScript_Params
{
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.SetVulnerability
struct AVRMainBoss_AIController_BP_C_SetVulnerability_Params
{
	bool                                               IsVulnerable_;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.SetCanFireBeam
struct AVRMainBoss_AIController_BP_C_SetCanFireBeam_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.ReceiveBeginPlay
struct AVRMainBoss_AIController_BP_C_ReceiveBeginPlay_Params
{
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.OnPossess
struct AVRMainBoss_AIController_BP_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRMainBoss_AIController_BP.VRMainBoss_AIController_BP_C.ExecuteUbergraph_VRMainBoss_AIController_BP
struct AVRMainBoss_AIController_BP_C_ExecuteUbergraph_VRMainBoss_AIController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
