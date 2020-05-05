// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicQuetz_Character_BP_Malfunctioned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicQuetz_Character_BP_Malfunctioned.BionicQuetz_Character_BP_Malfunctioned_C.BP_OnSetDeath
// ()

void ABionicQuetz_Character_BP_Malfunctioned_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicQuetz_Character_BP_Malfunctioned.BionicQuetz_Character_BP_Malfunctioned_C.BP_OnSetDeath");

	ABionicQuetz_Character_BP_Malfunctioned_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicQuetz_Character_BP_Malfunctioned.BionicQuetz_Character_BP_Malfunctioned_C.UserConstructionScript
// ()

void ABionicQuetz_Character_BP_Malfunctioned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicQuetz_Character_BP_Malfunctioned.BionicQuetz_Character_BP_Malfunctioned_C.UserConstructionScript");

	ABionicQuetz_Character_BP_Malfunctioned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicQuetz_Character_BP_Malfunctioned.BionicQuetz_Character_BP_Malfunctioned_C.ReceiveBeginPlay
// ()

void ABionicQuetz_Character_BP_Malfunctioned_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicQuetz_Character_BP_Malfunctioned.BionicQuetz_Character_BP_Malfunctioned_C.ReceiveBeginPlay");

	ABionicQuetz_Character_BP_Malfunctioned_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicQuetz_Character_BP_Malfunctioned.BionicQuetz_Character_BP_Malfunctioned_C.ExecuteUbergraph_BionicQuetz_Character_BP_Malfunctioned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicQuetz_Character_BP_Malfunctioned_C::ExecuteUbergraph_BionicQuetz_Character_BP_Malfunctioned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicQuetz_Character_BP_Malfunctioned.BionicQuetz_Character_BP_Malfunctioned_C.ExecuteUbergraph_BionicQuetz_Character_BP_Malfunctioned");

	ABionicQuetz_Character_BP_Malfunctioned_C_ExecuteUbergraph_BionicQuetz_Character_BP_Malfunctioned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
