// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackState_EelBoss_AOE_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_EelBoss_AOE.DinoAttackState_EelBoss_AOE_C.StartAnimationStateEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ENetRole>*         Role                           (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_EelBoss_AOE_C::StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_EelBoss_AOE.DinoAttackState_EelBoss_AOE_C.StartAnimationStateEvent");

	UDinoAttackState_EelBoss_AOE_C_StartAnimationStateEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoAttackState_EelBoss_AOE.DinoAttackState_EelBoss_AOE_C.ExecuteUbergraph_DinoAttackState_EelBoss_AOE
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_EelBoss_AOE_C::ExecuteUbergraph_DinoAttackState_EelBoss_AOE(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_EelBoss_AOE.DinoAttackState_EelBoss_AOE_C.ExecuteUbergraph_DinoAttackState_EelBoss_AOE");

	UDinoAttackState_EelBoss_AOE_C_ExecuteUbergraph_DinoAttackState_EelBoss_AOE_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
