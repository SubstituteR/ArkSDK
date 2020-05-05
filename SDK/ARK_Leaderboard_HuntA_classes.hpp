#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leaderboard_HuntA_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Leaderboard_HuntA.Leaderboard_HuntA_C
// 0x0004 (0x005C - 0x0058)
class ULeaderboard_HuntA_C : public ULeaderboard
{
public:
	int                                                MaxPlayerNameCharacterCount;                              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Leaderboard_HuntA.Leaderboard_HuntA_C");
		return ptr;
	}


	struct FLeaderboardDisplayRow BPFormatLeaderboardRow(struct FName* MissionTag, int* index, struct FLeaderboardRow* DatabaseRow);
	void ExecuteUbergraph_Leaderboard_HuntA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
