// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LeaderboardRow_Default_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LeaderboardRow_Default.LeaderboardRow_Default_C.ExecuteUbergraph_LeaderboardRow_Default
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULeaderboardRow_Default_C::ExecuteUbergraph_LeaderboardRow_Default(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LeaderboardRow_Default.LeaderboardRow_Default_C.ExecuteUbergraph_LeaderboardRow_Default");

	ULeaderboardRow_Default_C_ExecuteUbergraph_LeaderboardRow_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
