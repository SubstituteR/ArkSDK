// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Escort_Arctic_Procop_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Escort_Arctic_Procop_Medium.MissionType_Escort_Arctic_Procop_Medium_C.UserConstructionScript
// ()

void AMissionType_Escort_Arctic_Procop_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop_Medium.MissionType_Escort_Arctic_Procop_Medium_C.UserConstructionScript");

	AMissionType_Escort_Arctic_Procop_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Escort_Arctic_Procop_Medium.MissionType_Escort_Arctic_Procop_Medium_C.ExecuteUbergraph_MissionType_Escort_Arctic_Procop_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Escort_Arctic_Procop_Medium_C::ExecuteUbergraph_MissionType_Escort_Arctic_Procop_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Escort_Arctic_Procop_Medium.MissionType_Escort_Arctic_Procop_Medium_C.ExecuteUbergraph_MissionType_Escort_Arctic_Procop_Medium");

	AMissionType_Escort_Arctic_Procop_Medium_C_ExecuteUbergraph_MissionType_Escort_Arctic_Procop_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
