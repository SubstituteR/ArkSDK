#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBossBeamController_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VRBossBeamController_BP.VRBossBeamController_BP_C.FireBeams
struct UVRBossBeamController_BP_C_FireBeams_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRBossBeamController_BP.VRBossBeamController_BP_C.Get Float Value For Boss State
struct UVRBossBeamController_BP_C_Get_Float_Value_For_Boss_State_Params
{
	TArray<float>                                      Values;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Default;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BossState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function VRBossBeamController_BP.VRBossBeamController_BP_C.Set Current Beam Settings
struct UVRBossBeamController_BP_C_Set_Current_Beam_Settings_Params
{
	class UBeamWeaponComponent*                        BeamComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRBossBeamController_BP.VRBossBeamController_BP_C.ExecuteUbergraph_VRBossBeamController_BP
struct UVRBossBeamController_BP_C_ExecuteUbergraph_VRBossBeamController_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
