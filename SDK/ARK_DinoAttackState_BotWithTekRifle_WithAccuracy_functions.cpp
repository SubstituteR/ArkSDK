// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackState_BotWithTekRifle_WithAccuracy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_BotWithTekRifle_WithAccuracy.DinoAttackState_BotWithTekRifle_WithAccuracy_C.BPGetSocketLocation
// (NetRequest, NetResponse, MulticastDelegate, NetServer, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UDinoAttackState_BotWithTekRifle_WithAccuracy_C::BPGetSocketLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_BotWithTekRifle_WithAccuracy.DinoAttackState_BotWithTekRifle_WithAccuracy_C.BPGetSocketLocation");

	UDinoAttackState_BotWithTekRifle_WithAccuracy_C_BPGetSocketLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DinoAttackState_BotWithTekRifle_WithAccuracy.DinoAttackState_BotWithTekRifle_WithAccuracy_C.ExecuteUbergraph_DinoAttackState_BotWithTekRifle_WithAccuracy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_BotWithTekRifle_WithAccuracy_C::ExecuteUbergraph_DinoAttackState_BotWithTekRifle_WithAccuracy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_BotWithTekRifle_WithAccuracy.DinoAttackState_BotWithTekRifle_WithAccuracy_C.ExecuteUbergraph_DinoAttackState_BotWithTekRifle_WithAccuracy");

	UDinoAttackState_BotWithTekRifle_WithAccuracy_C_ExecuteUbergraph_DinoAttackState_BotWithTekRifle_WithAccuracy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
