// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LootItemSet_Seeker_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Seeker.LootItemSet_Seeker_C.ExecuteUbergraph_LootItemSet_Seeker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Seeker_C::ExecuteUbergraph_LootItemSet_Seeker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Seeker.LootItemSet_Seeker_C.ExecuteUbergraph_LootItemSet_Seeker");

	ULootItemSet_Seeker_C_ExecuteUbergraph_LootItemSet_Seeker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
