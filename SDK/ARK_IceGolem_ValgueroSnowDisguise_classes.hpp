#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_IceGolem_ValgueroSnowDisguise_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IceGolem_ValgueroSnowDisguise.IceGolem_ValgueroSnowDisguise_C
// 0x0010 (0x0470 - 0x0460)
class AIceGolem_ValgueroSnowDisguise_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IceGolem_ValgueroSnowDisguise.IceGolem_ValgueroSnowDisguise_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_IceGolem_ValgueroSnowDisguise(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
