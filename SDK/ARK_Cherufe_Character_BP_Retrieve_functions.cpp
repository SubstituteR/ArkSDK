// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Cherufe_Character_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cherufe_Character_BP_Retrieve.Cherufe_Character_BP_Retrieve_C.UserConstructionScript
// ()

void ACherufe_Character_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP_Retrieve.Cherufe_Character_BP_Retrieve_C.UserConstructionScript");

	ACherufe_Character_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP_Retrieve.Cherufe_Character_BP_Retrieve_C.ReceiveBeginPlay
// ()

void ACherufe_Character_BP_Retrieve_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP_Retrieve.Cherufe_Character_BP_Retrieve_C.ReceiveBeginPlay");

	ACherufe_Character_BP_Retrieve_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP_Retrieve.Cherufe_Character_BP_Retrieve_C.BPUnstasis
// ()

void ACherufe_Character_BP_Retrieve_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP_Retrieve.Cherufe_Character_BP_Retrieve_C.BPUnstasis");

	ACherufe_Character_BP_Retrieve_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cherufe_Character_BP_Retrieve.Cherufe_Character_BP_Retrieve_C.ExecuteUbergraph_Cherufe_Character_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACherufe_Character_BP_Retrieve_C::ExecuteUbergraph_Cherufe_Character_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cherufe_Character_BP_Retrieve.Cherufe_Character_BP_Retrieve_C.ExecuteUbergraph_Cherufe_Character_BP_Retrieve");

	ACherufe_Character_BP_Retrieve_C_ExecuteUbergraph_Cherufe_Character_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
