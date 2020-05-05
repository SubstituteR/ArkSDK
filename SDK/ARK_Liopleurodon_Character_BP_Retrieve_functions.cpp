// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Liopleurodon_Character_BP_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Liopleurodon_Character_BP_Retrieve.Liopleurodon_Character_BP_Retrieve_C.ReceiveBeginPlay
// ()

void ALiopleurodon_Character_BP_Retrieve_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP_Retrieve.Liopleurodon_Character_BP_Retrieve_C.ReceiveBeginPlay");

	ALiopleurodon_Character_BP_Retrieve_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP_Retrieve.Liopleurodon_Character_BP_Retrieve_C.UserConstructionScript
// ()

void ALiopleurodon_Character_BP_Retrieve_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP_Retrieve.Liopleurodon_Character_BP_Retrieve_C.UserConstructionScript");

	ALiopleurodon_Character_BP_Retrieve_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP_Retrieve.Liopleurodon_Character_BP_Retrieve_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_Character_BP_Retrieve_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP_Retrieve.Liopleurodon_Character_BP_Retrieve_C.ReceiveAnyDamage");

	ALiopleurodon_Character_BP_Retrieve_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP_Retrieve.Liopleurodon_Character_BP_Retrieve_C.ExecuteUbergraph_Liopleurodon_Character_BP_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_Character_BP_Retrieve_C::ExecuteUbergraph_Liopleurodon_Character_BP_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP_Retrieve.Liopleurodon_Character_BP_Retrieve_C.ExecuteUbergraph_Liopleurodon_Character_BP_Retrieve");

	ALiopleurodon_Character_BP_Retrieve_C_ExecuteUbergraph_Liopleurodon_Character_BP_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
