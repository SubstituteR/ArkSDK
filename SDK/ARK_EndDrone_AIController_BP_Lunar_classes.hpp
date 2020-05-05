#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EndDrone_AIController_BP_Lunar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EndDrone_AIController_BP_Lunar.EndDrone_AIController_BP_Lunar_C
// 0x0000 (0x0968 - 0x0968)
class AEndDrone_AIController_BP_Lunar_C : public AEndDrone_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EndDrone_AIController_BP_Lunar.EndDrone_AIController_BP_Lunar_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EndDrone_AIController_BP_Lunar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
