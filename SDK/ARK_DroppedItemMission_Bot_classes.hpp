#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DroppedItemMission_Bot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemMission_Bot.DroppedItemMission_Bot_C
// 0x0008 (0x0710 - 0x0708)
class ADroppedItemMission_Bot_C : public ADroppedItemMission_Generic_C
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemMission_Bot.DroppedItemMission_Bot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemMission_Bot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
