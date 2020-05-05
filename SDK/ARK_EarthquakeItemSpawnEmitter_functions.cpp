// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EarthquakeItemSpawnEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EarthquakeItemSpawnEmitter.EarthquakeItemSpawnEmitter_C.UserConstructionScript
// ()

void AEarthquakeItemSpawnEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EarthquakeItemSpawnEmitter.EarthquakeItemSpawnEmitter_C.UserConstructionScript");

	AEarthquakeItemSpawnEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EarthquakeItemSpawnEmitter.EarthquakeItemSpawnEmitter_C.ExecuteUbergraph_EarthquakeItemSpawnEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEarthquakeItemSpawnEmitter_C::ExecuteUbergraph_EarthquakeItemSpawnEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarthquakeItemSpawnEmitter.EarthquakeItemSpawnEmitter_C.ExecuteUbergraph_EarthquakeItemSpawnEmitter");

	AEarthquakeItemSpawnEmitter_C_ExecuteUbergraph_EarthquakeItemSpawnEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
