// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Megalodon_Ocean_Retrieve_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Megalodon_Ocean_Retrieve.DinoColorSet_Megalodon_Ocean_Retrieve_C.ExecuteUbergraph_DinoColorSet_Megalodon_Ocean_Retrieve
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Megalodon_Ocean_Retrieve_C::ExecuteUbergraph_DinoColorSet_Megalodon_Ocean_Retrieve(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Megalodon_Ocean_Retrieve.DinoColorSet_Megalodon_Ocean_Retrieve_C.ExecuteUbergraph_DinoColorSet_Megalodon_Ocean_Retrieve");

	UDinoColorSet_Megalodon_Ocean_Retrieve_C_ExecuteUbergraph_DinoColorSet_Megalodon_Ocean_Retrieve_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
