#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_LeftClimbing_ImpactEffect_Rock_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LeftClimbing_ImpactEffect_Rock.LeftClimbing_ImpactEffect_Rock_C
// 0x0000 (0x04E0 - 0x04E0)
class ALeftClimbing_ImpactEffect_Rock_C : public AClimbing_ImpactEffect_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LeftClimbing_ImpactEffect_Rock.LeftClimbing_ImpactEffect_Rock_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_LeftClimbing_ImpactEffect_Rock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
