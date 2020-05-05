// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoSettings_Carnivore_Small_Chupacabra_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_Carnivore_Small_Chupacabra.DinoSettings_Carnivore_Small_Chupacabra_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Chupacabra
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_Carnivore_Small_Chupacabra_C::ExecuteUbergraph_DinoSettings_Carnivore_Small_Chupacabra(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_Carnivore_Small_Chupacabra.DinoSettings_Carnivore_Small_Chupacabra_C.ExecuteUbergraph_DinoSettings_Carnivore_Small_Chupacabra");

	UDinoSettings_Carnivore_Small_Chupacabra_C_ExecuteUbergraph_DinoSettings_Carnivore_Small_Chupacabra_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
