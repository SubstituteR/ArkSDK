#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapGun_Silencer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapGun_Silencer.WeapGun_Silencer_C
// 0x0010 (0x0D98 - 0x0D88)
class AWeapGun_Silencer_C : public AWeapGun_C
{
public:
	class UStaticMeshComponent*                        FirstPersonAttachment;                                    // 0x0D88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ThirdPersonAttachment;                                    // 0x0D90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGun_Silencer.WeapGun_Silencer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapGun_Silencer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
