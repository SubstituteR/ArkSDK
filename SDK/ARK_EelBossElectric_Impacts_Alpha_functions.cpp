// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelBossElectric_Impacts_Alpha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EelBossElectric_Impacts_Alpha.EelBossElectric_Impacts_Alpha_C.UserConstructionScript
// ()

void AEelBossElectric_Impacts_Alpha_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBossElectric_Impacts_Alpha.EelBossElectric_Impacts_Alpha_C.UserConstructionScript");

	AEelBossElectric_Impacts_Alpha_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBossElectric_Impacts_Alpha.EelBossElectric_Impacts_Alpha_C.ExecuteUbergraph_EelBossElectric_Impacts_Alpha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEelBossElectric_Impacts_Alpha_C::ExecuteUbergraph_EelBossElectric_Impacts_Alpha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBossElectric_Impacts_Alpha.EelBossElectric_Impacts_Alpha_C.ExecuteUbergraph_EelBossElectric_Impacts_Alpha");

	AEelBossElectric_Impacts_Alpha_C_ExecuteUbergraph_EelBossElectric_Impacts_Alpha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
