// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_IceKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_IceKaiju.DinoEntry_IceKaiju_C.ExecuteUbergraph_DinoEntry_IceKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_IceKaiju_C::ExecuteUbergraph_DinoEntry_IceKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_IceKaiju.DinoEntry_IceKaiju_C.ExecuteUbergraph_DinoEntry_IceKaiju");

	UDinoEntry_IceKaiju_C_ExecuteUbergraph_DinoEntry_IceKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
