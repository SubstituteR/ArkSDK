// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ArcticBlizzard_Med_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArcticBlizzard_Med.ArcticBlizzard_Med_C.UserConstructionScript
// ()

void AArcticBlizzard_Med_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArcticBlizzard_Med.ArcticBlizzard_Med_C.UserConstructionScript");

	AArcticBlizzard_Med_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArcticBlizzard_Med.ArcticBlizzard_Med_C.ExecuteUbergraph_ArcticBlizzard_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArcticBlizzard_Med_C::ExecuteUbergraph_ArcticBlizzard_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArcticBlizzard_Med.ArcticBlizzard_Med_C.ExecuteUbergraph_ArcticBlizzard_Med");

	AArcticBlizzard_Med_C_ExecuteUbergraph_ArcticBlizzard_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
