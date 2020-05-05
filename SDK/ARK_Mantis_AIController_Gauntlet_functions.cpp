// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Mantis_AIController_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mantis_AIController_Gauntlet.Mantis_AIController_Gauntlet_C.UserConstructionScript
// ()

void AMantis_AIController_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_AIController_Gauntlet.Mantis_AIController_Gauntlet_C.UserConstructionScript");

	AMantis_AIController_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_AIController_Gauntlet.Mantis_AIController_Gauntlet_C.ExecuteUbergraph_Mantis_AIController_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMantis_AIController_Gauntlet_C::ExecuteUbergraph_Mantis_AIController_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_AIController_Gauntlet.Mantis_AIController_Gauntlet_C.ExecuteUbergraph_Mantis_AIController_Gauntlet");

	AMantis_AIController_Gauntlet_C_ExecuteUbergraph_Mantis_AIController_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
