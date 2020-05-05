// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dodo_Character_BP_Basketball_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADodo_Character_BP_Basketball_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.BPAdjustDamage");

	ADodo_Character_BP_Basketball_C_BPAdjustDamage_Params params;
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


// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.BPCanMountOnCharacter
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADodo_Character_BP_Basketball_C::BPCanMountOnCharacter(class APrimalCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.BPCanMountOnCharacter");

	ADodo_Character_BP_Basketball_C_BPCanMountOnCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADodo_Character_BP_Basketball_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.ReceiveTick");

	ADodo_Character_BP_Basketball_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.UserConstructionScript
// ()

void ADodo_Character_BP_Basketball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.UserConstructionScript");

	ADodo_Character_BP_Basketball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.ReceiveBeginPlay
// ()

void ADodo_Character_BP_Basketball_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.ReceiveBeginPlay");

	ADodo_Character_BP_Basketball_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.ExecuteUbergraph_Dodo_Character_BP_Basketball
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADodo_Character_BP_Basketball_C::ExecuteUbergraph_Dodo_Character_BP_Basketball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C.ExecuteUbergraph_Dodo_Character_BP_Basketball");

	ADodo_Character_BP_Basketball_C_ExecuteUbergraph_Dodo_Character_BP_Basketball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
