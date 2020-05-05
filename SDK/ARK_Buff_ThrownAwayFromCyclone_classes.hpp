#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_ThrownAwayFromCyclone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C
// 0x000C (0x093C - 0x0930)
class ABuff_ThrownAwayFromCyclone_C : public ABuff_Base_C
{
public:
	struct FVector                                     ThrownAwayVelocity;                                       // 0x0930(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ThrownAwayFromCyclone.Buff_ThrownAwayFromCyclone_C");
		return ptr;
	}


	void StopBySomething();
	struct FVector BP_OverrideCharacterSwimmingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy);
	struct FVector BP_OverrideCharacterFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity);
	float BP_OverrideMoveForwardInput(float* CurrentInput);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ThrownAwayFromCyclone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
