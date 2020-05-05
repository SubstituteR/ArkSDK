// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Purlovia_Character_BP_Polar_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.IsValidSurface
// ()
// Parameters:
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_Polar_Retrieve_C::IsValidSurface(bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.IsValidSurface");

	APurlovia_Character_BP_Polar_Retrieve_C_IsValidSurface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.Show Mound Out Particles
// ()

void APurlovia_Character_BP_Polar_Retrieve_C::Show_Mound_Out_Particles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.Show Mound Out Particles");

	APurlovia_Character_BP_Polar_Retrieve_C_Show_Mound_Out_Particles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.CalculateBuryMeshTransform
// (NetReliable, NetRequest, Exec, Native, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)
// Parameters:
// struct UObject_FTransform      Transform                      (Parm, OutParm, IsPlainOldData)

void APurlovia_Character_BP_Polar_Retrieve_C::CalculateBuryMeshTransform(struct UObject_FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.CalculateBuryMeshTransform");

	APurlovia_Character_BP_Polar_Retrieve_C_CalculateBuryMeshTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Transform != nullptr)
		*Transform = params.Transform;
}


// Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.BPPostInitializeComponents
// (NetRequest, Event, NetResponse, NetMulticast, MulticastDelegate, Protected, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintCallable, NetValidate)

void APurlovia_Character_BP_Polar_Retrieve_C::BPPostInitializeComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.BPPostInitializeComponents");

	APurlovia_Character_BP_Polar_Retrieve_C_BPPostInitializeComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.ShouldComeOut
// ()
// Parameters:
// bool                           comeOut                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_Polar_Retrieve_C::ShouldComeOut(bool* comeOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.ShouldComeOut");

	APurlovia_Character_BP_Polar_Retrieve_C_ShouldComeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (comeOut != nullptr)
		*comeOut = params.comeOut;
}


// Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.UserConstructionScript
// ()

void APurlovia_Character_BP_Polar_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.UserConstructionScript");

	APurlovia_Character_BP_Polar_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.ReceiveBeginPlay
// ()

void APurlovia_Character_BP_Polar_Retrieve_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.ReceiveBeginPlay");

	APurlovia_Character_BP_Polar_Retrieve_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.ExecuteUbergraph_Purlovia_Character_BP_Polar_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APurlovia_Character_BP_Polar_Retrieve_C::ExecuteUbergraph_Purlovia_Character_BP_Polar_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Purlovia_Character_BP_Polar_Retrieve.Purlovia_Character_BP_Polar_Retrieve_C.ExecuteUbergraph_Purlovia_Character_BP_Polar_Retrieve");

	APurlovia_Character_BP_Polar_Retrieve_C_ExecuteUbergraph_Purlovia_Character_BP_Polar_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
