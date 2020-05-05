// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalBuff_CorruptedAvatarPhasingFX_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff_CorruptedAvatarPhasingFX_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.BPSetupForInstigator");

	APrimalBuff_CorruptedAvatarPhasingFX_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff_CorruptedAvatarPhasingFX_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.BuffTickServer");

	APrimalBuff_CorruptedAvatarPhasingFX_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.UserConstructionScript
// ()

void APrimalBuff_CorruptedAvatarPhasingFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.UserConstructionScript");

	APrimalBuff_CorruptedAvatarPhasingFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.OnInstigatorDied
// ()
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff_CorruptedAvatarPhasingFX_C::OnInstigatorDied(class APrimalCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.OnInstigatorDied");

	APrimalBuff_CorruptedAvatarPhasingFX_C_OnInstigatorDied_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.ExecuteUbergraph_PrimalBuff_CorruptedAvatarPhasingFX
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APrimalBuff_CorruptedAvatarPhasingFX_C::ExecuteUbergraph_PrimalBuff_CorruptedAvatarPhasingFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C.ExecuteUbergraph_PrimalBuff_CorruptedAvatarPhasingFX");

	APrimalBuff_CorruptedAvatarPhasingFX_C_ExecuteUbergraph_PrimalBuff_CorruptedAvatarPhasingFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
