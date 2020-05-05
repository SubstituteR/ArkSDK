#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_ProjGiantRock_RockElemental_Fire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjGiantRock_RockElemental_Fire.ProjGiantRock_RockElemental_Fire_C
// 0x0019 (0x0699 - 0x0680)
class AProjGiantRock_RockElemental_Fire_C : public AProjGiantRock_RockElemental_C
{
public:
	class UAudioComponent*                             Audio1;                                                   // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExplosionRange;                                           // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0694(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0698(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjGiantRock_RockElemental_Fire.ProjGiantRock_RockElemental_Fire_C");
		return ptr;
	}


	void ExplodeFireRock();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ProjGiantRock_RockElemental_Fire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
