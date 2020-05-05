// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjArrow_Compound_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Compound_Gauntlet.ProjArrow_Compound_Gauntlet_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjArrow_Compound_Gauntlet_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Compound_Gauntlet.ProjArrow_Compound_Gauntlet_C.OnExplode");

	AProjArrow_Compound_Gauntlet_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjArrow_Compound_Gauntlet.ProjArrow_Compound_Gauntlet_C.UserConstructionScript
// ()

void AProjArrow_Compound_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Compound_Gauntlet.ProjArrow_Compound_Gauntlet_C.UserConstructionScript");

	AProjArrow_Compound_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Compound_Gauntlet.ProjArrow_Compound_Gauntlet_C.ExecuteUbergraph_ProjArrow_Compound_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Compound_Gauntlet_C::ExecuteUbergraph_ProjArrow_Compound_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Compound_Gauntlet.ProjArrow_Compound_Gauntlet_C.ExecuteUbergraph_ProjArrow_Compound_Gauntlet");

	AProjArrow_Compound_Gauntlet_C_ExecuteUbergraph_ProjArrow_Compound_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
