#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_OverrideVelocity_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_OverrideVelocity.Buff_OverrideVelocity_C
// 0x0010 (0x0940 - 0x0930)
class ABuff_OverrideVelocity_C : public APrimalBuff
{
public:
	struct FVector                                     NewFallVelocity;                                          // 0x0930(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxNewFallVelocity;                                       // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_OverrideVelocity.Buff_OverrideVelocity_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	struct FVector BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_OverrideVelocity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
