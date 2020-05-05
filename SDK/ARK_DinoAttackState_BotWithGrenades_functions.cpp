// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DinoAttackState_BotWithGrenades_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackState_BotWithGrenades.DinoAttackState_BotWithGrenades_C.ExecuteUbergraph_DinoAttackState_BotWithGrenades
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackState_BotWithGrenades_C::ExecuteUbergraph_DinoAttackState_BotWithGrenades(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackState_BotWithGrenades.DinoAttackState_BotWithGrenades_C.ExecuteUbergraph_DinoAttackState_BotWithGrenades");

	UDinoAttackState_BotWithGrenades_C_ExecuteUbergraph_DinoAttackState_BotWithGrenades_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
