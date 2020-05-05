// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicTrike_Character_BP_Malfunctioned_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicTrike_Character_BP_Malfunctioned_Retrieve.BionicTrike_Character_BP_Malfunctioned_Retrieve_C.DoRamImpact
// ()
// Parameters:
// bool                           HitSomething                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABionicTrike_Character_BP_Malfunctioned_Retrieve_C::DoRamImpact(bool* HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicTrike_Character_BP_Malfunctioned_Retrieve.BionicTrike_Character_BP_Malfunctioned_Retrieve_C.DoRamImpact");

	ABionicTrike_Character_BP_Malfunctioned_Retrieve_C_DoRamImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitSomething != nullptr)
		*HitSomething = params.HitSomething;
}


// Function BionicTrike_Character_BP_Malfunctioned_Retrieve.BionicTrike_Character_BP_Malfunctioned_Retrieve_C.UserConstructionScript
// ()

void ABionicTrike_Character_BP_Malfunctioned_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicTrike_Character_BP_Malfunctioned_Retrieve.BionicTrike_Character_BP_Malfunctioned_Retrieve_C.UserConstructionScript");

	ABionicTrike_Character_BP_Malfunctioned_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicTrike_Character_BP_Malfunctioned_Retrieve.BionicTrike_Character_BP_Malfunctioned_Retrieve_C.ExecuteUbergraph_BionicTrike_Character_BP_Malfunctioned_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicTrike_Character_BP_Malfunctioned_Retrieve_C::ExecuteUbergraph_BionicTrike_Character_BP_Malfunctioned_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicTrike_Character_BP_Malfunctioned_Retrieve.BionicTrike_Character_BP_Malfunctioned_Retrieve_C.ExecuteUbergraph_BionicTrike_Character_BP_Malfunctioned_Retrieve");

	ABionicTrike_Character_BP_Malfunctioned_Retrieve_C_ExecuteUbergraph_BionicTrike_Character_BP_Malfunctioned_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
