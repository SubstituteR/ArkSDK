#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjDefPlant_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjDefPlant.ProjDefPlant_C.UserConstructionScript
struct AProjDefPlant_C_UserConstructionScript_Params
{
};

// Function ProjDefPlant.ProjDefPlant_C.ExecuteUbergraph_ProjDefPlant
struct AProjDefPlant_C_ExecuteUbergraph_ProjDefPlant_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
