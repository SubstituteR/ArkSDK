#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapRifle_LaserBeam_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapRifle_LaserBeam.WeapRifle_LaserBeam_C
// 0x0020 (0x0DA8 - 0x0D88)
class AWeapRifle_LaserBeam_C : public AWeapRifle_C
{
public:
	class UShooterLaserBeamComponent*                  FPVLaserBeam;                                             // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UShooterLaserBeamComponent*                  TPVLaserBeam;                                             // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapRifle_LaserBeam.WeapRifle_LaserBeam_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapRifle_LaserBeam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
