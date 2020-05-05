#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Buff_GravityWell_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_GravityWell.Buff_GravityWell_C
// 0x0010 (0x0940 - 0x0930)
class ABuff_GravityWell_C : public ABuff_Base_C
{
public:
	struct FVector                                     GravityCenter;                                            // 0x0930(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrengthMultiplier;                                       // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_GravityWell.Buff_GravityWell_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	void SetupGravityForce(const struct FVector& GravityCenter, float StrengthMultiplier);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_GravityWell(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
