#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_RetrieveItem_Egg_Cherufe_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MissionType_RetrieveItem_Egg_Cherufe.MissionType_RetrieveItem_Egg_Cherufe_C.ExtraSpecificDinoSetup
struct AMissionType_RetrieveItem_Egg_Cherufe_C_ExtraSpecificDinoSetup_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AMissionServerSidePoint**                    Spawner;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAttackerDino;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MissionType_RetrieveItem_Egg_Cherufe.MissionType_RetrieveItem_Egg_Cherufe_C.UserConstructionScript
struct AMissionType_RetrieveItem_Egg_Cherufe_C_UserConstructionScript_Params
{
};

// Function MissionType_RetrieveItem_Egg_Cherufe.MissionType_RetrieveItem_Egg_Cherufe_C.ExecuteUbergraph_MissionType_RetrieveItem_Egg_Cherufe
struct AMissionType_RetrieveItem_Egg_Cherufe_C_ExecuteUbergraph_MissionType_RetrieveItem_Egg_Cherufe_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
