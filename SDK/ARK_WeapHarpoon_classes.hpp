#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapHarpoon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapHarpoon.WeapHarpoon_C
// 0x0008 (0x0E00 - 0x0DF8)
class AWeapHarpoon_C : public AShooterWeapon_Projectile
{
public:
	class UStaticMeshComponent*                        Mesh3PSM;                                                 // 0x0DF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapHarpoon.WeapHarpoon_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapHarpoon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
