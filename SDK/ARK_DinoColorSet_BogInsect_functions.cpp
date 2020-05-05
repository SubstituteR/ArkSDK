// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_BogInsect_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_BogInsect.DinoColorSet_BogInsect_C.ExecuteUbergraph_DinoColorSet_BogInsect
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_BogInsect_C::ExecuteUbergraph_DinoColorSet_BogInsect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_BogInsect.DinoColorSet_BogInsect_C.ExecuteUbergraph_DinoColorSet_BogInsect");

	UDinoColorSet_BogInsect_C_ExecuteUbergraph_DinoColorSet_BogInsect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
