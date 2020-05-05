// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_DebugMissionWeapon_Fishing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DebugMissionWeapon_Fishing.Buff_DebugMissionWeapon_Fishing_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_DebugMissionWeapon_Fishing_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon_Fishing.Buff_DebugMissionWeapon_Fishing_C.BPGetHUDElements");

	ABuff_DebugMissionWeapon_Fishing_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_DebugMissionWeapon_Fishing.Buff_DebugMissionWeapon_Fishing_C.UserConstructionScript
// ()

void ABuff_DebugMissionWeapon_Fishing_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon_Fishing.Buff_DebugMissionWeapon_Fishing_C.UserConstructionScript");

	ABuff_DebugMissionWeapon_Fishing_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DebugMissionWeapon_Fishing.Buff_DebugMissionWeapon_Fishing_C.ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DebugMissionWeapon_Fishing_C::ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DebugMissionWeapon_Fishing.Buff_DebugMissionWeapon_Fishing_C.ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing");

	ABuff_DebugMissionWeapon_Fishing_C_ExecuteUbergraph_Buff_DebugMissionWeapon_Fishing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
