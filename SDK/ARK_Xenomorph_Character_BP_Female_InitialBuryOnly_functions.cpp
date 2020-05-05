// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Xenomorph_Character_BP_Female_InitialBuryOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.KillSelf
// ()

void AXenomorph_Character_BP_Female_InitialBuryOnly_C::KillSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.KillSelf");

	AXenomorph_Character_BP_Female_InitialBuryOnly_C_KillSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.BP_OnSetDeath
// ()

void AXenomorph_Character_BP_Female_InitialBuryOnly_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.BP_OnSetDeath");

	AXenomorph_Character_BP_Female_InitialBuryOnly_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.DiveEnd
// ()

void AXenomorph_Character_BP_Female_InitialBuryOnly_C::DiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.DiveEnd");

	AXenomorph_Character_BP_Female_InitialBuryOnly_C_DiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.GetDefaultXeno
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Female_InitialBuryOnly_C::GetDefaultXeno(class APrimalDinoCharacter** Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.GetDefaultXeno");

	AXenomorph_Character_BP_Female_InitialBuryOnly_C_GetDefaultXeno_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dino != nullptr)
		*Dino = params.Dino;
}


// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_Female_InitialBuryOnly_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.BlueprintCanAttack");

	AXenomorph_Character_BP_Female_InitialBuryOnly_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.UserConstructionScript
// ()

void AXenomorph_Character_BP_Female_InitialBuryOnly_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.UserConstructionScript");

	AXenomorph_Character_BP_Female_InitialBuryOnly_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.ReceiveBeginPlay
// ()

void AXenomorph_Character_BP_Female_InitialBuryOnly_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.ReceiveBeginPlay");

	AXenomorph_Character_BP_Female_InitialBuryOnly_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.BPDinoPostBeginPlay
// ()

void AXenomorph_Character_BP_Female_InitialBuryOnly_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.BPDinoPostBeginPlay");

	AXenomorph_Character_BP_Female_InitialBuryOnly_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.AttemptDiveOut
// ()

void AXenomorph_Character_BP_Female_InitialBuryOnly_C::AttemptDiveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.AttemptDiveOut");

	AXenomorph_Character_BP_Female_InitialBuryOnly_C_AttemptDiveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.ForceDiveEnd
// ()

void AXenomorph_Character_BP_Female_InitialBuryOnly_C::ForceDiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.ForceDiveEnd");

	AXenomorph_Character_BP_Female_InitialBuryOnly_C_ForceDiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.ExecuteUbergraph_Xenomorph_Character_BP_Female_InitialBuryOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Female_InitialBuryOnly_C::ExecuteUbergraph_Xenomorph_Character_BP_Female_InitialBuryOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female_InitialBuryOnly.Xenomorph_Character_BP_Female_InitialBuryOnly_C.ExecuteUbergraph_Xenomorph_Character_BP_Female_InitialBuryOnly");

	AXenomorph_Character_BP_Female_InitialBuryOnly_C_ExecuteUbergraph_Xenomorph_Character_BP_Female_InitialBuryOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
