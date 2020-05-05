// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_Electrocuted_VRBoss_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Electrocuted_VRBoss.Buff_Electrocuted_VRBoss_C.UserConstructionScript
// ()

void ABuff_Electrocuted_VRBoss_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_VRBoss.Buff_Electrocuted_VRBoss_C.UserConstructionScript");

	ABuff_Electrocuted_VRBoss_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Electrocuted_VRBoss.Buff_Electrocuted_VRBoss_C.ExecuteUbergraph_Buff_Electrocuted_VRBoss
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Electrocuted_VRBoss_C::ExecuteUbergraph_Buff_Electrocuted_VRBoss(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Electrocuted_VRBoss.Buff_Electrocuted_VRBoss_C.ExecuteUbergraph_Buff_Electrocuted_VRBoss");

	ABuff_Electrocuted_VRBoss_C_ExecuteUbergraph_Buff_Electrocuted_VRBoss_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
