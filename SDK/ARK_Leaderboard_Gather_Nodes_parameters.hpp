#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leaderboard_Gather_Nodes_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Leaderboard_Gather_Nodes.Leaderboard_Gather_Nodes_C.BPFormatLeaderboardRow
struct ULeaderboard_Gather_Nodes_C_BPFormatLeaderboardRow_Params
{
	struct FName*                                      MissionTag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLeaderboardRow                             DatabaseRow;                                              // (Parm, OutParm, ReferenceParm)
	struct FLeaderboardDisplayRow                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Leaderboard_Gather_Nodes.Leaderboard_Gather_Nodes_C.ExecuteUbergraph_Leaderboard_Gather_Nodes
struct ULeaderboard_Gather_Nodes_C_ExecuteUbergraph_Leaderboard_Gather_Nodes_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
