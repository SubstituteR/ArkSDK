// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Hunt_Sarco_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Hunt_Sarco.MissionType_Hunt_Sarco_C.UserConstructionScript
// ()

void AMissionType_Hunt_Sarco_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt_Sarco.MissionType_Hunt_Sarco_C.UserConstructionScript");

	AMissionType_Hunt_Sarco_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Hunt_Sarco.MissionType_Hunt_Sarco_C.ExecuteUbergraph_MissionType_Hunt_Sarco
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Hunt_Sarco_C::ExecuteUbergraph_MissionType_Hunt_Sarco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Hunt_Sarco.MissionType_Hunt_Sarco_C.ExecuteUbergraph_MissionType_Hunt_Sarco");

	AMissionType_Hunt_Sarco_C_ExecuteUbergraph_MissionType_Hunt_Sarco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
