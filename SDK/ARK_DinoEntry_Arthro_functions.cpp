// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_Arthro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Arthro.DinoEntry_Arthro_C.ExecuteUbergraph_DinoEntry_Arthro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Arthro_C::ExecuteUbergraph_DinoEntry_Arthro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Arthro.DinoEntry_Arthro_C.ExecuteUbergraph_DinoEntry_Arthro");

	UDinoEntry_Arthro_C_ExecuteUbergraph_DinoEntry_Arthro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
