// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAncestryEntry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAncestryEntry.DinoAncestryEntry_C.ExecuteUbergraph_DinoAncestryEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAncestryEntry_C::ExecuteUbergraph_DinoAncestryEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAncestryEntry.DinoAncestryEntry_C.ExecuteUbergraph_DinoAncestryEntry");

	UDinoAncestryEntry_C_ExecuteUbergraph_DinoAncestryEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
