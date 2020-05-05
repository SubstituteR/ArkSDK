// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SpaceWhale_Character_BP_Brute_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceWhale_Character_BP_Brute.SpaceWhale_Character_BP_Brute_C.UserConstructionScript
// ()

void ASpaceWhale_Character_BP_Brute_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP_Brute.SpaceWhale_Character_BP_Brute_C.UserConstructionScript");

	ASpaceWhale_Character_BP_Brute_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhale_Character_BP_Brute.SpaceWhale_Character_BP_Brute_C.ExecuteUbergraph_SpaceWhale_Character_BP_Brute
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhale_Character_BP_Brute_C::ExecuteUbergraph_SpaceWhale_Character_BP_Brute(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhale_Character_BP_Brute.SpaceWhale_Character_BP_Brute_C.ExecuteUbergraph_SpaceWhale_Character_BP_Brute");

	ASpaceWhale_Character_BP_Brute_C_ExecuteUbergraph_SpaceWhale_Character_BP_Brute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
