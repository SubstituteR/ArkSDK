// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LootItemSet_Missions_Hunt_Ocean_Plesio_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Missions_Hunt_Ocean_Plesio.LootItemSet_Missions_Hunt_Ocean_Plesio_C.ExecuteUbergraph_LootItemSet_Missions_Hunt_Ocean_Plesio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Missions_Hunt_Ocean_Plesio_C::ExecuteUbergraph_LootItemSet_Missions_Hunt_Ocean_Plesio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Missions_Hunt_Ocean_Plesio.LootItemSet_Missions_Hunt_Ocean_Plesio_C.ExecuteUbergraph_LootItemSet_Missions_Hunt_Ocean_Plesio");

	ULootItemSet_Missions_Hunt_Ocean_Plesio_C_ExecuteUbergraph_LootItemSet_Missions_Hunt_Ocean_Plesio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
