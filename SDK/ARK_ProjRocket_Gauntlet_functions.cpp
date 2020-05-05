// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjRocket_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjRocket_Gauntlet.ProjRocket_Gauntlet_C.UserConstructionScript
// ()

void AProjRocket_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocket_Gauntlet.ProjRocket_Gauntlet_C.UserConstructionScript");

	AProjRocket_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocket_Gauntlet.ProjRocket_Gauntlet_C.ExecuteUbergraph_ProjRocket_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjRocket_Gauntlet_C::ExecuteUbergraph_ProjRocket_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocket_Gauntlet.ProjRocket_Gauntlet_C.ExecuteUbergraph_ProjRocket_Gauntlet");

	AProjRocket_Gauntlet_C_ExecuteUbergraph_ProjRocket_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
