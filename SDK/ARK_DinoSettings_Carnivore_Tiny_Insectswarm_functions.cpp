// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Carnivore_Tiny_Insectswarm_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Tiny_Insectswarm.DinoSettings_Carnivore_Tiny_Insectswarm_C.ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Insectswarm
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Tiny_Insectswarm_C::ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Insectswarm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Tiny_Insectswarm.DinoSettings_Carnivore_Tiny_Insectswarm_C.ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Insectswarm");

	UDinoSettings_Carnivore_Tiny_Insectswarm_C_ExecuteUbergraph_DinoSettings_Carnivore_Tiny_Insectswarm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
