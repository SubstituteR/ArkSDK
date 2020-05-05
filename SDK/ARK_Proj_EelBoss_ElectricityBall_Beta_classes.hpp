#pragma once

// ARK (309.53) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARK_Proj_EelBoss_ElectricityBall_Beta_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_EelBoss_ElectricityBall_Beta.Proj_EelBoss_ElectricityBall_Beta_C
// 0x0000 (0x06CA - 0x06CA)
class AProj_EelBoss_ElectricityBall_Beta_C : public AProj_EelBoss_ElectricityBall_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_EelBoss_ElectricityBall_Beta.Proj_EelBoss_ElectricityBall_Beta_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Proj_EelBoss_ElectricityBall_Beta(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
