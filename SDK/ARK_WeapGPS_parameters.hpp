#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapGPS_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapGPS.WeapGPS_C.UserConstructionScript
struct AWeapGPS_C_UserConstructionScript_Params
{
};

// Function WeapGPS.WeapGPS_C.ExecuteUbergraph_WeapGPS
struct AWeapGPS_C_ExecuteUbergraph_WeapGPS_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
