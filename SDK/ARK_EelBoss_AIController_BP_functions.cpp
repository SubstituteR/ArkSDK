// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelBoss_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EelBoss_AIController_BP.EelBoss_AIController_BP_C.UserConstructionScript
// ()

void AEelBoss_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_AIController_BP.EelBoss_AIController_BP_C.UserConstructionScript");

	AEelBoss_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EelBoss_AIController_BP.EelBoss_AIController_BP_C.ExecuteUbergraph_EelBoss_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEelBoss_AIController_BP_C::ExecuteUbergraph_EelBoss_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EelBoss_AIController_BP.EelBoss_AIController_BP_C.ExecuteUbergraph_EelBoss_AIController_BP");

	AEelBoss_AIController_BP_C_ExecuteUbergraph_EelBoss_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
