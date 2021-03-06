#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leaderboard_Gather_Nodes_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Leaderboard_Gather_Nodes.Leaderboard_Gather_Nodes_C
// 0x0018 (0x0070 - 0x0058)
class ULeaderboard_Gather_Nodes_C : public ULeaderboard
{
public:
	int                                                MaxPlayerNameCharacterCount;                              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	TArray<class UTexture2D*>                          Icons;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Leaderboard_Gather_Nodes.Leaderboard_Gather_Nodes_C");
		return ptr;
	}


	struct FLeaderboardDisplayRow BPFormatLeaderboardRow(struct FName* MissionTag, int* index, struct FLeaderboardRow* DatabaseRow);
	void ExecuteUbergraph_Leaderboard_Gather_Nodes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
