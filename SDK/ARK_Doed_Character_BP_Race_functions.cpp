// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Doed_Character_BP_Race_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.BPTimerServer
// ()

void ADoed_Character_BP_Race_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.BPTimerServer");

	ADoed_Character_BP_Race_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.BPChargingModifyInputAcceleration
// ()
// Parameters:
// struct FVector*                inputAcceleration              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ADoed_Character_BP_Race_C::BPChargingModifyInputAcceleration(struct FVector* inputAcceleration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.BPChargingModifyInputAcceleration");

	ADoed_Character_BP_Race_C_BPChargingModifyInputAcceleration_Params params;
	params.inputAcceleration = inputAcceleration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.UserConstructionScript
// ()

void ADoed_Character_BP_Race_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.UserConstructionScript");

	ADoed_Character_BP_Race_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.ExecuteUbergraph_Doed_Character_BP_Race
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADoed_Character_BP_Race_C::ExecuteUbergraph_Doed_Character_BP_Race(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Doed_Character_BP_Race.Doed_Character_BP_Race_C.ExecuteUbergraph_Doed_Character_BP_Race");

	ADoed_Character_BP_Race_C_ExecuteUbergraph_Doed_Character_BP_Race_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
