// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Trike_AIController_BP_Aggressive_Gauntlet_Lunar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trike_AIController_BP_Aggressive_Gauntlet_Lunar.Trike_AIController_BP_Aggressive_Gauntlet_Lunar_C.UserConstructionScript
// ()

void ATrike_AIController_BP_Aggressive_Gauntlet_Lunar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_AIController_BP_Aggressive_Gauntlet_Lunar.Trike_AIController_BP_Aggressive_Gauntlet_Lunar_C.UserConstructionScript");

	ATrike_AIController_BP_Aggressive_Gauntlet_Lunar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trike_AIController_BP_Aggressive_Gauntlet_Lunar.Trike_AIController_BP_Aggressive_Gauntlet_Lunar_C.ExecuteUbergraph_Trike_AIController_BP_Aggressive_Gauntlet_Lunar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrike_AIController_BP_Aggressive_Gauntlet_Lunar_C::ExecuteUbergraph_Trike_AIController_BP_Aggressive_Gauntlet_Lunar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trike_AIController_BP_Aggressive_Gauntlet_Lunar.Trike_AIController_BP_Aggressive_Gauntlet_Lunar_C.ExecuteUbergraph_Trike_AIController_BP_Aggressive_Gauntlet_Lunar");

	ATrike_AIController_BP_Aggressive_Gauntlet_Lunar_C_ExecuteUbergraph_Trike_AIController_BP_Aggressive_Gauntlet_Lunar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
