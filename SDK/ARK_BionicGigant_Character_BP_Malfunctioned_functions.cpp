// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicGigant_Character_BP_Malfunctioned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicGigant_Character_BP_Malfunctioned.BionicGigant_Character_BP_Malfunctioned_C.BP_OnSetDeath
// ()

void ABionicGigant_Character_BP_Malfunctioned_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicGigant_Character_BP_Malfunctioned.BionicGigant_Character_BP_Malfunctioned_C.BP_OnSetDeath");

	ABionicGigant_Character_BP_Malfunctioned_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicGigant_Character_BP_Malfunctioned.BionicGigant_Character_BP_Malfunctioned_C.UserConstructionScript
// ()

void ABionicGigant_Character_BP_Malfunctioned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicGigant_Character_BP_Malfunctioned.BionicGigant_Character_BP_Malfunctioned_C.UserConstructionScript");

	ABionicGigant_Character_BP_Malfunctioned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicGigant_Character_BP_Malfunctioned.BionicGigant_Character_BP_Malfunctioned_C.ReceiveBeginPlay
// ()

void ABionicGigant_Character_BP_Malfunctioned_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicGigant_Character_BP_Malfunctioned.BionicGigant_Character_BP_Malfunctioned_C.ReceiveBeginPlay");

	ABionicGigant_Character_BP_Malfunctioned_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicGigant_Character_BP_Malfunctioned.BionicGigant_Character_BP_Malfunctioned_C.ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicGigant_Character_BP_Malfunctioned_C::ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicGigant_Character_BP_Malfunctioned.BionicGigant_Character_BP_Malfunctioned_C.ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned");

	ABionicGigant_Character_BP_Malfunctioned_C_ExecuteUbergraph_BionicGigant_Character_BP_Malfunctioned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
