#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBattle_MatineeActor_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VRBattle_MatineeActor.VRBattle_MatineeActor_C.UserConstructionScript
struct AVRBattle_MatineeActor_C_UserConstructionScript_Params
{
};

// Function VRBattle_MatineeActor.VRBattle_MatineeActor_C.Intro_Timeline__FinishedFunc
struct AVRBattle_MatineeActor_C_Intro_Timeline__FinishedFunc_Params
{
};

// Function VRBattle_MatineeActor.VRBattle_MatineeActor_C.Intro_Timeline__UpdateFunc
struct AVRBattle_MatineeActor_C_Intro_Timeline__UpdateFunc_Params
{
};

// Function VRBattle_MatineeActor.VRBattle_MatineeActor_C.RecieveMatineeUpdated
struct AVRBattle_MatineeActor_C_RecieveMatineeUpdated_Params
{
};

// Function VRBattle_MatineeActor.VRBattle_MatineeActor_C.SetBossCharacter
struct AVRBattle_MatineeActor_C_SetBossCharacter_Params
{
	class ACharacter*                                  Boss;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_MatineeActor.VRBattle_MatineeActor_C.StartVRBattle
struct AVRBattle_MatineeActor_C_StartVRBattle_Params
{
};

// Function VRBattle_MatineeActor.VRBattle_MatineeActor_C.ReceiveTick
struct AVRBattle_MatineeActor_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_MatineeActor.VRBattle_MatineeActor_C.OnDied_Event
struct AVRBattle_MatineeActor_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRBattle_MatineeActor.VRBattle_MatineeActor_C.LerpIntro
struct AVRBattle_MatineeActor_C_LerpIntro_Params
{
};

// Function VRBattle_MatineeActor.VRBattle_MatineeActor_C.ForceVisible
struct AVRBattle_MatineeActor_C_ForceVisible_Params
{
};

// Function VRBattle_MatineeActor.VRBattle_MatineeActor_C.ExecuteUbergraph_VRBattle_MatineeActor
struct AVRBattle_MatineeActor_C_ExecuteUbergraph_VRBattle_MatineeActor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
