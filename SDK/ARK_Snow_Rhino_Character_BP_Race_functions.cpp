// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Snow_Rhino_Character_BP_Race_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Snow_Rhino_Character_BP_Race.Snow_Rhino_Character_BP_Race_C.UserConstructionScript
// ()

void ASnow_Rhino_Character_BP_Race_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Snow_Rhino_Character_BP_Race.Snow_Rhino_Character_BP_Race_C.UserConstructionScript");

	ASnow_Rhino_Character_BP_Race_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Snow_Rhino_Character_BP_Race.Snow_Rhino_Character_BP_Race_C.ExecuteUbergraph_Snow_Rhino_Character_BP_Race
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASnow_Rhino_Character_BP_Race_C::ExecuteUbergraph_Snow_Rhino_Character_BP_Race(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Snow_Rhino_Character_BP_Race.Snow_Rhino_Character_BP_Race_C.ExecuteUbergraph_Snow_Rhino_Character_BP_Race");

	ASnow_Rhino_Character_BP_Race_C_ExecuteUbergraph_Snow_Rhino_Character_BP_Race_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
