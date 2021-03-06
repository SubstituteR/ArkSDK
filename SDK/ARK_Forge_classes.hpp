#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Forge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Forge.Forge_C
// 0x0010 (0x0DE0 - 0x0DD0)
class AForge_C : public ABaseFuelBurner_C
{
public:
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_Forge_C*                  PrimalInventoryBP_Forge_C1;                               // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Forge.Forge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Forge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
