// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjBotArrow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjBotArrow.ProjBotArrow_C.UserConstructionScript
// ()

void AProjBotArrow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBotArrow.ProjBotArrow_C.UserConstructionScript");

	AProjBotArrow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjBotArrow.ProjBotArrow_C.ExecuteUbergraph_ProjBotArrow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjBotArrow_C::ExecuteUbergraph_ProjBotArrow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjBotArrow.ProjBotArrow_C.ExecuteUbergraph_ProjBotArrow");

	AProjBotArrow_C_ExecuteUbergraph_ProjBotArrow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
