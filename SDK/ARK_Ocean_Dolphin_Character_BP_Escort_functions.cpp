// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Ocean_Dolphin_Character_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ocean_Dolphin_Character_BP_Escort.Ocean_Dolphin_Character_BP_Escort_C.BP_ForceAllowAddBuff
// ()
// Parameters:
// class UClass**                 BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOcean_Dolphin_Character_BP_Escort_C::BP_ForceAllowAddBuff(class UClass** BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Dolphin_Character_BP_Escort.Ocean_Dolphin_Character_BP_Escort_C.BP_ForceAllowAddBuff");

	AOcean_Dolphin_Character_BP_Escort_C_BP_ForceAllowAddBuff_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ocean_Dolphin_Character_BP_Escort.Ocean_Dolphin_Character_BP_Escort_C.AllowGrappling
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOcean_Dolphin_Character_BP_Escort_C::AllowGrappling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Dolphin_Character_BP_Escort.Ocean_Dolphin_Character_BP_Escort_C.AllowGrappling");

	AOcean_Dolphin_Character_BP_Escort_C_AllowGrappling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ocean_Dolphin_Character_BP_Escort.Ocean_Dolphin_Character_BP_Escort_C.BPDisplayTamedMessage
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOcean_Dolphin_Character_BP_Escort_C::BPDisplayTamedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Dolphin_Character_BP_Escort.Ocean_Dolphin_Character_BP_Escort_C.BPDisplayTamedMessage");

	AOcean_Dolphin_Character_BP_Escort_C_BPDisplayTamedMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ocean_Dolphin_Character_BP_Escort.Ocean_Dolphin_Character_BP_Escort_C.UserConstructionScript
// ()

void AOcean_Dolphin_Character_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Dolphin_Character_BP_Escort.Ocean_Dolphin_Character_BP_Escort_C.UserConstructionScript");

	AOcean_Dolphin_Character_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ocean_Dolphin_Character_BP_Escort.Ocean_Dolphin_Character_BP_Escort_C.ExecuteUbergraph_Ocean_Dolphin_Character_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOcean_Dolphin_Character_BP_Escort_C::ExecuteUbergraph_Ocean_Dolphin_Character_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ocean_Dolphin_Character_BP_Escort.Ocean_Dolphin_Character_BP_Escort_C.ExecuteUbergraph_Ocean_Dolphin_Character_BP_Escort");

	AOcean_Dolphin_Character_BP_Escort_C_ExecuteUbergraph_Ocean_Dolphin_Character_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
