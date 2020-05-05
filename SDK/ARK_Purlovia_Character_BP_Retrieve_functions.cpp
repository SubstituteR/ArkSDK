// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Purlovia_Character_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Purlovia_Character_BP_Retrieve.Purlovia_Character_BP_Retrieve_C.ShouldComeOut
// ()
// Parameters:
// bool                           comeOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_Retrieve_C::ShouldComeOut(bool* comeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Retrieve.Purlovia_Character_BP_Retrieve_C.ShouldComeOut");

	APurlovia_Character_BP_Retrieve_C_ShouldComeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (comeOut != nullptr)
		*comeOut = params.comeOut;
}


// Function Purlovia_Character_BP_Retrieve.Purlovia_Character_BP_Retrieve_C.UserConstructionScript
// ()

void APurlovia_Character_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Retrieve.Purlovia_Character_BP_Retrieve_C.UserConstructionScript");

	APurlovia_Character_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP_Retrieve.Purlovia_Character_BP_Retrieve_C.ReceiveBeginPlay
// ()

void APurlovia_Character_BP_Retrieve_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Retrieve.Purlovia_Character_BP_Retrieve_C.ReceiveBeginPlay");

	APurlovia_Character_BP_Retrieve_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP_Retrieve.Purlovia_Character_BP_Retrieve_C.ExecuteUbergraph_Purlovia_Character_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_Retrieve_C::ExecuteUbergraph_Purlovia_Character_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Retrieve.Purlovia_Character_BP_Retrieve_C.ExecuteUbergraph_Purlovia_Character_BP_Retrieve");

	APurlovia_Character_BP_Retrieve_C_ExecuteUbergraph_Purlovia_Character_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
