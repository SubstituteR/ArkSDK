// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C.OnMissionPhaseStarted
// (NetRequest, Exec, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  OldPhase                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhase                       (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C::OnMissionPhaseStarted(struct FName* OldPhase, struct FName* NewPhase)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C.OnMissionPhaseStarted");

	AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C_OnMissionPhaseStarted_Params params;
	params.OldPhase = OldPhase;
	params.NewPhase = NewPhase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C.UserConstructionScript
// ()

void AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C.UserConstructionScript");

	AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C.ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C::ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C.ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly");

	AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_C_ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
