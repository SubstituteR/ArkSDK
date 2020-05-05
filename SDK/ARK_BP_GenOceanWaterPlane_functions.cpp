// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BP_GenOceanWaterPlane_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.SetFoamIntensity
// ()
// Parameters:
// float                          FoamIntensity                  (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GenOceanWaterPlane_C::SetFoamIntensity(float FoamIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.SetFoamIntensity");

	ABP_GenOceanWaterPlane_C_SetFoamIntensity_Params params;
	params.FoamIntensity = FoamIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.UpdateSun
// ()

void ABP_GenOceanWaterPlane_C::UpdateSun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.UpdateSun");

	ABP_GenOceanWaterPlane_C_UpdateSun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.UserConstructionScript
// ()

void ABP_GenOceanWaterPlane_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.UserConstructionScript");

	ABP_GenOceanWaterPlane_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature
// ()

void ABP_GenOceanWaterPlane_C::BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature");

	ABP_GenOceanWaterPlane_C_BndEvt__DayCycleManager_K2Node_ComponentBoundEvent_12_ActorMatineeUpdated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.ReceiveBeginPlay
// ()

void ABP_GenOceanWaterPlane_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.ReceiveBeginPlay");

	ABP_GenOceanWaterPlane_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.AutoUpdateValues
// ()

void ABP_GenOceanWaterPlane_C::AutoUpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.AutoUpdateValues");

	ABP_GenOceanWaterPlane_C_AutoUpdateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.ExecuteUbergraph_BP_GenOceanWaterPlane
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_GenOceanWaterPlane_C::ExecuteUbergraph_BP_GenOceanWaterPlane(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GenOceanWaterPlane.BP_GenOceanWaterPlane_C.ExecuteUbergraph_BP_GenOceanWaterPlane");

	ABP_GenOceanWaterPlane_C_ExecuteUbergraph_BP_GenOceanWaterPlane_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
