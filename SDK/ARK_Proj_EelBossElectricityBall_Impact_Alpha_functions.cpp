// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Proj_EelBossElectricityBall_Impact_Alpha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_EelBossElectricityBall_Impact_Alpha.Proj_EelBossElectricityBall_Impact_Alpha_C.UserConstructionScript
// ()

void AProj_EelBossElectricityBall_Impact_Alpha_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelBossElectricityBall_Impact_Alpha.Proj_EelBossElectricityBall_Impact_Alpha_C.UserConstructionScript");

	AProj_EelBossElectricityBall_Impact_Alpha_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_EelBossElectricityBall_Impact_Alpha.Proj_EelBossElectricityBall_Impact_Alpha_C.ExecuteUbergraph_Proj_EelBossElectricityBall_Impact_Alpha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProj_EelBossElectricityBall_Impact_Alpha_C::ExecuteUbergraph_Proj_EelBossElectricityBall_Impact_Alpha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelBossElectricityBall_Impact_Alpha.Proj_EelBossElectricityBall_Impact_Alpha_C.ExecuteUbergraph_Proj_EelBossElectricityBall_Impact_Alpha");

	AProj_EelBossElectricityBall_Impact_Alpha_C_ExecuteUbergraph_Proj_EelBossElectricityBall_Impact_Alpha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
