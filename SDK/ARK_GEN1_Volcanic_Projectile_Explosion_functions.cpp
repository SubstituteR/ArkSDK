// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_GEN1_Volcanic_Projectile_Explosion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GEN1_Volcanic_Projectile_Explosion.GEN1_Volcanic_Projectile_Explosion_C.UserConstructionScript
// ()

void AGEN1_Volcanic_Projectile_Explosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GEN1_Volcanic_Projectile_Explosion.GEN1_Volcanic_Projectile_Explosion_C.UserConstructionScript");

	AGEN1_Volcanic_Projectile_Explosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GEN1_Volcanic_Projectile_Explosion.GEN1_Volcanic_Projectile_Explosion_C.ExecuteUbergraph_GEN1_Volcanic_Projectile_Explosion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGEN1_Volcanic_Projectile_Explosion_C::ExecuteUbergraph_GEN1_Volcanic_Projectile_Explosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GEN1_Volcanic_Projectile_Explosion.GEN1_Volcanic_Projectile_Explosion_C.ExecuteUbergraph_GEN1_Volcanic_Projectile_Explosion");

	AGEN1_Volcanic_Projectile_Explosion_C_ExecuteUbergraph_GEN1_Volcanic_Projectile_Explosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
