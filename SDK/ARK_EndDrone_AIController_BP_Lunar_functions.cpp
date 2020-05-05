// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EndDrone_AIController_BP_Lunar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndDrone_AIController_BP_Lunar.EndDrone_AIController_BP_Lunar_C.UserConstructionScript
// ()

void AEndDrone_AIController_BP_Lunar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_AIController_BP_Lunar.EndDrone_AIController_BP_Lunar_C.UserConstructionScript");

	AEndDrone_AIController_BP_Lunar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_AIController_BP_Lunar.EndDrone_AIController_BP_Lunar_C.ExecuteUbergraph_EndDrone_AIController_BP_Lunar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndDrone_AIController_BP_Lunar_C::ExecuteUbergraph_EndDrone_AIController_BP_Lunar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_AIController_BP_Lunar.EndDrone_AIController_BP_Lunar_C.ExecuteUbergraph_EndDrone_AIController_BP_Lunar");

	AEndDrone_AIController_BP_Lunar_C_ExecuteUbergraph_EndDrone_AIController_BP_Lunar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
