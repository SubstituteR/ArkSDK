#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Drone_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Drone_AnimBP.Drone_AnimBP_C
// 0x0000 (0x1BC8 - 0x1BC8)
class UDrone_AnimBP_C : public UDinoBlueprintBase_RootTransform_FlyStrafing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Drone_AnimBP.Drone_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Drone_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
