#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EarthquakeCameraShakeUseScale_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EarthquakeCameraShakeUseScale.EarthquakeCameraShakeUseScale_C
// 0x0000 (0x00B0 - 0x00B0)
class UEarthquakeCameraShakeUseScale_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EarthquakeCameraShakeUseScale.EarthquakeCameraShakeUseScale_C");
		return ptr;
	}


	void ExecuteUbergraph_EarthquakeCameraShakeUseScale(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
