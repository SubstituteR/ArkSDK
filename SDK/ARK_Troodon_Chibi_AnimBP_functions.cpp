// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Troodon_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Troodon_Chibi_AnimBP.Troodon_Chibi_AnimBP_C.ExecuteUbergraph_Troodon_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTroodon_Chibi_AnimBP_C::ExecuteUbergraph_Troodon_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Troodon_Chibi_AnimBP.Troodon_Chibi_AnimBP_C.ExecuteUbergraph_Troodon_Chibi_AnimBP");

	UTroodon_Chibi_AnimBP_C_ExecuteUbergraph_Troodon_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
