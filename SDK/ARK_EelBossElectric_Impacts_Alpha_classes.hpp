#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_EelBossElectric_Impacts_Alpha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EelBossElectric_Impacts_Alpha.EelBossElectric_Impacts_Alpha_C
// 0x0008 (0x0848 - 0x0840)
class AEelBossElectric_Impacts_Alpha_C : public AShooterImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EelBossElectric_Impacts_Alpha.EelBossElectric_Impacts_Alpha_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_EelBossElectric_Impacts_Alpha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
