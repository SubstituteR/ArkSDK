// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSpawnEntriesSwampCave_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSpawnEntriesSwampCave.DinoSpawnEntriesSwampCave_C.ExecuteUbergraph_DinoSpawnEntriesSwampCave
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSpawnEntriesSwampCave_C::ExecuteUbergraph_DinoSpawnEntriesSwampCave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSpawnEntriesSwampCave.DinoSpawnEntriesSwampCave_C.ExecuteUbergraph_DinoSpawnEntriesSwampCave");

	UDinoSpawnEntriesSwampCave_C_ExecuteUbergraph_DinoSpawnEntriesSwampCave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
