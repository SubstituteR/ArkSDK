// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Basilisk_Character_BP_Hunt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.BPTimerServer
// ()

void ABasilisk_Character_BP_Hunt_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.BPTimerServer");

	ABasilisk_Character_BP_Hunt_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.ForceDiveEnd
// ()

void ABasilisk_Character_BP_Hunt_C::ForceDiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.ForceDiveEnd");

	ABasilisk_Character_BP_Hunt_C_ForceDiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.DiveEnd
// ()

void ABasilisk_Character_BP_Hunt_C::DiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.DiveEnd");

	ABasilisk_Character_BP_Hunt_C_DiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.FindNearbyEggs
// ()
// Parameters:
// bool*                          StartSeeking                   (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_Hunt_C::FindNearbyEggs(bool* StartSeeking)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.FindNearbyEggs");

	ABasilisk_Character_BP_Hunt_C_FindNearbyEggs_Params params;
	params.StartSeeking = StartSeeking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.UserConstructionScript
// ()

void ABasilisk_Character_BP_Hunt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.UserConstructionScript");

	ABasilisk_Character_BP_Hunt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.ExecuteUbergraph_Basilisk_Character_BP_Hunt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABasilisk_Character_BP_Hunt_C::ExecuteUbergraph_Basilisk_Character_BP_Hunt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Basilisk_Character_BP_Hunt.Basilisk_Character_BP_Hunt_C.ExecuteUbergraph_Basilisk_Character_BP_Hunt");

	ABasilisk_Character_BP_Hunt_C_ExecuteUbergraph_Basilisk_Character_BP_Hunt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
