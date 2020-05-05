// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjCherufe_Fragment_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjCherufe_Fragment_Gauntlet.ProjCherufe_Fragment_Gauntlet_C.UserConstructionScript
// ()

void AProjCherufe_Fragment_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_Fragment_Gauntlet.ProjCherufe_Fragment_Gauntlet_C.UserConstructionScript");

	AProjCherufe_Fragment_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjCherufe_Fragment_Gauntlet.ProjCherufe_Fragment_Gauntlet_C.ExecuteUbergraph_ProjCherufe_Fragment_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjCherufe_Fragment_Gauntlet_C::ExecuteUbergraph_ProjCherufe_Fragment_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjCherufe_Fragment_Gauntlet.ProjCherufe_Fragment_Gauntlet_C.ExecuteUbergraph_ProjCherufe_Fragment_Gauntlet");

	AProjCherufe_Fragment_Gauntlet_C_ExecuteUbergraph_ProjCherufe_Fragment_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
