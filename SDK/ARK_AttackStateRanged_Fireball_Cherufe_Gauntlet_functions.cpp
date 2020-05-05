// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_AttackStateRanged_Fireball_Cherufe_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AttackStateRanged_Fireball_Cherufe_Gauntlet.AttackStateRanged_Fireball_Cherufe_Gauntlet_C.BPRangedAttack
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, NetClient, DLLImport, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 TargetLocation                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetVelocity                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UAttackStateRanged_Fireball_Cherufe_Gauntlet_C::STATIC_BPRangedAttack(struct FVector* TargetLocation, struct FVector* TargetVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe_Gauntlet.AttackStateRanged_Fireball_Cherufe_Gauntlet_C.BPRangedAttack");

	UAttackStateRanged_Fireball_Cherufe_Gauntlet_C_BPRangedAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetLocation != nullptr)
		*TargetLocation = params.TargetLocation;
	if (TargetVelocity != nullptr)
		*TargetVelocity = params.TargetVelocity;
}


// Function AttackStateRanged_Fireball_Cherufe_Gauntlet.AttackStateRanged_Fireball_Cherufe_Gauntlet_C.ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UAttackStateRanged_Fireball_Cherufe_Gauntlet_C::ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttackStateRanged_Fireball_Cherufe_Gauntlet.AttackStateRanged_Fireball_Cherufe_Gauntlet_C.ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe_Gauntlet");

	UAttackStateRanged_Fireball_Cherufe_Gauntlet_C_ExecuteUbergraph_AttackStateRanged_Fireball_Cherufe_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
