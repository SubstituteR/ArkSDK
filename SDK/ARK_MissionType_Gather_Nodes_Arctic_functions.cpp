// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Gather_Nodes_Arctic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionType_Gather_Nodes_Arctic.MissionType_Gather_Nodes_Arctic_C.UserConstructionScript
// ()

void AMissionType_Gather_Nodes_Arctic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes_Arctic.MissionType_Gather_Nodes_Arctic_C.UserConstructionScript");

	AMissionType_Gather_Nodes_Arctic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionType_Gather_Nodes_Arctic.MissionType_Gather_Nodes_Arctic_C.ExecuteUbergraph_MissionType_Gather_Nodes_Arctic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMissionType_Gather_Nodes_Arctic_C::ExecuteUbergraph_MissionType_Gather_Nodes_Arctic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionType_Gather_Nodes_Arctic.MissionType_Gather_Nodes_Arctic_C.ExecuteUbergraph_MissionType_Gather_Nodes_Arctic");

	AMissionType_Gather_Nodes_Arctic_C_ExecuteUbergraph_MissionType_Gather_Nodes_Arctic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
