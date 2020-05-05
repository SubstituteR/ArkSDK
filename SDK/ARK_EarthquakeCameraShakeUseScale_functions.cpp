// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EarthquakeCameraShakeUseScale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EarthquakeCameraShakeUseScale.EarthquakeCameraShakeUseScale_C.ExecuteUbergraph_EarthquakeCameraShakeUseScale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEarthquakeCameraShakeUseScale_C::ExecuteUbergraph_EarthquakeCameraShakeUseScale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EarthquakeCameraShakeUseScale.EarthquakeCameraShakeUseScale_C.ExecuteUbergraph_EarthquakeCameraShakeUseScale");

	UEarthquakeCameraShakeUseScale_C_ExecuteUbergraph_EarthquakeCameraShakeUseScale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
