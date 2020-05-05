// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_VRDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_VRDino.DinoColorSet_VRDino_C.ExecuteUbergraph_DinoColorSet_VRDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_VRDino_C::ExecuteUbergraph_DinoColorSet_VRDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_VRDino.DinoColorSet_VRDino_C.ExecuteUbergraph_DinoColorSet_VRDino");

	UDinoColorSet_VRDino_C_ExecuteUbergraph_DinoColorSet_VRDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
