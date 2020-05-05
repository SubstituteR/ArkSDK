#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_CorruptedAvatar_SpearImpactEffect_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CorruptedAvatar_SpearImpactEffect.CorruptedAvatar_SpearImpactEffect_C
// 0x0008 (0x0848 - 0x0840)
class ACorruptedAvatar_SpearImpactEffect_C : public AShooterImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CorruptedAvatar_SpearImpactEffect.CorruptedAvatar_SpearImpactEffect_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CorruptedAvatar_SpearImpactEffect(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
