// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_RockGolem_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RockGolem_AnimBlueprint.RockGolem_AnimBlueprint_C.ExecuteUbergraph_RockGolem_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void URockGolem_AnimBlueprint_C::ExecuteUbergraph_RockGolem_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RockGolem_AnimBlueprint.RockGolem_AnimBlueprint_C.ExecuteUbergraph_RockGolem_AnimBlueprint");

	URockGolem_AnimBlueprint_C_ExecuteUbergraph_RockGolem_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
