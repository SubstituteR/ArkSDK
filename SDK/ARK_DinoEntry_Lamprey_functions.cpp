// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoEntry_Lamprey_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Lamprey.DinoEntry_Lamprey_C.ExecuteUbergraph_DinoEntry_Lamprey
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Lamprey_C::ExecuteUbergraph_DinoEntry_Lamprey(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Lamprey.DinoEntry_Lamprey_C.ExecuteUbergraph_DinoEntry_Lamprey");

	UDinoEntry_Lamprey_C_ExecuteUbergraph_DinoEntry_Lamprey_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
