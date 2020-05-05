#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Emitter_HuntTracks_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Emitter_HuntTracks.Emitter_HuntTracks_C.DrawBasicFloatingHUD
struct AEmitter_HuntTracks_C_DrawBasicFloatingHUD_Params
{
	class AHUD**                                       ForHUD;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Emitter_HuntTracks.Emitter_HuntTracks_C.UserConstructionScript
struct AEmitter_HuntTracks_C_UserConstructionScript_Params
{
};

// Function Emitter_HuntTracks.Emitter_HuntTracks_C.ExecuteUbergraph_Emitter_HuntTracks
struct AEmitter_HuntTracks_C_ExecuteUbergraph_Emitter_HuntTracks_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
