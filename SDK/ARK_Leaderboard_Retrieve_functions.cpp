// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leaderboard_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Leaderboard_Retrieve.Leaderboard_Retrieve_C.BPFormatLeaderboardRow
// (Native, Event, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  MissionTag                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLeaderboardRow         DatabaseRow                    (Parm, OutParm, ReferenceParm)
// struct FLeaderboardDisplayRow  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLeaderboardDisplayRow ULeaderboard_Retrieve_C::BPFormatLeaderboardRow(struct FName* MissionTag, int* index, struct FLeaderboardRow* DatabaseRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_Retrieve.Leaderboard_Retrieve_C.BPFormatLeaderboardRow");

	ULeaderboard_Retrieve_C_BPFormatLeaderboardRow_Params params;
	params.MissionTag = MissionTag;
	params.index = index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DatabaseRow != nullptr)
		*DatabaseRow = params.DatabaseRow;

	return params.ReturnValue;
}


// Function Leaderboard_Retrieve.Leaderboard_Retrieve_C.ExecuteUbergraph_Leaderboard_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboard_Retrieve_C::ExecuteUbergraph_Leaderboard_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_Retrieve.Leaderboard_Retrieve_C.ExecuteUbergraph_Leaderboard_Retrieve");

	ULeaderboard_Retrieve_C_ExecuteUbergraph_Leaderboard_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
