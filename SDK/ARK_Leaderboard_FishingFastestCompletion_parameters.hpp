#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leaderboard_FishingFastestCompletion_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Leaderboard_FishingFastestCompletion.Leaderboard_FishingFastestCompletion_C.BPFormatLeaderboardRow
struct ULeaderboard_FishingFastestCompletion_C_BPFormatLeaderboardRow_Params
{
	struct FName*                                      MissionTag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLeaderboardRow                             DatabaseRow;                                              // (Parm, OutParm, ReferenceParm)
	struct FLeaderboardDisplayRow                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Leaderboard_FishingFastestCompletion.Leaderboard_FishingFastestCompletion_C.Select Icon
struct ULeaderboard_FishingFastestCompletion_C_Select_Icon_Params
{
	int                                                Place;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Leaderboard_FishingFastestCompletion.Leaderboard_FishingFastestCompletion_C.ExecuteUbergraph_Leaderboard_FishingFastestCompletion
struct ULeaderboard_FishingFastestCompletion_C_ExecuteUbergraph_Leaderboard_FishingFastestCompletion_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
