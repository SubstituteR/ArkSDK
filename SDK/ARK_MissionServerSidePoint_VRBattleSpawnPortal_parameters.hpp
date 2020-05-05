#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionServerSidePoint_VRBattleSpawnPortal_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.UserConstructionScript
struct AMissionServerSidePoint_VRBattleSpawnPortal_C_UserConstructionScript_Params
{
};

// Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.Server_Activate
struct AMissionServerSidePoint_VRBattleSpawnPortal_C_Server_Activate_Params
{
	int                                                WaveIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                groupIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumToSpawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.ExecuteUbergraph_MissionServerSidePoint_VRBattleSpawnPortal
struct AMissionServerSidePoint_VRBattleSpawnPortal_C_ExecuteUbergraph_MissionServerSidePoint_VRBattleSpawnPortal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MissionServerSidePoint_VRBattleSpawnPortal.MissionServerSidePoint_VRBattleSpawnPortal_C.OnReadyToSpawn__DelegateSignature
struct AMissionServerSidePoint_VRBattleSpawnPortal_C_OnReadyToSpawn__DelegateSignature_Params
{
	class AMissionServerSidePoint_VRBattleSpawnPortal_C* Portal;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
