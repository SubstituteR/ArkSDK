#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LowOscillationLongCameraShake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LowOscillationLongCameraShake.LowOscillationLongCameraShake_C
// 0x0000 (0x00B0 - 0x00B0)
class ULowOscillationLongCameraShake_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LowOscillationLongCameraShake.LowOscillationLongCameraShake_C");
		return ptr;
	}


	void ExecuteUbergraph_LowOscillationLongCameraShake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
