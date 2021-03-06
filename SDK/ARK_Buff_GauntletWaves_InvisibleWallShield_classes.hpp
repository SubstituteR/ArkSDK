#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_GauntletWaves_InvisibleWallShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C
// 0x003D (0x096D - 0x0930)
class ABuff_GauntletWaves_InvisibleWallShield_C : public APrimalBuff
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ShieldInner;                                              // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ShieldOuter;                                              // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ShieldScale;                                              // 0x0948(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x094C(0x0004) MISSED OFFSET
	class UMaterialInterface*                          ShieldMaterial;                                           // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              K2Node_CustomEvent_Scale;                                 // 0x0958(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_FloatFloat_ReturnValue;               // 0x095C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x095D(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Conv_FloatToVector_ReturnValue;                  // 0x0960(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x096C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_GauntletWaves_InvisibleWallShield.Buff_GauntletWaves_InvisibleWallShield_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetupShieldScale(float Scale);
	void ExecuteUbergraph_Buff_GauntletWaves_InvisibleWallShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
