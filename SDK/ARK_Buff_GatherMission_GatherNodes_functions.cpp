// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_GatherMission_GatherNodes_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.GetClosestTargetLocation
// ()
// Parameters:
// struct FVector                 Closest                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_GatherMission_GatherNodes_C::GetClosestTargetLocation(struct FVector* Closest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.GetClosestTargetLocation");

	ABuff_GatherMission_GatherNodes_C_GetClosestTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Closest != nullptr)
		*Closest = params.Closest;
}


// Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_GatherMission_GatherNodes_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.BPGetHUDElements");

	ABuff_GatherMission_GatherNodes_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.UserConstructionScript
// ()

void ABuff_GatherMission_GatherNodes_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.UserConstructionScript");

	ABuff_GatherMission_GatherNodes_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GatherMission_GatherNodes_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.BuffTickClient");

	ABuff_GatherMission_GatherNodes_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.ExecuteUbergraph_Buff_GatherMission_GatherNodes
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_GatherMission_GatherNodes_C::ExecuteUbergraph_Buff_GatherMission_GatherNodes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_GatherMission_GatherNodes.Buff_GatherMission_GatherNodes_C.ExecuteUbergraph_Buff_GatherMission_GatherNodes");

	ABuff_GatherMission_GatherNodes_C_ExecuteUbergraph_Buff_GatherMission_GatherNodes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
