// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ChupaCabra_AIController_BP_InitialBuryOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ChupaCabra_AIController_BP_InitialBuryOnly.ChupaCabra_AIController_BP_InitialBuryOnly_C.IsActorUnderCharge
// ()
// Parameters:
// class AActor**                 NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           isUnderCharge                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_AIController_BP_InitialBuryOnly_C::IsActorUnderCharge(class AActor** NewTarget, bool* isUnderCharge)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_AIController_BP_InitialBuryOnly.ChupaCabra_AIController_BP_InitialBuryOnly_C.IsActorUnderCharge");

	AChupaCabra_AIController_BP_InitialBuryOnly_C_IsActorUnderCharge_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (isUnderCharge != nullptr)
		*isUnderCharge = params.isUnderCharge;
}


// Function ChupaCabra_AIController_BP_InitialBuryOnly.ChupaCabra_AIController_BP_InitialBuryOnly_C.BPNotifyTargetSet
// ()

void AChupaCabra_AIController_BP_InitialBuryOnly_C::BPNotifyTargetSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_AIController_BP_InitialBuryOnly.ChupaCabra_AIController_BP_InitialBuryOnly_C.BPNotifyTargetSet");

	AChupaCabra_AIController_BP_InitialBuryOnly_C_BPNotifyTargetSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_AIController_BP_InitialBuryOnly.ChupaCabra_AIController_BP_InitialBuryOnly_C.UserConstructionScript
// ()

void AChupaCabra_AIController_BP_InitialBuryOnly_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_AIController_BP_InitialBuryOnly.ChupaCabra_AIController_BP_InitialBuryOnly_C.UserConstructionScript");

	AChupaCabra_AIController_BP_InitialBuryOnly_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ChupaCabra_AIController_BP_InitialBuryOnly.ChupaCabra_AIController_BP_InitialBuryOnly_C.ExecuteUbergraph_ChupaCabra_AIController_BP_InitialBuryOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChupaCabra_AIController_BP_InitialBuryOnly_C::ExecuteUbergraph_ChupaCabra_AIController_BP_InitialBuryOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ChupaCabra_AIController_BP_InitialBuryOnly.ChupaCabra_AIController_BP_InitialBuryOnly_C.ExecuteUbergraph_ChupaCabra_AIController_BP_InitialBuryOnly");

	AChupaCabra_AIController_BP_InitialBuryOnly_C_ExecuteUbergraph_ChupaCabra_AIController_BP_InitialBuryOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
