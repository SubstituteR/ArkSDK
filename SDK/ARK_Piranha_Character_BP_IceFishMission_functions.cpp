// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Piranha_Character_BP_IceFishMission_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Piranha_Character_BP_IceFishMission.Piranha_Character_BP_IceFishMission_C.UserConstructionScript
// ()

void APiranha_Character_BP_IceFishMission_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Piranha_Character_BP_IceFishMission.Piranha_Character_BP_IceFishMission_C.UserConstructionScript");

	APiranha_Character_BP_IceFishMission_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Piranha_Character_BP_IceFishMission.Piranha_Character_BP_IceFishMission_C.ExecuteUbergraph_Piranha_Character_BP_IceFishMission
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APiranha_Character_BP_IceFishMission_C::ExecuteUbergraph_Piranha_Character_BP_IceFishMission(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Piranha_Character_BP_IceFishMission.Piranha_Character_BP_IceFishMission_C.ExecuteUbergraph_Piranha_Character_BP_IceFishMission");

	APiranha_Character_BP_IceFishMission_C_ExecuteUbergraph_Piranha_Character_BP_IceFishMission_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
