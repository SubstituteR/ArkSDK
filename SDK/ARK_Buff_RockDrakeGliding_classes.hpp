#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_RockDrakeGliding_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RockDrakeGliding.Buff_RockDrakeGliding_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_RockDrakeGliding_C : public ABuff_Base_Disease_Low_GasMaskable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RockDrakeGliding.Buff_RockDrakeGliding_C");
		return ptr;
	}


	bool AllowPostProcessEffect();
	float GetBuffPostprocessIntensity();
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BuffTickClient(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RockDrakeGliding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
