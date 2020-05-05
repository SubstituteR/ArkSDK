// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjWyvPoisonBall_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjWyvPoisonBall_Gauntlet.ProjWyvPoisonBall_Gauntlet_C.UserConstructionScript
// ()

void AProjWyvPoisonBall_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWyvPoisonBall_Gauntlet.ProjWyvPoisonBall_Gauntlet_C.UserConstructionScript");

	AProjWyvPoisonBall_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjWyvPoisonBall_Gauntlet.ProjWyvPoisonBall_Gauntlet_C.ExecuteUbergraph_ProjWyvPoisonBall_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjWyvPoisonBall_Gauntlet_C::ExecuteUbergraph_ProjWyvPoisonBall_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWyvPoisonBall_Gauntlet.ProjWyvPoisonBall_Gauntlet_C.ExecuteUbergraph_ProjWyvPoisonBall_Gauntlet");

	AProjWyvPoisonBall_Gauntlet_C_ExecuteUbergraph_ProjWyvPoisonBall_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
