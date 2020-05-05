#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalItem_GauntletDamageBuffKey_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItem_GauntletDamageBuffKey.PrimalItem_GauntletDamageBuffKey_C
// 0x0018 (0x09C8 - 0x09B0)
class UPrimalItem_GauntletDamageBuffKey_C : public UPrimalItem
{
public:
	class UStaticMesh*                                 DamageBuffPickupMesh;                                     // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInstance*>                   DamageBuffPickupMaterialOverrides;                        // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItem_GauntletDamageBuffKey.PrimalItem_GauntletDamageBuffKey_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItem_GauntletDamageBuffKey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
