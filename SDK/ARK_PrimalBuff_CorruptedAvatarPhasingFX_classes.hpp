#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_PrimalBuff_CorruptedAvatarPhasingFX_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C
// 0x000C (0x09F8 - 0x09EC)
class APrimalBuff_CorruptedAvatarPhasingFX_C : public APrimalBuff_ChangeMaterialScalarParamOverTime_C
{
public:
	float                                              ImmobilizeTime;                                           // 0x09EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            K2Node_CustomEvent_character;                             // 0x09F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalBuff_CorruptedAvatarPhasingFX.PrimalBuff_CorruptedAvatarPhasingFX_C");
		return ptr;
	}


	void BPSetupForInstigator(class AActor** ForInstigator);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void OnInstigatorDied(class APrimalCharacter* Character);
	void ExecuteUbergraph_PrimalBuff_CorruptedAvatarPhasingFX(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
