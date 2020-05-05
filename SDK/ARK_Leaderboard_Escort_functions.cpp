// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leaderboard_Escort_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Leaderboard_Escort.Leaderboard_Escort_C.BPFormatLeaderboardRow
// (NetReliable, NetRequest, Event, Static, Public, Private, Delegate, NetServer, HasOutParms, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  MissionTag                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLeaderboardRow         DatabaseRow                    (Parm, OutParm, ReferenceParm)
// struct FLeaderboardDisplayRow  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLeaderboardDisplayRow ULeaderboard_Escort_C::STATIC_BPFormatLeaderboardRow(struct FName* MissionTag, int* index, struct FLeaderboardRow* DatabaseRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_Escort.Leaderboard_Escort_C.BPFormatLeaderboardRow");

	ULeaderboard_Escort_C_BPFormatLeaderboardRow_Params params;
	params.MissionTag = MissionTag;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DatabaseRow != nullptr)
		*DatabaseRow = params.DatabaseRow;

	return params.ReturnValue;
}


// Function Leaderboard_Escort.Leaderboard_Escort_C.ExecuteUbergraph_Leaderboard_Escort
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboard_Escort_C::ExecuteUbergraph_Leaderboard_Escort(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_Escort.Leaderboard_Escort_C.ExecuteUbergraph_Leaderboard_Escort");

	ULeaderboard_Escort_C_ExecuteUbergraph_Leaderboard_Escort_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
