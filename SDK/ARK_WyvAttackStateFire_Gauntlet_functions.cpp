// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WyvAttackStateFire_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvAttackStateFire_Gauntlet.WyvAttackStateFire_Gauntlet_C.ExecuteUbergraph_WyvAttackStateFire_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWyvAttackStateFire_Gauntlet_C::ExecuteUbergraph_WyvAttackStateFire_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvAttackStateFire_Gauntlet.WyvAttackStateFire_Gauntlet_C.ExecuteUbergraph_WyvAttackStateFire_Gauntlet");

	UWyvAttackStateFire_Gauntlet_C_ExecuteUbergraph_WyvAttackStateFire_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
