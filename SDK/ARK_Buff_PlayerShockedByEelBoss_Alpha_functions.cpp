// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PlayerShockedByEelBoss_Alpha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_PlayerShockedByEelBoss_Alpha.Buff_PlayerShockedByEelBoss_Alpha_C.UserConstructionScript
// ()

void ABuff_PlayerShockedByEelBoss_Alpha_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerShockedByEelBoss_Alpha.Buff_PlayerShockedByEelBoss_Alpha_C.UserConstructionScript");

	ABuff_PlayerShockedByEelBoss_Alpha_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_PlayerShockedByEelBoss_Alpha.Buff_PlayerShockedByEelBoss_Alpha_C.ExecuteUbergraph_Buff_PlayerShockedByEelBoss_Alpha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_PlayerShockedByEelBoss_Alpha_C::ExecuteUbergraph_Buff_PlayerShockedByEelBoss_Alpha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_PlayerShockedByEelBoss_Alpha.Buff_PlayerShockedByEelBoss_Alpha_C.ExecuteUbergraph_Buff_PlayerShockedByEelBoss_Alpha");

	ABuff_PlayerShockedByEelBoss_Alpha_C_ExecuteUbergraph_Buff_PlayerShockedByEelBoss_Alpha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
