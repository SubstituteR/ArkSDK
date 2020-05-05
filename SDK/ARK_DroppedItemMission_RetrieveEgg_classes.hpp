#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DroppedItemMission_RetrieveEgg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemMission_RetrieveEgg.DroppedItemMission_RetrieveEgg_C
// 0x0000 (0x0708 - 0x0708)
class ADroppedItemMission_RetrieveEgg_C : public ADroppedItemMission_Generic_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemMission_RetrieveEgg.DroppedItemMission_RetrieveEgg_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemMission_RetrieveEgg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
