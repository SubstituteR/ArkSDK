// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Carno_AIController_BP_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Carno_AIController_BP_Gauntlet.Carno_AIController_BP_Gauntlet_C.UserConstructionScript
// ()

void ACarno_AIController_BP_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_AIController_BP_Gauntlet.Carno_AIController_BP_Gauntlet_C.UserConstructionScript");

	ACarno_AIController_BP_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Carno_AIController_BP_Gauntlet.Carno_AIController_BP_Gauntlet_C.ExecuteUbergraph_Carno_AIController_BP_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACarno_AIController_BP_Gauntlet_C::ExecuteUbergraph_Carno_AIController_BP_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Carno_AIController_BP_Gauntlet.Carno_AIController_BP_Gauntlet_C.ExecuteUbergraph_Carno_AIController_BP_Gauntlet");

	ACarno_AIController_BP_Gauntlet_C_ExecuteUbergraph_Carno_AIController_BP_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
