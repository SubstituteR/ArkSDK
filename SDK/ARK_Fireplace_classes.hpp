#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Fireplace_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Fireplace.Fireplace_C
// 0x0018 (0x0DE8 - 0x0DD0)
class AFireplace_C : public ABaseFuelBurner_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_Campfire_C*               PrimalInventoryBP_Campfire_C1;                            // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fireplace.Fireplace_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Fireplace(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
