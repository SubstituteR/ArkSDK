// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CorruptedAvatar_SpearImpactEffect_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CorruptedAvatar_SpearImpactEffect.CorruptedAvatar_SpearImpactEffect_C.UserConstructionScript
// ()

void ACorruptedAvatar_SpearImpactEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptedAvatar_SpearImpactEffect.CorruptedAvatar_SpearImpactEffect_C.UserConstructionScript");

	ACorruptedAvatar_SpearImpactEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorruptedAvatar_SpearImpactEffect.CorruptedAvatar_SpearImpactEffect_C.ExecuteUbergraph_CorruptedAvatar_SpearImpactEffect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACorruptedAvatar_SpearImpactEffect_C::ExecuteUbergraph_CorruptedAvatar_SpearImpactEffect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorruptedAvatar_SpearImpactEffect.CorruptedAvatar_SpearImpactEffect_C.ExecuteUbergraph_CorruptedAvatar_SpearImpactEffect");

	ACorruptedAvatar_SpearImpactEffect_C_ExecuteUbergraph_CorruptedAvatar_SpearImpactEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
