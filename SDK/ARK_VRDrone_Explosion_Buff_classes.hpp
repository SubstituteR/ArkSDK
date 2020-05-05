#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRDrone_Explosion_Buff_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VRDrone_Explosion_Buff.VRDrone_Explosion_Buff_C
// 0x0008 (0x0A90 - 0x0A88)
class AVRDrone_Explosion_Buff_C : public ABuff_EndBossMorph_Dissolve_In_Minion_C
{
public:
	class USoundBase*                                  ExplosionSound;                                           // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRDrone_Explosion_Buff.VRDrone_Explosion_Buff_C");
		return ptr;
	}


	void ReceiveDestroyed();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_VRDrone_Explosion_Buff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
