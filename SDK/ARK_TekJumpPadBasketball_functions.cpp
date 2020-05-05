// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_TekJumpPadBasketball_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekJumpPadBasketball.TekJumpPadBasketball_C.UserConstructionScript
// ()

void ATekJumpPadBasketball_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPadBasketball.TekJumpPadBasketball_C.UserConstructionScript");

	ATekJumpPadBasketball_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPadBasketball.TekJumpPadBasketball_C.ExecuteUbergraph_TekJumpPadBasketball
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPadBasketball_C::ExecuteUbergraph_TekJumpPadBasketball(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPadBasketball.TekJumpPadBasketball_C.ExecuteUbergraph_TekJumpPadBasketball");

	ATekJumpPadBasketball_C_ExecuteUbergraph_TekJumpPadBasketball_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
