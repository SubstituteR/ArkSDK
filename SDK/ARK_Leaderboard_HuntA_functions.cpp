// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Leaderboard_HuntA_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Leaderboard_HuntA.Leaderboard_HuntA_C.BPFormatLeaderboardRow
// (NetReliable, NetRequest, Exec, NetResponse, NetMulticast, Protected, Delegate, HasDefaults, NetClient, DLLImport, BlueprintEvent, NetValidate)
// Parameters:
// struct FName*                  MissionTag                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLeaderboardRow         DatabaseRow                    (Parm, OutParm, ReferenceParm)
// struct FLeaderboardDisplayRow  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLeaderboardDisplayRow ULeaderboard_HuntA_C::BPFormatLeaderboardRow(struct FName* MissionTag, int* index, struct FLeaderboardRow* DatabaseRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_HuntA.Leaderboard_HuntA_C.BPFormatLeaderboardRow");

	ULeaderboard_HuntA_C_BPFormatLeaderboardRow_Params params;
	params.MissionTag = MissionTag;
	params.index = index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DatabaseRow != nullptr)
		*DatabaseRow = params.DatabaseRow;

	return params.ReturnValue;
}


// Function Leaderboard_HuntA.Leaderboard_HuntA_C.ExecuteUbergraph_Leaderboard_HuntA
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboard_HuntA_C::ExecuteUbergraph_Leaderboard_HuntA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Leaderboard_HuntA.Leaderboard_HuntA_C.ExecuteUbergraph_Leaderboard_HuntA");

	ULeaderboard_HuntA_C_ExecuteUbergraph_Leaderboard_HuntA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
