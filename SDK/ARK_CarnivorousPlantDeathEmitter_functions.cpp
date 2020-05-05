// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CarnivorousPlantDeathEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CarnivorousPlantDeathEmitter.CarnivorousPlantDeathEmitter_C.UserConstructionScript
// ()

void ACarnivorousPlantDeathEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CarnivorousPlantDeathEmitter.CarnivorousPlantDeathEmitter_C.UserConstructionScript");

	ACarnivorousPlantDeathEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CarnivorousPlantDeathEmitter.CarnivorousPlantDeathEmitter_C.ExecuteUbergraph_CarnivorousPlantDeathEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACarnivorousPlantDeathEmitter_C::ExecuteUbergraph_CarnivorousPlantDeathEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CarnivorousPlantDeathEmitter.CarnivorousPlantDeathEmitter_C.ExecuteUbergraph_CarnivorousPlantDeathEmitter");

	ACarnivorousPlantDeathEmitter_C_ExecuteUbergraph_CarnivorousPlantDeathEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
