#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Base_Pipe_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Base_Pipe.Base_Pipe_C.UserConstructionScript
struct ABase_Pipe_C_UserConstructionScript_Params
{
};

// Function Base_Pipe.Base_Pipe_C.ExecuteUbergraph_Base_Pipe
struct ABase_Pipe_C_ExecuteUbergraph_Base_Pipe_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
