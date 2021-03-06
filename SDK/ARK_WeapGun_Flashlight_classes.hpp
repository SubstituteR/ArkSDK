#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapGun_Flashlight_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapGun_Flashlight.WeapGun_Flashlight_C
// 0x0030 (0x0DB8 - 0x0D88)
class AWeapGun_Flashlight_C : public AWeapGun_C
{
public:
	class UParticleSystemComponent*                    SecondaryFPVToggleComponent;                              // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         FPVToggleComponent;                                       // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0D98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    SecondaryTPVToggleComponent;                              // 0x0DA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USpotLightComponent*                         TPVToggleComponent;                                       // 0x0DA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0DB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGun_Flashlight.WeapGun_Flashlight_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapGun_Flashlight(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
