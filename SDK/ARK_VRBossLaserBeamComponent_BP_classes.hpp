#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBossLaserBeamComponent_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VRBossLaserBeamComponent_BP.VRBossLaserBeamComponent_BP_C
// 0x0001 (0x0711 - 0x0710)
class UVRBossLaserBeamComponent_BP_C : public UBeamWeaponComponent
{
public:
	bool                                               IsUnlocked_;                                              // 0x0710(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRBossLaserBeamComponent_BP.VRBossLaserBeamComponent_BP_C");
		return ptr;
	}


	void UpdateBeamVisuals();
	void ExecuteUbergraph_VRBossLaserBeamComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
