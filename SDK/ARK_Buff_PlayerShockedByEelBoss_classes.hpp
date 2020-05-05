#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_PlayerShockedByEelBoss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C
// 0x0001 (0x0931 - 0x0930)
class ABuff_PlayerShockedByEelBoss_C : public ABuff_Base_C
{
public:
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0930(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PlayerShockedByEelBoss.Buff_PlayerShockedByEelBoss_C");
		return ptr;
	}


	void ShockShake();
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_PlayerShockedByEelBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
