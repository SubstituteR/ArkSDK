// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjArrow_Flame_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Flame_Gauntlet.ProjArrow_Flame_Gauntlet_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjArrow_Flame_Gauntlet_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Flame_Gauntlet.ProjArrow_Flame_Gauntlet_C.OnExplode");

	AProjArrow_Flame_Gauntlet_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjArrow_Flame_Gauntlet.ProjArrow_Flame_Gauntlet_C.UserConstructionScript
// ()

void AProjArrow_Flame_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Flame_Gauntlet.ProjArrow_Flame_Gauntlet_C.UserConstructionScript");

	AProjArrow_Flame_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Flame_Gauntlet.ProjArrow_Flame_Gauntlet_C.ExecuteUbergraph_ProjArrow_Flame_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Flame_Gauntlet_C::ExecuteUbergraph_ProjArrow_Flame_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Flame_Gauntlet.ProjArrow_Flame_Gauntlet_C.ExecuteUbergraph_ProjArrow_Flame_Gauntlet");

	AProjArrow_Flame_Gauntlet_C_ExecuteUbergraph_ProjArrow_Flame_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
