// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Herbivore_Tiny_Jerboa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Herbivore_Tiny_Jerboa.DinoSettings_Herbivore_Tiny_Jerboa_C.ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Jerboa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Herbivore_Tiny_Jerboa_C::ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Jerboa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Herbivore_Tiny_Jerboa.DinoSettings_Herbivore_Tiny_Jerboa_C.ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Jerboa");

	UDinoSettings_Herbivore_Tiny_Jerboa_C_ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Jerboa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
