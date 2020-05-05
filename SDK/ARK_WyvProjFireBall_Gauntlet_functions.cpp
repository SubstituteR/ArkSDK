// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WyvProjFireBall_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvProjFireBall_Gauntlet.WyvProjFireBall_Gauntlet_C.UserConstructionScript
// ()

void AWyvProjFireBall_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjFireBall_Gauntlet.WyvProjFireBall_Gauntlet_C.UserConstructionScript");

	AWyvProjFireBall_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvProjFireBall_Gauntlet.WyvProjFireBall_Gauntlet_C.ExecuteUbergraph_WyvProjFireBall_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvProjFireBall_Gauntlet_C::ExecuteUbergraph_WyvProjFireBall_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvProjFireBall_Gauntlet.WyvProjFireBall_Gauntlet_C.ExecuteUbergraph_WyvProjFireBall_Gauntlet");

	AWyvProjFireBall_Gauntlet_C_ExecuteUbergraph_WyvProjFireBall_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
