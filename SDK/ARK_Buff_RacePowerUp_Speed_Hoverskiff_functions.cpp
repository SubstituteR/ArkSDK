// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_RacePowerUp_Speed_Hoverskiff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RacePowerUp_Speed_Hoverskiff.Buff_RacePowerUp_Speed_Hoverskiff_C.UserConstructionScript
// ()

void ABuff_RacePowerUp_Speed_Hoverskiff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed_Hoverskiff.Buff_RacePowerUp_Speed_Hoverskiff_C.UserConstructionScript");

	ABuff_RacePowerUp_Speed_Hoverskiff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RacePowerUp_Speed_Hoverskiff.Buff_RacePowerUp_Speed_Hoverskiff_C.ExecuteUbergraph_Buff_RacePowerUp_Speed_Hoverskiff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RacePowerUp_Speed_Hoverskiff_C::ExecuteUbergraph_Buff_RacePowerUp_Speed_Hoverskiff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RacePowerUp_Speed_Hoverskiff.Buff_RacePowerUp_Speed_Hoverskiff_C.ExecuteUbergraph_Buff_RacePowerUp_Speed_Hoverskiff");

	ABuff_RacePowerUp_Speed_Hoverskiff_C_ExecuteUbergraph_Buff_RacePowerUp_Speed_Hoverskiff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
