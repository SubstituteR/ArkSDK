// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_GravityWell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_GravityWell.Buff_GravityWell_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GravityWell_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GravityWell.Buff_GravityWell_C.BuffTickServer");

	ABuff_GravityWell_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GravityWell.Buff_GravityWell_C.SetupGravityForce
// ()
// Parameters:
// struct FVector                 GravityCenter                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          StrengthMultiplier             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GravityWell_C::SetupGravityForce(const struct FVector& GravityCenter, float StrengthMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GravityWell.Buff_GravityWell_C.SetupGravityForce");

	ABuff_GravityWell_C_SetupGravityForce_Params params;
	params.GravityCenter = GravityCenter;
	params.StrengthMultiplier = StrengthMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GravityWell.Buff_GravityWell_C.UserConstructionScript
// ()

void ABuff_GravityWell_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GravityWell.Buff_GravityWell_C.UserConstructionScript");

	ABuff_GravityWell_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GravityWell.Buff_GravityWell_C.ExecuteUbergraph_Buff_GravityWell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GravityWell_C::ExecuteUbergraph_Buff_GravityWell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GravityWell.Buff_GravityWell_C.ExecuteUbergraph_Buff_GravityWell");

	ABuff_GravityWell_C_ExecuteUbergraph_Buff_GravityWell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
