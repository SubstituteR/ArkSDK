// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_RockGolem_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_RockGolem_Gauntlet.DinoSettings_RockGolem_Gauntlet_C.ExecuteUbergraph_DinoSettings_RockGolem_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_RockGolem_Gauntlet_C::ExecuteUbergraph_DinoSettings_RockGolem_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_RockGolem_Gauntlet.DinoSettings_RockGolem_Gauntlet_C.ExecuteUbergraph_DinoSettings_RockGolem_Gauntlet");

	UDinoSettings_RockGolem_Gauntlet_C_ExecuteUbergraph_DinoSettings_RockGolem_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
