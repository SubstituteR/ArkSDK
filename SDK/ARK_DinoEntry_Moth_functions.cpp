// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_Moth_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Moth.DinoEntry_Moth_C.ExecuteUbergraph_DinoEntry_Moth
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Moth_C::ExecuteUbergraph_DinoEntry_Moth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Moth.DinoEntry_Moth_C.ExecuteUbergraph_DinoEntry_Moth");

	UDinoEntry_Moth_C_ExecuteUbergraph_DinoEntry_Moth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
