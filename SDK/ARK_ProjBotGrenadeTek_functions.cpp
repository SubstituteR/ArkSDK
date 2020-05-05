// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjBotGrenadeTek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.BPAttachedRootComponent
// ()

void AProjBotGrenadeTek_C::BPAttachedRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.BPAttachedRootComponent");

	AProjBotGrenadeTek_C_BPAttachedRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.UserConstructionScript
// ()

void AProjBotGrenadeTek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.UserConstructionScript");

	AProjBotGrenadeTek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjBotGrenadeTek_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.OnExplode");

	AProjBotGrenadeTek_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.ExecuteUbergraph_ProjBotGrenadeTek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjBotGrenadeTek_C::ExecuteUbergraph_ProjBotGrenadeTek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBotGrenadeTek.ProjBotGrenadeTek_C.ExecuteUbergraph_ProjBotGrenadeTek");

	AProjBotGrenadeTek_C_ExecuteUbergraph_ProjBotGrenadeTek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
