// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicRaptor_Character_BP_Malfunctioned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicRaptor_Character_BP_Malfunctioned.BionicRaptor_Character_BP_Malfunctioned_C.BP_OnSetDeath
// ()

void ABionicRaptor_Character_BP_Malfunctioned_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRaptor_Character_BP_Malfunctioned.BionicRaptor_Character_BP_Malfunctioned_C.BP_OnSetDeath");

	ABionicRaptor_Character_BP_Malfunctioned_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicRaptor_Character_BP_Malfunctioned.BionicRaptor_Character_BP_Malfunctioned_C.UserConstructionScript
// ()

void ABionicRaptor_Character_BP_Malfunctioned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRaptor_Character_BP_Malfunctioned.BionicRaptor_Character_BP_Malfunctioned_C.UserConstructionScript");

	ABionicRaptor_Character_BP_Malfunctioned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicRaptor_Character_BP_Malfunctioned.BionicRaptor_Character_BP_Malfunctioned_C.ReceiveBeginPlay
// ()

void ABionicRaptor_Character_BP_Malfunctioned_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRaptor_Character_BP_Malfunctioned.BionicRaptor_Character_BP_Malfunctioned_C.ReceiveBeginPlay");

	ABionicRaptor_Character_BP_Malfunctioned_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicRaptor_Character_BP_Malfunctioned.BionicRaptor_Character_BP_Malfunctioned_C.ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicRaptor_Character_BP_Malfunctioned_C::ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicRaptor_Character_BP_Malfunctioned.BionicRaptor_Character_BP_Malfunctioned_C.ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned");

	ABionicRaptor_Character_BP_Malfunctioned_C_ExecuteUbergraph_BionicRaptor_Character_BP_Malfunctioned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
