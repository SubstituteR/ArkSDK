// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_GauntletWaves_Lunar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_GauntletWaves_Lunar.MissionType_GauntletWaves_Lunar_C.UserConstructionScript
// ()

void AMissionType_GauntletWaves_Lunar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Lunar.MissionType_GauntletWaves_Lunar_C.UserConstructionScript");

	AMissionType_GauntletWaves_Lunar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Lunar.MissionType_GauntletWaves_Lunar_C.ExecuteUbergraph_MissionType_GauntletWaves_Lunar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Lunar_C::ExecuteUbergraph_MissionType_GauntletWaves_Lunar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Lunar.MissionType_GauntletWaves_Lunar_C.ExecuteUbergraph_MissionType_GauntletWaves_Lunar");

	AMissionType_GauntletWaves_Lunar_C_ExecuteUbergraph_MissionType_GauntletWaves_Lunar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
