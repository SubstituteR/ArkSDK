// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Retrieve_DinoDrop_MegTeeth_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Retrieve_DinoDrop_MegTeeth_Medium.MissionType_Retrieve_DinoDrop_MegTeeth_Medium_C.UserConstructionScript
// ()

void AMissionType_Retrieve_DinoDrop_MegTeeth_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop_MegTeeth_Medium.MissionType_Retrieve_DinoDrop_MegTeeth_Medium_C.UserConstructionScript");

	AMissionType_Retrieve_DinoDrop_MegTeeth_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Retrieve_DinoDrop_MegTeeth_Medium.MissionType_Retrieve_DinoDrop_MegTeeth_Medium_C.ExecuteUbergraph_MissionType_Retrieve_DinoDrop_MegTeeth_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Retrieve_DinoDrop_MegTeeth_Medium_C::ExecuteUbergraph_MissionType_Retrieve_DinoDrop_MegTeeth_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Retrieve_DinoDrop_MegTeeth_Medium.MissionType_Retrieve_DinoDrop_MegTeeth_Medium_C.ExecuteUbergraph_MissionType_Retrieve_DinoDrop_MegTeeth_Medium");

	AMissionType_Retrieve_DinoDrop_MegTeeth_Medium_C_ExecuteUbergraph_MissionType_Retrieve_DinoDrop_MegTeeth_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
