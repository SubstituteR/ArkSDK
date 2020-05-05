// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Kapro_Character_BP_Race_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Kapro_Character_BP_Race.Kapro_Character_BP_Race_C.BlueprintAdjustOutputDamage
// (NetReliable, Exec, Event, Static, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AKapro_Character_BP_Race_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kapro_Character_BP_Race.Kapro_Character_BP_Race_C.BlueprintAdjustOutputDamage");

	AKapro_Character_BP_Race_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Kapro_Character_BP_Race.Kapro_Character_BP_Race_C.UserConstructionScript
// ()

void AKapro_Character_BP_Race_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Kapro_Character_BP_Race.Kapro_Character_BP_Race_C.UserConstructionScript");

	AKapro_Character_BP_Race_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Kapro_Character_BP_Race.Kapro_Character_BP_Race_C.ExecuteUbergraph_Kapro_Character_BP_Race
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AKapro_Character_BP_Race_C::ExecuteUbergraph_Kapro_Character_BP_Race(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Kapro_Character_BP_Race.Kapro_Character_BP_Race_C.ExecuteUbergraph_Kapro_Character_BP_Race");

	AKapro_Character_BP_Race_C_ExecuteUbergraph_Kapro_Character_BP_Race_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
