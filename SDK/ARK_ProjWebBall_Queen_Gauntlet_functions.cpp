// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjWebBall_Queen_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjWebBall_Queen_Gauntlet.ProjWebBall_Queen_Gauntlet_C.UserConstructionScript
// ()

void AProjWebBall_Queen_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWebBall_Queen_Gauntlet.ProjWebBall_Queen_Gauntlet_C.UserConstructionScript");

	AProjWebBall_Queen_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjWebBall_Queen_Gauntlet.ProjWebBall_Queen_Gauntlet_C.ExecuteUbergraph_ProjWebBall_Queen_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjWebBall_Queen_Gauntlet_C::ExecuteUbergraph_ProjWebBall_Queen_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjWebBall_Queen_Gauntlet.ProjWebBall_Queen_Gauntlet_C.ExecuteUbergraph_ProjWebBall_Queen_Gauntlet");

	AProjWebBall_Queen_Gauntlet_C_ExecuteUbergraph_ProjWebBall_Queen_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
