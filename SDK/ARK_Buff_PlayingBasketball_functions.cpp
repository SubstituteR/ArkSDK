// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PlayingBasketball_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.is on court
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PlayingBasketball_C::is_on_court()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.is on court");

	ABuff_PlayingBasketball_C_is_on_court_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BPAdjustStatusValueModification
// ()
// Parameters:
// class UPrimalCharacterStatusComponent** ForComponent                   (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalCharacterStatusValue>* ValueType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InAmount                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bManualModification            (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_PlayingBasketball_C::BPAdjustStatusValueModification(class UPrimalCharacterStatusComponent** ForComponent, TEnumAsByte<EPrimalCharacterStatusValue>* ValueType, float* InAmount, class UClass** DamageTypeClass, bool* bManualModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BPAdjustStatusValueModification");

	ABuff_PlayingBasketball_C_BPAdjustStatusValueModification_Params params;
	params.ForComponent = ForComponent;
	params.ValueType = ValueType;
	params.InAmount = InAmount;
	params.DamageTypeClass = DamageTypeClass;
	params.bManualModification = bManualModification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Ball Pickup Restriction
// ()

void ABuff_PlayingBasketball_C::Ball_Pickup_Restriction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Ball Pickup Restriction");

	ABuff_PlayingBasketball_C_Ball_Pickup_Restriction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.setup if there's color
// ()

void ABuff_PlayingBasketball_C::setup_if_there_s_color()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.setup if there's color");

	ABuff_PlayingBasketball_C_setup_if_there_s_color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Ball Drop restriction
// ()

void ABuff_PlayingBasketball_C::Ball_Drop_restriction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Ball Drop restriction");

	ABuff_PlayingBasketball_C_Ball_Drop_restriction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Has Dropped Or Tossed Ball
// ()

void ABuff_PlayingBasketball_C::Has_Dropped_Or_Tossed_Ball()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Has Dropped Or Tossed Ball");

	ABuff_PlayingBasketball_C_Has_Dropped_Or_Tossed_Ball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Has Picked Up Ball
// ()

void ABuff_PlayingBasketball_C::Has_Picked_Up_Ball()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Has Picked Up Ball");

	ABuff_PlayingBasketball_C_Has_Picked_Up_Ball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PlayingBasketball_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BPServerHandleNetExecCommand");

	ABuff_PlayingBasketball_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayingBasketball_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BuffTickClient");

	ABuff_PlayingBasketball_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.ReceiveBeginPlay
// ()

void ABuff_PlayingBasketball_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.ReceiveBeginPlay");

	ABuff_PlayingBasketball_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_PlayingBasketball_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BuffAdjustDamage");

	ABuff_PlayingBasketball_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BPPreventAddingOtherBuff
// ()
// Parameters:
// class UClass**                 anotherBuffClass               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_PlayingBasketball_C::BPPreventAddingOtherBuff(class UClass** anotherBuffClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.BPPreventAddingOtherBuff");

	ABuff_PlayingBasketball_C_BPPreventAddingOtherBuff_Params params;
	params.anotherBuffClass = anotherBuffClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.UserConstructionScript
// ()

void ABuff_PlayingBasketball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.UserConstructionScript");

	ABuff_PlayingBasketball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Set Team Color
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayingBasketball_C::Set_Team_Color(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Set Team Color");

	ABuff_PlayingBasketball_C_Set_Team_Color_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Set Team Color Multicast
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayingBasketball_C::Set_Team_Color_Multicast(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Set Team Color Multicast");

	ABuff_PlayingBasketball_C_Set_Team_Color_Multicast_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Deactivate Glow
// ()

void ABuff_PlayingBasketball_C::Deactivate_Glow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Deactivate Glow");

	ABuff_PlayingBasketball_C_Deactivate_Glow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Deactivate Glow Multicast
// ()

void ABuff_PlayingBasketball_C::Deactivate_Glow_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.Deactivate Glow Multicast");

	ABuff_PlayingBasketball_C_Deactivate_Glow_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.ExecuteUbergraph_Buff_PlayingBasketball
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayingBasketball_C::ExecuteUbergraph_Buff_PlayingBasketball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayingBasketball.Buff_PlayingBasketball_C.ExecuteUbergraph_Buff_PlayingBasketball");

	ABuff_PlayingBasketball_C_ExecuteUbergraph_Buff_PlayingBasketball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
