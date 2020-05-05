#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBossTargetBeamComponent_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VRBossTargetBeamComponent_BP.VRBossTargetBeamComponent_BP_C
// 0x0000 (0x071C - 0x071C)
class UVRBossTargetBeamComponent_BP_C : public UVRBossOffsetBeamComponent_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRBossTargetBeamComponent_BP.VRBossTargetBeamComponent_BP_C");
		return ptr;
	}


	void StartFiring();
	void StartCharging();
	void ExecuteUbergraph_VRBossTargetBeamComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
