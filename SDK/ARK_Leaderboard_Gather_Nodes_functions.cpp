// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leaderboard_Gather_Nodes_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Leaderboard_Gather_Nodes.Leaderboard_Gather_Nodes_C.BPFormatLeaderboardRow
// (NetReliable, NetRequest, Exec, Event, NetResponse, Protected, Delegate, NetServer, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  MissionTag                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLeaderboardRow         DatabaseRow                    (Parm, OutParm, ReferenceParm)
// struct FLeaderboardDisplayRow  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLeaderboardDisplayRow ULeaderboard_Gather_Nodes_C::BPFormatLeaderboardRow(struct FName* MissionTag, int* index, struct FLeaderboardRow* DatabaseRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_Gather_Nodes.Leaderboard_Gather_Nodes_C.BPFormatLeaderboardRow");

	ULeaderboard_Gather_Nodes_C_BPFormatLeaderboardRow_Params params;
	params.MissionTag = MissionTag;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DatabaseRow != nullptr)
		*DatabaseRow = params.DatabaseRow;

	return params.ReturnValue;
}


// Function Leaderboard_Gather_Nodes.Leaderboard_Gather_Nodes_C.ExecuteUbergraph_Leaderboard_Gather_Nodes
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboard_Gather_Nodes_C::ExecuteUbergraph_Leaderboard_Gather_Nodes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_Gather_Nodes.Leaderboard_Gather_Nodes_C.ExecuteUbergraph_Leaderboard_Gather_Nodes");

	ULeaderboard_Gather_Nodes_C_ExecuteUbergraph_Leaderboard_Gather_Nodes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
