#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapTaxidermyTool_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapTaxidermyTool.WeapTaxidermyTool_C
// 0x0018 (0x0D68 - 0x0D50)
class AWeapTaxidermyTool_C : public AShooterWeapon_Melee
{
public:
	class UStaticMeshComponent*                        TPTool;                                                   // 0x0D50(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        FPTool;                                                   // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AShooterCharacter*                           ShooterCharRef;                                           // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapTaxidermyTool.WeapTaxidermyTool_C");
		return ptr;
	}


	struct FWeaponAnim BPGetSelectedMeleeAttackAnim();
	void UserConstructionScript();
	void ExecuteUbergraph_WeapTaxidermyTool(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
