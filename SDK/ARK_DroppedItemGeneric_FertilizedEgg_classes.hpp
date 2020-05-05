#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_DroppedItemGeneric_FertilizedEgg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg.DroppedItemGeneric_FertilizedEgg_C
// 0x0010 (0x0730 - 0x0720)
class ADroppedItemGeneric_FertilizedEgg_C : public ADroppedItemEgg
{
public:
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg.DroppedItemGeneric_FertilizedEgg_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
