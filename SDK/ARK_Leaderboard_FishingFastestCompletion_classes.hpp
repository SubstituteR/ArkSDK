#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leaderboard_FishingFastestCompletion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Leaderboard_FishingFastestCompletion.Leaderboard_FishingFastestCompletion_C
// 0x0028 (0x0080 - 0x0058)
class ULeaderboard_FishingFastestCompletion_C : public ULeaderboard
{
public:
	int                                                MaxPlayerNameCharacterCount;                              // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	class UTexture2D*                                  GoldIcon;                                                 // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  BronzeIcon;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  SilverIcon;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  fish_icon;                                                // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Leaderboard_FishingFastestCompletion.Leaderboard_FishingFastestCompletion_C");
		return ptr;
	}


	struct FLeaderboardDisplayRow BPFormatLeaderboardRow(struct FName* MissionTag, int* index, struct FLeaderboardRow* DatabaseRow);
	void Select_Icon(int Place, class UTexture2D** Icon);
	void ExecuteUbergraph_Leaderboard_FishingFastestCompletion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
