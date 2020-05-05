#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Proj_EelBossElectricityBall_Impact_Beta_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_EelBossElectricityBall_Impact_Beta.Proj_EelBossElectricityBall_Impact_Beta_C
// 0x0000 (0x0510 - 0x0510)
class AProj_EelBossElectricityBall_Impact_Beta_C : public AProj_EelBossElectricityBall_Impact_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_EelBossElectricityBall_Impact_Beta.Proj_EelBossElectricityBall_Impact_Beta_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Proj_EelBossElectricityBall_Impact_Beta(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
