// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LanternPug_Character_BP_Basketball_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ALanternPug_Character_BP_Basketball_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.BPAdjustDamage");

	ALanternPug_Character_BP_Basketball_C_BPAdjustDamage_Params params;
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


// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.BPCanMountOnCharacter
// ()
// Parameters:
// class APrimalCharacter**       Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALanternPug_Character_BP_Basketball_C::BPCanMountOnCharacter(class APrimalCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.BPCanMountOnCharacter");

	ALanternPug_Character_BP_Basketball_C_BPCanMountOnCharacter_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPug_Character_BP_Basketball_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.ReceiveTick");

	ALanternPug_Character_BP_Basketball_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.UserConstructionScript
// ()

void ALanternPug_Character_BP_Basketball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.UserConstructionScript");

	ALanternPug_Character_BP_Basketball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.ReceiveBeginPlay
// ()

void ALanternPug_Character_BP_Basketball_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.ReceiveBeginPlay");

	ALanternPug_Character_BP_Basketball_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.ExecuteUbergraph_LanternPug_Character_BP_Basketball
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanternPug_Character_BP_Basketball_C::ExecuteUbergraph_LanternPug_Character_BP_Basketball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C.ExecuteUbergraph_LanternPug_Character_BP_Basketball");

	ALanternPug_Character_BP_Basketball_C_ExecuteUbergraph_LanternPug_Character_BP_Basketball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
