// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Iguanadon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Iguanadon.DinoColorSet_Iguanadon_C.ExecuteUbergraph_DinoColorSet_Iguanadon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Iguanadon_C::ExecuteUbergraph_DinoColorSet_Iguanadon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Iguanadon.DinoColorSet_Iguanadon_C.ExecuteUbergraph_DinoColorSet_Iguanadon");

	UDinoColorSet_Iguanadon_C_ExecuteUbergraph_DinoColorSet_Iguanadon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
