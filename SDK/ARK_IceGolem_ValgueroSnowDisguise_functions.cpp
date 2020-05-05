// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_IceGolem_ValgueroSnowDisguise_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceGolem_ValgueroSnowDisguise.IceGolem_ValgueroSnowDisguise_C.UserConstructionScript
// ()

void AIceGolem_ValgueroSnowDisguise_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_ValgueroSnowDisguise.IceGolem_ValgueroSnowDisguise_C.UserConstructionScript");

	AIceGolem_ValgueroSnowDisguise_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceGolem_ValgueroSnowDisguise.IceGolem_ValgueroSnowDisguise_C.ExecuteUbergraph_IceGolem_ValgueroSnowDisguise
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceGolem_ValgueroSnowDisguise_C::ExecuteUbergraph_IceGolem_ValgueroSnowDisguise(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceGolem_ValgueroSnowDisguise.IceGolem_ValgueroSnowDisguise_C.ExecuteUbergraph_IceGolem_ValgueroSnowDisguise");

	AIceGolem_ValgueroSnowDisguise_C_ExecuteUbergraph_IceGolem_ValgueroSnowDisguise_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
