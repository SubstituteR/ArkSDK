// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Para_Chibi_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Para_Chibi_AnimBP.Para_Chibi_AnimBP_C.ExecuteUbergraph_Para_Chibi_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPara_Chibi_AnimBP_C::ExecuteUbergraph_Para_Chibi_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Para_Chibi_AnimBP.Para_Chibi_AnimBP_C.ExecuteUbergraph_Para_Chibi_AnimBP");

	UPara_Chibi_AnimBP_C_ExecuteUbergraph_Para_Chibi_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
