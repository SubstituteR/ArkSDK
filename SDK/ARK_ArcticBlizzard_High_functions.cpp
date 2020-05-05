// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ArcticBlizzard_High_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArcticBlizzard_High.ArcticBlizzard_High_C.UserConstructionScript
// ()

void AArcticBlizzard_High_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArcticBlizzard_High.ArcticBlizzard_High_C.UserConstructionScript");

	AArcticBlizzard_High_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArcticBlizzard_High.ArcticBlizzard_High_C.ExecuteUbergraph_ArcticBlizzard_High
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArcticBlizzard_High_C::ExecuteUbergraph_ArcticBlizzard_High(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArcticBlizzard_High.ArcticBlizzard_High_C.ExecuteUbergraph_ArcticBlizzard_High");

	AArcticBlizzard_High_C_ExecuteUbergraph_ArcticBlizzard_High_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
