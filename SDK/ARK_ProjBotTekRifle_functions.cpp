// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjBotTekRifle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjBotTekRifle.ProjBotTekRifle_C.BPIgnoreRadialDamageVictim
// ()
// Parameters:
// class AActor**                 Victim                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AProjBotTekRifle_C::BPIgnoreRadialDamageVictim(class AActor** Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBotTekRifle.ProjBotTekRifle_C.BPIgnoreRadialDamageVictim");

	AProjBotTekRifle_C_BPIgnoreRadialDamageVictim_Params params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ProjBotTekRifle.ProjBotTekRifle_C.UserConstructionScript
// ()

void AProjBotTekRifle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBotTekRifle.ProjBotTekRifle_C.UserConstructionScript");

	AProjBotTekRifle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBotTekRifle.ProjBotTekRifle_C.ReceiveBeginPlay
// ()

void AProjBotTekRifle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBotTekRifle.ProjBotTekRifle_C.ReceiveBeginPlay");

	AProjBotTekRifle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBotTekRifle.ProjBotTekRifle_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjBotTekRifle_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBotTekRifle.ProjBotTekRifle_C.OnExplode");

	AProjBotTekRifle_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjBotTekRifle.ProjBotTekRifle_C.ExecuteUbergraph_ProjBotTekRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjBotTekRifle_C::ExecuteUbergraph_ProjBotTekRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBotTekRifle.ProjBotTekRifle_C.ExecuteUbergraph_ProjBotTekRifle");

	AProjBotTekRifle_C_ExecuteUbergraph_ProjBotTekRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
