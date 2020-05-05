// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRex_Character_BP_Malfunctioned_Adolescent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.BlueprintAdjustOutputDamage
// (NetReliable, NetRequest, NetResponse, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABionicRex_Character_BP_Malfunctioned_Adolescent_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.BlueprintAdjustOutputDamage");

	ABionicRex_Character_BP_Malfunctioned_Adolescent_C_BlueprintAdjustOutputDamage_Params params;
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


// Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABionicRex_Character_BP_Malfunctioned_Adolescent_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.BPAdjustDamage");

	ABionicRex_Character_BP_Malfunctioned_Adolescent_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.UserConstructionScript
// ()

void ABionicRex_Character_BP_Malfunctioned_Adolescent_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.UserConstructionScript");

	ABionicRex_Character_BP_Malfunctioned_Adolescent_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.ReceiveBeginPlay
// ()

void ABionicRex_Character_BP_Malfunctioned_Adolescent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.ReceiveBeginPlay");

	ABionicRex_Character_BP_Malfunctioned_Adolescent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.ExecuteUbergraph_BionicRex_Character_BP_Malfunctioned_Adolescent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicRex_Character_BP_Malfunctioned_Adolescent_C::ExecuteUbergraph_BionicRex_Character_BP_Malfunctioned_Adolescent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRex_Character_BP_Malfunctioned_Adolescent.BionicRex_Character_BP_Malfunctioned_Adolescent_C.ExecuteUbergraph_BionicRex_Character_BP_Malfunctioned_Adolescent");

	ABionicRex_Character_BP_Malfunctioned_Adolescent_C_ExecuteUbergraph_BionicRex_Character_BP_Malfunctioned_Adolescent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
