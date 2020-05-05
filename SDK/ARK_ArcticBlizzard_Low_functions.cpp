// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ArcticBlizzard_Low_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArcticBlizzard_Low.ArcticBlizzard_Low_C.UserConstructionScript
// ()

void AArcticBlizzard_Low_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArcticBlizzard_Low.ArcticBlizzard_Low_C.UserConstructionScript");

	AArcticBlizzard_Low_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArcticBlizzard_Low.ArcticBlizzard_Low_C.ExecuteUbergraph_ArcticBlizzard_Low
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArcticBlizzard_Low_C::ExecuteUbergraph_ArcticBlizzard_Low(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArcticBlizzard_Low.ArcticBlizzard_Low_C.ExecuteUbergraph_ArcticBlizzard_Low");

	AArcticBlizzard_Low_C_ExecuteUbergraph_ArcticBlizzard_Low_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
