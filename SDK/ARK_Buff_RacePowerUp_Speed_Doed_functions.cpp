// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_RacePowerUp_Speed_Doed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RacePowerUp_Speed_Doed.Buff_RacePowerUp_Speed_Doed_C.UserConstructionScript
// ()

void ABuff_RacePowerUp_Speed_Doed_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed_Doed.Buff_RacePowerUp_Speed_Doed_C.UserConstructionScript");

	ABuff_RacePowerUp_Speed_Doed_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Speed_Doed.Buff_RacePowerUp_Speed_Doed_C.ExecuteUbergraph_Buff_RacePowerUp_Speed_Doed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RacePowerUp_Speed_Doed_C::ExecuteUbergraph_Buff_RacePowerUp_Speed_Doed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed_Doed.Buff_RacePowerUp_Speed_Doed_C.ExecuteUbergraph_Buff_RacePowerUp_Speed_Doed");

	ABuff_RacePowerUp_Speed_Doed_C_ExecuteUbergraph_Buff_RacePowerUp_Speed_Doed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
