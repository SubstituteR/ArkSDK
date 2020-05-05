// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelMinion_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EelMinion_AIController_BP.EelMinion_AIController_BP_C.UpdateAttackDestOffset
// ()

void AEelMinion_AIController_BP_C::UpdateAttackDestOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_AIController_BP.EelMinion_AIController_BP_C.UpdateAttackDestOffset");

	AEelMinion_AIController_BP_C_UpdateAttackDestOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_AIController_BP.EelMinion_AIController_BP_C.BPNotifyTargetSet
// ()

void AEelMinion_AIController_BP_C::BPNotifyTargetSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_AIController_BP.EelMinion_AIController_BP_C.BPNotifyTargetSet");

	AEelMinion_AIController_BP_C_BPNotifyTargetSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_AIController_BP.EelMinion_AIController_BP_C.UserConstructionScript
// ()

void AEelMinion_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_AIController_BP.EelMinion_AIController_BP_C.UserConstructionScript");

	AEelMinion_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_AIController_BP.EelMinion_AIController_BP_C.ReceiveBeginPlay
// ()

void AEelMinion_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_AIController_BP.EelMinion_AIController_BP_C.ReceiveBeginPlay");

	AEelMinion_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelMinion_AIController_BP.EelMinion_AIController_BP_C.ExecuteUbergraph_EelMinion_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEelMinion_AIController_BP_C::ExecuteUbergraph_EelMinion_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelMinion_AIController_BP.EelMinion_AIController_BP_C.ExecuteUbergraph_EelMinion_AIController_BP");

	AEelMinion_AIController_BP_C_ExecuteUbergraph_EelMinion_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
