// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen1_OceanShallow_DinoSpawnEntries_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen1_OceanShallow_DinoSpawnEntries.Gen1_OceanShallow_DinoSpawnEntries_C.ExecuteUbergraph_Gen1_OceanShallow_DinoSpawnEntries
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGen1_OceanShallow_DinoSpawnEntries_C::ExecuteUbergraph_Gen1_OceanShallow_DinoSpawnEntries(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen1_OceanShallow_DinoSpawnEntries.Gen1_OceanShallow_DinoSpawnEntries_C.ExecuteUbergraph_Gen1_OceanShallow_DinoSpawnEntries");

	UGen1_OceanShallow_DinoSpawnEntries_C_ExecuteUbergraph_Gen1_OceanShallow_DinoSpawnEntries_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
