// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Service_MissionFollowPath_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_MissionFollowPath.Service_MissionFollowPath_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UService_MissionFollowPath_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_MissionFollowPath.Service_MissionFollowPath_C.ReceiveTick");

	UService_MissionFollowPath_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_MissionFollowPath.Service_MissionFollowPath_C.ExecuteUbergraph_Service_MissionFollowPath
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_MissionFollowPath_C::ExecuteUbergraph_Service_MissionFollowPath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_MissionFollowPath.Service_MissionFollowPath_C.ExecuteUbergraph_Service_MissionFollowPath");

	UService_MissionFollowPath_C_ExecuteUbergraph_Service_MissionFollowPath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
