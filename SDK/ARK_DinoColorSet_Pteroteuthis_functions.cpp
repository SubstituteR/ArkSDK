// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoColorSet_Pteroteuthis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Pteroteuthis.DinoColorSet_Pteroteuthis_C.ExecuteUbergraph_DinoColorSet_Pteroteuthis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Pteroteuthis_C::ExecuteUbergraph_DinoColorSet_Pteroteuthis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Pteroteuthis.DinoColorSet_Pteroteuthis_C.ExecuteUbergraph_DinoColorSet_Pteroteuthis");

	UDinoColorSet_Pteroteuthis_C_ExecuteUbergraph_DinoColorSet_Pteroteuthis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
