// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_SE_DinoSpawnEntriesMountain_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SE_DinoSpawnEntriesMountain.SE_DinoSpawnEntriesMountain_C.ExecuteUbergraph_SE_DinoSpawnEntriesMountain
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USE_DinoSpawnEntriesMountain_C::ExecuteUbergraph_SE_DinoSpawnEntriesMountain(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SE_DinoSpawnEntriesMountain.SE_DinoSpawnEntriesMountain_C.ExecuteUbergraph_SE_DinoSpawnEntriesMountain");

	USE_DinoSpawnEntriesMountain_C_ExecuteUbergraph_SE_DinoSpawnEntriesMountain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
