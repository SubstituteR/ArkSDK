#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BaseFuelBurner_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BaseFuelBurner.BaseFuelBurner_C.UserConstructionScript
struct ABaseFuelBurner_C_UserConstructionScript_Params
{
};

// Function BaseFuelBurner.BaseFuelBurner_C.ExecuteUbergraph_BaseFuelBurner
struct ABaseFuelBurner_C_ExecuteUbergraph_BaseFuelBurner_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
