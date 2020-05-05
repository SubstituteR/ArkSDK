// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_GauntletDamageMultiplier_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_GauntletDamageMultiplier.Buff_GauntletDamageMultiplier_C.BPSetupForInstigator
// (NetReliable, NetRequest, NetResponse, NetMulticast, Public, HasOutParms, NetClient, BlueprintEvent, NetValidate)
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GauntletDamageMultiplier_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletDamageMultiplier.Buff_GauntletDamageMultiplier_C.BPSetupForInstigator");

	ABuff_GauntletDamageMultiplier_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletDamageMultiplier.Buff_GauntletDamageMultiplier_C.ThrottledTick
// ()

void ABuff_GauntletDamageMultiplier_C::ThrottledTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletDamageMultiplier.Buff_GauntletDamageMultiplier_C.ThrottledTick");

	ABuff_GauntletDamageMultiplier_C_ThrottledTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletDamageMultiplier.Buff_GauntletDamageMultiplier_C.UserConstructionScript
// ()

void ABuff_GauntletDamageMultiplier_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletDamageMultiplier.Buff_GauntletDamageMultiplier_C.UserConstructionScript");

	ABuff_GauntletDamageMultiplier_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GauntletDamageMultiplier.Buff_GauntletDamageMultiplier_C.ExecuteUbergraph_Buff_GauntletDamageMultiplier
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GauntletDamageMultiplier_C::ExecuteUbergraph_Buff_GauntletDamageMultiplier(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GauntletDamageMultiplier.Buff_GauntletDamageMultiplier_C.ExecuteUbergraph_Buff_GauntletDamageMultiplier");

	ABuff_GauntletDamageMultiplier_C_ExecuteUbergraph_Buff_GauntletDamageMultiplier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
