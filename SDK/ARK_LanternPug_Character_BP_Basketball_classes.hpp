#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LanternPug_Character_BP_Basketball_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C
// 0x001A (0x245A - 0x2440)
class ALanternPug_Character_BP_Basketball_C : public ALanternPug_Character_BP_C
{
public:
	bool                                               bIsInArena;                                               // 0x2440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2441(0x0007) MISSED OFFSET
	class AActor*                                      selfRef;                                                  // 0x2448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMissionType*                                SaveMissionRef;                                           // 0x2450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x2458(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2459(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LanternPug_Character_BP_Basketball.LanternPug_Character_BP_Basketball_C");
		return ptr;
	}


	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	bool BPCanMountOnCharacter(class APrimalCharacter** Character);
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_LanternPug_Character_BP_Basketball(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
