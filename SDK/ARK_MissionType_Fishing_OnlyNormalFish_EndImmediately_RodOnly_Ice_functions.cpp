// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.Can Fish Class Be Caught
// (Exec, Event, NetResponse, Static, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class UClass**                 Class                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C::STATIC_Can_Fish_Class_Be_Caught(class UClass** Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.Can Fish Class Be Caught");

	AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_Can_Fish_Class_Be_Caught_Params params;
	params.Class = Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.GetPerPlayerWorldIndicators
// (NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterPlayerController** Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMissionWorldIndicator> WorldIndicators                (Parm, OutParm, ZeroConstructor)

void AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C::GetPerPlayerWorldIndicators(class AShooterPlayerController** Controller, class AShooterCharacter** Character, TArray<struct FMissionWorldIndicator>* WorldIndicators)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.GetPerPlayerWorldIndicators");

	AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_GetPerPlayerWorldIndicators_Params params;
	params.Controller = Controller;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldIndicators != nullptr)
		*WorldIndicators = params.WorldIndicators;
}


// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.OnThrottledServerTick
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C::OnThrottledServerTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.OnThrottledServerTick");

	AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_OnThrottledServerTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.UserConstructionScript
// ()

void AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.UserConstructionScript");

	AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.PhaseStart
// ()
// Parameters:
// struct FName*                  OldPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C::PhaseStart(struct FName* OldPhaseName, struct FName* NewPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.PhaseStart");

	AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_PhaseStart_Params params;
	params.OldPhaseName = OldPhaseName;
	params.NewPhaseName = NewPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C::ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice.MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C.ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice");

	AMissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_C_ExecuteUbergraph_MissionType_Fishing_OnlyNormalFish_EndImmediately_RodOnly_Ice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
