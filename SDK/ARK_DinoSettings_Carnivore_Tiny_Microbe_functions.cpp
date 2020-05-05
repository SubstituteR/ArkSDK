// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Carnivore_Tiny_Microbe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Tiny_Microbe.DinoSettings_Carnivore_Tiny_Microbe_C.ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Microbe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Tiny_Microbe_C::ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Microbe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Tiny_Microbe.DinoSettings_Carnivore_Tiny_Microbe_C.ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Microbe");

	UDinoSettings_Carnivore_Tiny_Microbe_C_ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Microbe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
