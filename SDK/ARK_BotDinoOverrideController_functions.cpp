// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BotDinoOverrideController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BotDinoOverrideController.BotDinoOverrideController_C.OnPossess
// ()
// Parameters:
// class APawn**                  PossessedPawn                  (Parm, ZeroConstructor, IsPlainOldData)

void ABotDinoOverrideController_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotDinoOverrideController.BotDinoOverrideController_C.OnPossess");

	ABotDinoOverrideController_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BotDinoOverrideController.BotDinoOverrideController_C.UserConstructionScript
// ()

void ABotDinoOverrideController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BotDinoOverrideController.BotDinoOverrideController_C.UserConstructionScript");

	ABotDinoOverrideController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BotDinoOverrideController.BotDinoOverrideController_C.ReceiveBeginPlay
// ()

void ABotDinoOverrideController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BotDinoOverrideController.BotDinoOverrideController_C.ReceiveBeginPlay");

	ABotDinoOverrideController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BotDinoOverrideController.BotDinoOverrideController_C.ExecuteUbergraph_BotDinoOverrideController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABotDinoOverrideController_C::ExecuteUbergraph_BotDinoOverrideController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BotDinoOverrideController.BotDinoOverrideController_C.ExecuteUbergraph_BotDinoOverrideController");

	ABotDinoOverrideController_C_ExecuteUbergraph_BotDinoOverrideController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
