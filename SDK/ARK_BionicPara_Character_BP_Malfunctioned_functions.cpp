// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicPara_Character_BP_Malfunctioned_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicPara_Character_BP_Malfunctioned.BionicPara_Character_BP_Malfunctioned_C.BP_OnSetDeath
// ()

void ABionicPara_Character_BP_Malfunctioned_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicPara_Character_BP_Malfunctioned.BionicPara_Character_BP_Malfunctioned_C.BP_OnSetDeath");

	ABionicPara_Character_BP_Malfunctioned_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicPara_Character_BP_Malfunctioned.BionicPara_Character_BP_Malfunctioned_C.UserConstructionScript
// ()

void ABionicPara_Character_BP_Malfunctioned_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicPara_Character_BP_Malfunctioned.BionicPara_Character_BP_Malfunctioned_C.UserConstructionScript");

	ABionicPara_Character_BP_Malfunctioned_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicPara_Character_BP_Malfunctioned.BionicPara_Character_BP_Malfunctioned_C.ReceiveBeginPlay
// ()

void ABionicPara_Character_BP_Malfunctioned_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicPara_Character_BP_Malfunctioned.BionicPara_Character_BP_Malfunctioned_C.ReceiveBeginPlay");

	ABionicPara_Character_BP_Malfunctioned_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicPara_Character_BP_Malfunctioned.BionicPara_Character_BP_Malfunctioned_C.ExecuteUbergraph_BionicPara_Character_BP_Malfunctioned
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicPara_Character_BP_Malfunctioned_C::ExecuteUbergraph_BionicPara_Character_BP_Malfunctioned(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicPara_Character_BP_Malfunctioned.BionicPara_Character_BP_Malfunctioned_C.ExecuteUbergraph_BionicPara_Character_BP_Malfunctioned");

	ABionicPara_Character_BP_Malfunctioned_C_ExecuteUbergraph_BionicPara_Character_BP_Malfunctioned_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
