#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_OilPump_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OilPump.OilPump_C.UserConstructionScript
struct AOilPump_C_UserConstructionScript_Params
{
};

// Function OilPump.OilPump_C.ExecuteUbergraph_OilPump
struct AOilPump_C_ExecuteUbergraph_OilPump_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
