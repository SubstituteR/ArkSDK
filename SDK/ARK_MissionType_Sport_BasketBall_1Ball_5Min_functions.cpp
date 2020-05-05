// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Sport_BasketBall_1Ball_5Min_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Sport_BasketBall_1Ball_5Min.MissionType_Sport_BasketBall_1Ball_5Min_C.UserConstructionScript
// ()

void AMissionType_Sport_BasketBall_1Ball_5Min_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall_1Ball_5Min.MissionType_Sport_BasketBall_1Ball_5Min_C.UserConstructionScript");

	AMissionType_Sport_BasketBall_1Ball_5Min_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall_1Ball_5Min.MissionType_Sport_BasketBall_1Ball_5Min_C.ExecuteUbergraph_MissionType_Sport_BasketBall_1Ball_5Min
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_1Ball_5Min_C::ExecuteUbergraph_MissionType_Sport_BasketBall_1Ball_5Min(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall_1Ball_5Min.MissionType_Sport_BasketBall_1Ball_5Min_C.ExecuteUbergraph_MissionType_Sport_BasketBall_1Ball_5Min");

	AMissionType_Sport_BasketBall_1Ball_5Min_C_ExecuteUbergraph_MissionType_Sport_BasketBall_1Ball_5Min_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
