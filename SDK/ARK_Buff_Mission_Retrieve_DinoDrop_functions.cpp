// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Mission_Retrieve_DinoDrop_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Mission_Retrieve_DinoDrop.Buff_Mission_Retrieve_DinoDrop_C.UserConstructionScript
// ()

void ABuff_Mission_Retrieve_DinoDrop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Retrieve_DinoDrop.Buff_Mission_Retrieve_DinoDrop_C.UserConstructionScript");

	ABuff_Mission_Retrieve_DinoDrop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_Retrieve_DinoDrop.Buff_Mission_Retrieve_DinoDrop_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_Retrieve_DinoDrop_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Retrieve_DinoDrop.Buff_Mission_Retrieve_DinoDrop_C.BuffTickClient");

	ABuff_Mission_Retrieve_DinoDrop_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Mission_Retrieve_DinoDrop.Buff_Mission_Retrieve_DinoDrop_C.ExecuteUbergraph_Buff_Mission_Retrieve_DinoDrop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Mission_Retrieve_DinoDrop_C::ExecuteUbergraph_Buff_Mission_Retrieve_DinoDrop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Mission_Retrieve_DinoDrop.Buff_Mission_Retrieve_DinoDrop_C.ExecuteUbergraph_Buff_Mission_Retrieve_DinoDrop");

	ABuff_Mission_Retrieve_DinoDrop_C_ExecuteUbergraph_Buff_Mission_Retrieve_DinoDrop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
