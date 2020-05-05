// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TekHoverSkiff_Character_BP_Race_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_Race_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.BPNotifySetRider");

	ATekHoverSkiff_Character_BP_Race_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_Race_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.BPPreventRiding");

	ATekHoverSkiff_Character_BP_Race_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.BP_CanFly
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ATekHoverSkiff_Character_BP_Race_C::BP_CanFly()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.BP_CanFly");

	ATekHoverSkiff_Character_BP_Race_C_BP_CanFly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.UserConstructionScript
// ()

void ATekHoverSkiff_Character_BP_Race_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.UserConstructionScript");

	ATekHoverSkiff_Character_BP_Race_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.ExecuteUbergraph_TekHoverSkiff_Character_BP_Race
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekHoverSkiff_Character_BP_Race_C::ExecuteUbergraph_TekHoverSkiff_Character_BP_Race(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekHoverSkiff_Character_BP_Race.TekHoverSkiff_Character_BP_Race_C.ExecuteUbergraph_TekHoverSkiff_Character_BP_Race");

	ATekHoverSkiff_Character_BP_Race_C_ExecuteUbergraph_TekHoverSkiff_Character_BP_Race_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
