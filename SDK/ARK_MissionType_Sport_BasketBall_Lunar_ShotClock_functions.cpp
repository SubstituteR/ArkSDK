// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Sport_BasketBall_Lunar_ShotClock_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Sport_BasketBall_Lunar_ShotClock.MissionType_Sport_BasketBall_Lunar_ShotClock_C.UserConstructionScript
// ()

void AMissionType_Sport_BasketBall_Lunar_ShotClock_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall_Lunar_ShotClock.MissionType_Sport_BasketBall_Lunar_ShotClock_C.UserConstructionScript");

	AMissionType_Sport_BasketBall_Lunar_ShotClock_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_BasketBall_Lunar_ShotClock.MissionType_Sport_BasketBall_Lunar_ShotClock_C.ExecuteUbergraph_MissionType_Sport_BasketBall_Lunar_ShotClock
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_BasketBall_Lunar_ShotClock_C::ExecuteUbergraph_MissionType_Sport_BasketBall_Lunar_ShotClock(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_BasketBall_Lunar_ShotClock.MissionType_Sport_BasketBall_Lunar_ShotClock_C.ExecuteUbergraph_MissionType_Sport_BasketBall_Lunar_ShotClock");

	AMissionType_Sport_BasketBall_Lunar_ShotClock_C_ExecuteUbergraph_MissionType_Sport_BasketBall_Lunar_ShotClock_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
