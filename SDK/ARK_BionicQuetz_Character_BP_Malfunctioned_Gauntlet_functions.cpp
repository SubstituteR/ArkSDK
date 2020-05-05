// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_BionicQuetz_Character_BP_Malfunctioned_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BionicQuetz_Character_BP_Malfunctioned_Gauntlet.BionicQuetz_Character_BP_Malfunctioned_Gauntlet_C.UserConstructionScript
// ()

void ABionicQuetz_Character_BP_Malfunctioned_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicQuetz_Character_BP_Malfunctioned_Gauntlet.BionicQuetz_Character_BP_Malfunctioned_Gauntlet_C.UserConstructionScript");

	ABionicQuetz_Character_BP_Malfunctioned_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BionicQuetz_Character_BP_Malfunctioned_Gauntlet.BionicQuetz_Character_BP_Malfunctioned_Gauntlet_C.ExecuteUbergraph_BionicQuetz_Character_BP_Malfunctioned_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABionicQuetz_Character_BP_Malfunctioned_Gauntlet_C::ExecuteUbergraph_BionicQuetz_Character_BP_Malfunctioned_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BionicQuetz_Character_BP_Malfunctioned_Gauntlet.BionicQuetz_Character_BP_Malfunctioned_Gauntlet_C.ExecuteUbergraph_BionicQuetz_Character_BP_Malfunctioned_Gauntlet");

	ABionicQuetz_Character_BP_Malfunctioned_Gauntlet_C_ExecuteUbergraph_BionicQuetz_Character_BP_Malfunctioned_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
