// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Proj_EelMinionBall_Impact_Beta_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_EelMinionBall_Impact_Beta.Proj_EelMinionBall_Impact_Beta_C.UserConstructionScript
// ()

void AProj_EelMinionBall_Impact_Beta_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelMinionBall_Impact_Beta.Proj_EelMinionBall_Impact_Beta_C.UserConstructionScript");

	AProj_EelMinionBall_Impact_Beta_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_EelMinionBall_Impact_Beta.Proj_EelMinionBall_Impact_Beta_C.ExecuteUbergraph_Proj_EelMinionBall_Impact_Beta
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProj_EelMinionBall_Impact_Beta_C::ExecuteUbergraph_Proj_EelMinionBall_Impact_Beta(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_EelMinionBall_Impact_Beta.Proj_EelMinionBall_Impact_Beta_C.ExecuteUbergraph_Proj_EelMinionBall_Impact_Beta");

	AProj_EelMinionBall_Impact_Beta_C_ExecuteUbergraph_Proj_EelMinionBall_Impact_Beta_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
