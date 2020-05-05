#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Dodo_Character_BP_Basketball_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C
// 0x001A (0x212A - 0x2110)
class ADodo_Character_BP_Basketball_C : public ADodo_Character_BP_C
{
public:
	bool                                               bIsInArena;                                               // 0x2110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x2111(0x0007) MISSED OFFSET
	class AActor*                                      selfRef;                                                  // 0x2118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AMissionType*                                SavedMissionRef;                                          // 0x2120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x2128(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2129(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dodo_Character_BP_Basketball.Dodo_Character_BP_Basketball_C");
		return ptr;
	}


	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	bool BPCanMountOnCharacter(class APrimalCharacter** Character);
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Dodo_Character_BP_Basketball(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
