// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_GauntletWaves_Bog_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_GauntletWaves_Bog.MissionType_GauntletWaves_Bog_C.UserConstructionScript
// ()

void AMissionType_GauntletWaves_Bog_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Bog.MissionType_GauntletWaves_Bog_C.UserConstructionScript");

	AMissionType_GauntletWaves_Bog_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_GauntletWaves_Bog.MissionType_GauntletWaves_Bog_C.ExecuteUbergraph_MissionType_GauntletWaves_Bog
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_GauntletWaves_Bog_C::ExecuteUbergraph_MissionType_GauntletWaves_Bog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_GauntletWaves_Bog.MissionType_GauntletWaves_Bog_C.ExecuteUbergraph_MissionType_GauntletWaves_Bog");

	AMissionType_GauntletWaves_Bog_C_ExecuteUbergraph_MissionType_GauntletWaves_Bog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
