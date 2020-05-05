#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BotDinoOverrideController_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BotDinoOverrideController.BotDinoOverrideController_C.OnPossess
struct ABotDinoOverrideController_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BotDinoOverrideController.BotDinoOverrideController_C.UserConstructionScript
struct ABotDinoOverrideController_C_UserConstructionScript_Params
{
};

// Function BotDinoOverrideController.BotDinoOverrideController_C.ReceiveBeginPlay
struct ABotDinoOverrideController_C_ReceiveBeginPlay_Params
{
};

// Function BotDinoOverrideController.BotDinoOverrideController_C.ExecuteUbergraph_BotDinoOverrideController
struct ABotDinoOverrideController_C_ExecuteUbergraph_BotDinoOverrideController_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
