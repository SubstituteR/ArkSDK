// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RockGolem_RockEmitter_Fire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RockGolem_RockEmitter_Fire.RockGolem_RockEmitter_Fire_C.UserConstructionScript
// ()

void ARockGolem_RockEmitter_Fire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RockGolem_RockEmitter_Fire.RockGolem_RockEmitter_Fire_C.UserConstructionScript");

	ARockGolem_RockEmitter_Fire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RockGolem_RockEmitter_Fire.RockGolem_RockEmitter_Fire_C.ExecuteUbergraph_RockGolem_RockEmitter_Fire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARockGolem_RockEmitter_Fire_C::ExecuteUbergraph_RockGolem_RockEmitter_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockGolem_RockEmitter_Fire.RockGolem_RockEmitter_Fire_C.ExecuteUbergraph_RockGolem_RockEmitter_Fire");

	ARockGolem_RockEmitter_Fire_C_ExecuteUbergraph_RockGolem_RockEmitter_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
