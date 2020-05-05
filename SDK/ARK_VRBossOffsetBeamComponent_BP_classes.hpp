#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_VRBossOffsetBeamComponent_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VRBossOffsetBeamComponent_BP.VRBossOffsetBeamComponent_BP_C
// 0x000B (0x071C - 0x0711)
class UVRBossOffsetBeamComponent_BP_C : public UVRBossLaserBeamComponent_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0711(0x0003) MISSED OFFSET
	struct FName                                       HeadOriginSocketName;                                     // 0x0714(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VRBossOffsetBeamComponent_BP.VRBossOffsetBeamComponent_BP_C");
		return ptr;
	}


	void UpdateBeamVisuals();
	void ExecuteUbergraph_VRBossOffsetBeamComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
