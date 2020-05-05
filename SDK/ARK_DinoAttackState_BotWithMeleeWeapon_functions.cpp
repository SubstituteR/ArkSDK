// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackState_BotWithMeleeWeapon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_BotWithMeleeWeapon.DinoAttackState_BotWithMeleeWeapon_C.BPGetSocketLocation
// ()
// Parameters:
// struct FName                   SocketName                     (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 SocketLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_BotWithMeleeWeapon_C::BPGetSocketLocation(struct FName* SocketName, struct FVector* SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_BotWithMeleeWeapon.DinoAttackState_BotWithMeleeWeapon_C.BPGetSocketLocation");

	UDinoAttackState_BotWithMeleeWeapon_C_BPGetSocketLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketName != nullptr)
		*SocketName = params.SocketName;
	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
}


// Function DinoAttackState_BotWithMeleeWeapon.DinoAttackState_BotWithMeleeWeapon_C.ExecuteUbergraph_DinoAttackState_BotWithMeleeWeapon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_BotWithMeleeWeapon_C::ExecuteUbergraph_DinoAttackState_BotWithMeleeWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_BotWithMeleeWeapon.DinoAttackState_BotWithMeleeWeapon_C.ExecuteUbergraph_DinoAttackState_BotWithMeleeWeapon");

	UDinoAttackState_BotWithMeleeWeapon_C_ExecuteUbergraph_DinoAttackState_BotWithMeleeWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
