// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LootItemSet_Missions_Hunt_Arctic_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Missions_Hunt_Arctic.LootItemSet_Missions_Hunt_Arctic_C.ExecuteUbergraph_LootItemSet_Missions_Hunt_Arctic
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Missions_Hunt_Arctic_C::ExecuteUbergraph_LootItemSet_Missions_Hunt_Arctic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Missions_Hunt_Arctic.LootItemSet_Missions_Hunt_Arctic_C.ExecuteUbergraph_LootItemSet_Missions_Hunt_Arctic");

	ULootItemSet_Missions_Hunt_Arctic_C_ExecuteUbergraph_LootItemSet_Missions_Hunt_Arctic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
