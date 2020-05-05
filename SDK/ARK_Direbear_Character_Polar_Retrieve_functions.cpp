// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Direbear_Character_Polar_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Direbear_Character_Polar_Retrieve.Direbear_Character_Polar_Retrieve_C.UserConstructionScript
// ()

void ADirebear_Character_Polar_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_Polar_Retrieve.Direbear_Character_Polar_Retrieve_C.UserConstructionScript");

	ADirebear_Character_Polar_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Direbear_Character_Polar_Retrieve.Direbear_Character_Polar_Retrieve_C.ExecuteUbergraph_Direbear_Character_Polar_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADirebear_Character_Polar_Retrieve_C::ExecuteUbergraph_Direbear_Character_Polar_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Direbear_Character_Polar_Retrieve.Direbear_Character_Polar_Retrieve_C.ExecuteUbergraph_Direbear_Character_Polar_Retrieve");

	ADirebear_Character_Polar_Retrieve_C_ExecuteUbergraph_Direbear_Character_Polar_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
