#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_IceBox_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IceBox.IceBox_C.UserConstructionScript
struct AIceBox_C_UserConstructionScript_Params
{
};

// Function IceBox.IceBox_C.ExecuteUbergraph_IceBox
struct AIceBox_C_ExecuteUbergraph_IceBox_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
