#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_MissionType_Sport_BasketBall_Lunar_Pickup_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionType_Sport_BasketBall_Lunar_Pickup.MissionType_Sport_BasketBall_Lunar_Pickup_C
// 0x0000 (0x2290 - 0x2290)
class AMissionType_Sport_BasketBall_Lunar_Pickup_C : public AMissionType_Sport_BasketBall_Lunar_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionType_Sport_BasketBall_Lunar_Pickup.MissionType_Sport_BasketBall_Lunar_Pickup_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MissionType_Sport_BasketBall_Lunar_Pickup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
