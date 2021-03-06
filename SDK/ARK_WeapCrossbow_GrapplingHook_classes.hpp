#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_WeapCrossbow_GrapplingHook_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C
// 0x0028 (0x0E50 - 0x0E28)
class AWeapCrossbow_GrapplingHook_C : public APrimalWeaponGrapplingHook
{
public:
	class USceneComponent*                             CableStart3P;                                             // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MechanismMesh3P;                                          // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ProjectileMesh1P;                                         // 0x0E38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CableStart1P;                                             // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      MechanismMesh1P;                                          // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCrossbow_GrapplingHook.WeapCrossbow_GrapplingHook_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapCrossbow_GrapplingHook(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
