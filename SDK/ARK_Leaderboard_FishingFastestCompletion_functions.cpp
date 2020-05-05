// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leaderboard_FishingFastestCompletion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Leaderboard_FishingFastestCompletion.Leaderboard_FishingFastestCompletion_C.BPFormatLeaderboardRow
// (Net, NetReliable, Event, Public, Private, Protected, HasDefaults, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  MissionTag                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLeaderboardRow         DatabaseRow                    (Parm, OutParm, ReferenceParm)
// struct FLeaderboardDisplayRow  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLeaderboardDisplayRow ULeaderboard_FishingFastestCompletion_C::BPFormatLeaderboardRow(struct FName* MissionTag, int* index, struct FLeaderboardRow* DatabaseRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_FishingFastestCompletion.Leaderboard_FishingFastestCompletion_C.BPFormatLeaderboardRow");

	ULeaderboard_FishingFastestCompletion_C_BPFormatLeaderboardRow_Params params;
	params.MissionTag = MissionTag;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DatabaseRow != nullptr)
		*DatabaseRow = params.DatabaseRow;

	return params.ReturnValue;
}


// Function Leaderboard_FishingFastestCompletion.Leaderboard_FishingFastestCompletion_C.Select Icon
// ()
// Parameters:
// int                            Place                          (Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Icon                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULeaderboard_FishingFastestCompletion_C::Select_Icon(int Place, class UTexture2D** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_FishingFastestCompletion.Leaderboard_FishingFastestCompletion_C.Select Icon");

	ULeaderboard_FishingFastestCompletion_C_Select_Icon_Params params;
	params.Place = Place;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function Leaderboard_FishingFastestCompletion.Leaderboard_FishingFastestCompletion_C.ExecuteUbergraph_Leaderboard_FishingFastestCompletion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboard_FishingFastestCompletion_C::ExecuteUbergraph_Leaderboard_FishingFastestCompletion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_FishingFastestCompletion.Leaderboard_FishingFastestCompletion_C.ExecuteUbergraph_Leaderboard_FishingFastestCompletion");

	ULeaderboard_FishingFastestCompletion_C_ExecuteUbergraph_Leaderboard_FishingFastestCompletion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
