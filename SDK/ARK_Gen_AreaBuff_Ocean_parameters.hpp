#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen_AreaBuff_Ocean_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gen_AreaBuff_Ocean.Gen_AreaBuff_Ocean_C.BuffTickServer
struct AGen_AreaBuff_Ocean_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gen_AreaBuff_Ocean.Gen_AreaBuff_Ocean_C.UserConstructionScript
struct AGen_AreaBuff_Ocean_C_UserConstructionScript_Params
{
};

// Function Gen_AreaBuff_Ocean.Gen_AreaBuff_Ocean_C.ExecuteUbergraph_Gen_AreaBuff_Ocean
struct AGen_AreaBuff_Ocean_C_ExecuteUbergraph_Gen_AreaBuff_Ocean_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
