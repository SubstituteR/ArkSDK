// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EngramEntry_RocketTurret_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_RocketTurret.EngramEntry_RocketTurret_C.ExecuteUbergraph_EngramEntry_RocketTurret
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_RocketTurret_C::ExecuteUbergraph_EngramEntry_RocketTurret(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_RocketTurret.EngramEntry_RocketTurret_C.ExecuteUbergraph_EngramEntry_RocketTurret");

	UEngramEntry_RocketTurret_C_ExecuteUbergraph_EngramEntry_RocketTurret_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
