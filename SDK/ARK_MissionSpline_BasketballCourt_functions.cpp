// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionSpline_BasketballCourt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionSpline_BasketballCourt.MissionSpline_BasketballCourt_C.UserConstructionScript
// (NetReliable, NetMulticast, MulticastDelegate, Public, Private, Delegate, BlueprintCallable, BlueprintEvent, NetValidate)

void AMissionSpline_BasketballCourt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_BasketballCourt.MissionSpline_BasketballCourt_C.UserConstructionScript");

	AMissionSpline_BasketballCourt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionSpline_BasketballCourt.MissionSpline_BasketballCourt_C.ExecuteUbergraph_MissionSpline_BasketballCourt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionSpline_BasketballCourt_C::ExecuteUbergraph_MissionSpline_BasketballCourt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionSpline_BasketballCourt.MissionSpline_BasketballCourt_C.ExecuteUbergraph_MissionSpline_BasketballCourt");

	AMissionSpline_BasketballCourt_C_ExecuteUbergraph_MissionSpline_BasketballCourt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
