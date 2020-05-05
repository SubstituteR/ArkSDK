// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WyvPoisonGasCloud_Gauntlet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvPoisonGasCloud_Gauntlet.WyvPoisonGasCloud_Gauntlet_C.UserConstructionScript
// ()

void AWyvPoisonGasCloud_Gauntlet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvPoisonGasCloud_Gauntlet.WyvPoisonGasCloud_Gauntlet_C.UserConstructionScript");

	AWyvPoisonGasCloud_Gauntlet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvPoisonGasCloud_Gauntlet.WyvPoisonGasCloud_Gauntlet_C.ExecuteUbergraph_WyvPoisonGasCloud_Gauntlet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvPoisonGasCloud_Gauntlet_C::ExecuteUbergraph_WyvPoisonGasCloud_Gauntlet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvPoisonGasCloud_Gauntlet.WyvPoisonGasCloud_Gauntlet_C.ExecuteUbergraph_WyvPoisonGasCloud_Gauntlet");

	AWyvPoisonGasCloud_Gauntlet_C_ExecuteUbergraph_WyvPoisonGasCloud_Gauntlet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
