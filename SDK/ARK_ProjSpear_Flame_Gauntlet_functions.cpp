// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjSpear_Flame_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjSpear_Flame_Gauntlet.ProjSpear_Flame_Gauntlet_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjSpear_Flame_Gauntlet_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpear_Flame_Gauntlet.ProjSpear_Flame_Gauntlet_C.OnExplode");

	AProjSpear_Flame_Gauntlet_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjSpear_Flame_Gauntlet.ProjSpear_Flame_Gauntlet_C.UserConstructionScript
// ()

void AProjSpear_Flame_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpear_Flame_Gauntlet.ProjSpear_Flame_Gauntlet_C.UserConstructionScript");

	AProjSpear_Flame_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjSpear_Flame_Gauntlet.ProjSpear_Flame_Gauntlet_C.ExecuteUbergraph_ProjSpear_Flame_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjSpear_Flame_Gauntlet_C::ExecuteUbergraph_ProjSpear_Flame_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjSpear_Flame_Gauntlet.ProjSpear_Flame_Gauntlet_C.ExecuteUbergraph_ProjSpear_Flame_Gauntlet");

	AProjSpear_Flame_Gauntlet_C_ExecuteUbergraph_ProjSpear_Flame_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
