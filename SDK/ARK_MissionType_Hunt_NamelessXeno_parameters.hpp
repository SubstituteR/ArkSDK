#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Hunt_NamelessXeno_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_Hunt_NamelessXeno.MissionType_Hunt_NamelessXeno_C.GetDinosToSpawnForStage
struct AMissionType_Hunt_NamelessXeno_C_GetDinosToSpawnForStage_Params
{
	int*                                               ForStage;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FDinoSetup>                          DinosSetups;                                              // (Parm, OutParm, ZeroConstructor)
	TArray<bool>                                       IsMainTarget;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function MissionType_Hunt_NamelessXeno.MissionType_Hunt_NamelessXeno_C.UserConstructionScript
struct AMissionType_Hunt_NamelessXeno_C_UserConstructionScript_Params
{
};

// Function MissionType_Hunt_NamelessXeno.MissionType_Hunt_NamelessXeno_C.ExecuteUbergraph_MissionType_Hunt_NamelessXeno
struct AMissionType_Hunt_NamelessXeno_C_ExecuteUbergraph_MissionType_Hunt_NamelessXeno_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
