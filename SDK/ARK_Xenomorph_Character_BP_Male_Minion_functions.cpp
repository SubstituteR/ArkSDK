// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Xenomorph_Character_BP_Male_Minion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Male_Minion.Xenomorph_Character_BP_Male_Minion_C.BPTimerServer
// ()

void AXenomorph_Character_BP_Male_Minion_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Minion.Xenomorph_Character_BP_Male_Minion_C.BPTimerServer");

	AXenomorph_Character_BP_Male_Minion_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Minion.Xenomorph_Character_BP_Male_Minion_C.UserConstructionScript
// ()

void AXenomorph_Character_BP_Male_Minion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Minion.Xenomorph_Character_BP_Male_Minion_C.UserConstructionScript");

	AXenomorph_Character_BP_Male_Minion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Minion.Xenomorph_Character_BP_Male_Minion_C.ReceiveBeginPlay
// ()

void AXenomorph_Character_BP_Male_Minion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Minion.Xenomorph_Character_BP_Male_Minion_C.ReceiveBeginPlay");

	AXenomorph_Character_BP_Male_Minion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_Minion.Xenomorph_Character_BP_Male_Minion_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Minion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_Minion_C::ExecuteUbergraph_Xenomorph_Character_BP_Male_Minion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_Minion.Xenomorph_Character_BP_Male_Minion_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_Minion");

	AXenomorph_Character_BP_Male_Minion_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_Minion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
