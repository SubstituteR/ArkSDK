#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRDrone_ProjectileEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VRDrone_ProjectileEmitter.VRDrone_ProjectileEmitter_C
// 0x0008 (0x0660 - 0x0658)
class AVRDrone_ProjectileEmitter_C : public AShooterProjectile
{
public:
	class UChildActorComponent*                        ChildActor1;                                              // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRDrone_ProjectileEmitter.VRDrone_ProjectileEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_VRDrone_ProjectileEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
