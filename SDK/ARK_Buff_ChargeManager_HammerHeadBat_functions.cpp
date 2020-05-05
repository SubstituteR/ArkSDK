// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ChargeManager_HammerHeadBat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ChargeManager_HammerHeadBat.Buff_ChargeManager_HammerHeadBat_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_HammerHeadBat_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_HammerHeadBat.Buff_ChargeManager_HammerHeadBat_C.BuffTickServer");

	ABuff_ChargeManager_HammerHeadBat_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager_HammerHeadBat.Buff_ChargeManager_HammerHeadBat_C.UserConstructionScript
// ()

void ABuff_ChargeManager_HammerHeadBat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_HammerHeadBat.Buff_ChargeManager_HammerHeadBat_C.UserConstructionScript");

	ABuff_ChargeManager_HammerHeadBat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ChargeManager_HammerHeadBat.Buff_ChargeManager_HammerHeadBat_C.ExecuteUbergraph_Buff_ChargeManager_HammerHeadBat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ChargeManager_HammerHeadBat_C::ExecuteUbergraph_Buff_ChargeManager_HammerHeadBat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ChargeManager_HammerHeadBat.Buff_ChargeManager_HammerHeadBat_C.ExecuteUbergraph_Buff_ChargeManager_HammerHeadBat");

	ABuff_ChargeManager_HammerHeadBat_C_ExecuteUbergraph_Buff_ChargeManager_HammerHeadBat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
