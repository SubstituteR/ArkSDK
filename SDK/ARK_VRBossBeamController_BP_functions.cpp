// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBossBeamController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VRBossBeamController_BP.VRBossBeamController_BP_C.FireBeams
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVRBossBeamController_BP_C::FireBeams()
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBossBeamController_BP.VRBossBeamController_BP_C.FireBeams");

	UVRBossBeamController_BP_C_FireBeams_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VRBossBeamController_BP.VRBossBeamController_BP_C.Get Float Value For Boss State
// ()
// Parameters:
// TArray<float>                  Values                         (Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Default                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            BossState                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVRBossBeamController_BP_C::Get_Float_Value_For_Boss_State(float Default, int BossState, TArray<float>* Values, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBossBeamController_BP.VRBossBeamController_BP_C.Get Float Value For Boss State");

	UVRBossBeamController_BP_C_Get_Float_Value_For_Boss_State_Params params;
	params.Default = Default;
	params.BossState = BossState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Values != nullptr)
		*Values = params.Values;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function VRBossBeamController_BP.VRBossBeamController_BP_C.Set Current Beam Settings
// ()
// Parameters:
// class UBeamWeaponComponent*    BeamComp                       (Parm, ZeroConstructor, IsPlainOldData)

void UVRBossBeamController_BP_C::Set_Current_Beam_Settings(class UBeamWeaponComponent* BeamComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBossBeamController_BP.VRBossBeamController_BP_C.Set Current Beam Settings");

	UVRBossBeamController_BP_C_Set_Current_Beam_Settings_Params params;
	params.BeamComp = BeamComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VRBossBeamController_BP.VRBossBeamController_BP_C.ExecuteUbergraph_VRBossBeamController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UVRBossBeamController_BP_C::ExecuteUbergraph_VRBossBeamController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VRBossBeamController_BP.VRBossBeamController_BP_C.ExecuteUbergraph_VRBossBeamController_BP");

	UVRBossBeamController_BP_C_ExecuteUbergraph_VRBossBeamController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
