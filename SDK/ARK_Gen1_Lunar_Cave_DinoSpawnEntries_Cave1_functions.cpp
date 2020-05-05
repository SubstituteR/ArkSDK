// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Gen1_Lunar_Cave_DinoSpawnEntries_Cave1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Gen1_Lunar_Cave_DinoSpawnEntries_Cave1.Gen1_Lunar_Cave_DinoSpawnEntries_Cave1_C.ExecuteUbergraph_Gen1_Lunar_Cave_DinoSpawnEntries_Cave1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UGen1_Lunar_Cave_DinoSpawnEntries_Cave1_C::ExecuteUbergraph_Gen1_Lunar_Cave_DinoSpawnEntries_Cave1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Gen1_Lunar_Cave_DinoSpawnEntries_Cave1.Gen1_Lunar_Cave_DinoSpawnEntries_Cave1_C.ExecuteUbergraph_Gen1_Lunar_Cave_DinoSpawnEntries_Cave1");

	UGen1_Lunar_Cave_DinoSpawnEntries_Cave1_C_ExecuteUbergraph_Gen1_Lunar_Cave_DinoSpawnEntries_Cave1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
