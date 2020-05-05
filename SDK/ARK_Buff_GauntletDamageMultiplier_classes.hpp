#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_GauntletDamageMultiplier_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_GauntletDamageMultiplier.Buff_GauntletDamageMultiplier_C
// 0x0018 (0x0948 - 0x0930)
class ABuff_GauntletDamageMultiplier_C : public ABuff_Base_C
{
public:
	class USkeletalMeshComponent*                      SpawnedBeamLockMeshComp;                                  // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    SpawnedBeamLockCharMeshMID;                               // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           BeamLockCharMeshMaterialParent;                           // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_GauntletDamageMultiplier.Buff_GauntletDamageMultiplier_C");
		return ptr;
	}


	void BPSetupForInstigator(class AActor** ForInstigator);
	void ThrottledTick();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_GauntletDamageMultiplier(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
