// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Turtle_Character_BP_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.BP_ForceAllowAddBuff
// ()
// Parameters:
// class UClass**                 BuffClass                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATurtle_Character_BP_Escort_C::BP_ForceAllowAddBuff(class UClass** BuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.BP_ForceAllowAddBuff");

	ATurtle_Character_BP_Escort_C_BP_ForceAllowAddBuff_Params params;
	params.BuffClass = BuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.AllowGrappling
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATurtle_Character_BP_Escort_C::AllowGrappling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.AllowGrappling");

	ATurtle_Character_BP_Escort_C_AllowGrappling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.DelayEscape
// ()

void ATurtle_Character_BP_Escort_C::DelayEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.DelayEscape");

	ATurtle_Character_BP_Escort_C_DelayEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.BPDisplayTamedMessage
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATurtle_Character_BP_Escort_C::BPDisplayTamedMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.BPDisplayTamedMessage");

	ATurtle_Character_BP_Escort_C_BPDisplayTamedMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.UserConstructionScript
// ()

void ATurtle_Character_BP_Escort_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.UserConstructionScript");

	ATurtle_Character_BP_Escort_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.ExecuteUbergraph_Turtle_Character_BP_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATurtle_Character_BP_Escort_C::ExecuteUbergraph_Turtle_Character_BP_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Turtle_Character_BP_Escort.Turtle_Character_BP_Escort_C.ExecuteUbergraph_Turtle_Character_BP_Escort");

	ATurtle_Character_BP_Escort_C_ExecuteUbergraph_Turtle_Character_BP_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
