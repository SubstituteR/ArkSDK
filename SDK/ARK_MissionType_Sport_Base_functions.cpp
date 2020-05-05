// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Sport_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Sport_Base.MissionType_Sport_Base_C.BPOverrideMissionTimerColor
// ()
// Parameters:
// class AShooterPlayerController** ShooterContr                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            DefaultColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            CurrentColor                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FLinearColor            TimerOverrideColor             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMissionType_Sport_Base_C::BPOverrideMissionTimerColor(class AShooterPlayerController** ShooterContr, struct FLinearColor* DefaultColor, struct FLinearColor* CurrentColor, struct FLinearColor* TimerOverrideColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_Base.MissionType_Sport_Base_C.BPOverrideMissionTimerColor");

	AMissionType_Sport_Base_C_BPOverrideMissionTimerColor_Params params;
	params.ShooterContr = ShooterContr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultColor != nullptr)
		*DefaultColor = params.DefaultColor;
	if (CurrentColor != nullptr)
		*CurrentColor = params.CurrentColor;
	if (TimerOverrideColor != nullptr)
		*TimerOverrideColor = params.TimerOverrideColor;

	return params.ReturnValue;
}


// Function MissionType_Sport_Base.MissionType_Sport_Base_C.UserConstructionScript
// ()

void AMissionType_Sport_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_Base.MissionType_Sport_Base_C.UserConstructionScript");

	AMissionType_Sport_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Sport_Base.MissionType_Sport_Base_C.ExecuteUbergraph_MissionType_Sport_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Sport_Base_C::ExecuteUbergraph_MissionType_Sport_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Sport_Base.MissionType_Sport_Base_C.ExecuteUbergraph_MissionType_Sport_Base");

	AMissionType_Sport_Base_C_ExecuteUbergraph_MissionType_Sport_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
